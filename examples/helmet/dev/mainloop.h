// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// mainloop.h
// Churrera copyleft 2011 by The Mojon Twins.

void main (void) {

	// Install ISR
	
	#asm
		di
	#endasm
	
	#ifdef MODE_128K
		sp_InitIM2(0xf1f1);
		sp_CreateGenericISR(0xf1f1);
		sp_RegisterHook(255, ISR);
		
		#asm
			ei
		#endasm

		wyz_init ();
	#endif

	cortina ();
	
	// splib2 initialization
	sp_Initialize (7, 0);
	sp_Border (BLACK);
	sp_AddMemory(0, NUMBLOCKS, 14, AD_FREE);
	
	// Load tileset
	gen_pt = tileset;
	gpit = 0; do {
		sp_TileArray (gpit, gen_pt);
		gen_pt += 8;
		gpit ++;
	} while (gpit);

	// Sprite creation
	#ifdef NO_MASKS
		sp_player = sp_CreateSpr (sp_OR_SPRITE, 3, sprite_2_a, 1, TRANSPARENT);
		sp_AddColSpr (sp_player, sprite_2_b, TRANSPARENT);
		sp_AddColSpr (sp_player, sprite_2_c, TRANSPARENT);
		p_current_frame = p_next_frame = sprite_2_a;
		
		for (gpit = 0; gpit < 3; gpit ++) {
			sp_moviles [gpit] = sp_CreateSpr(sp_OR_SPRITE, 3, sprite_9_a, 1, TRANSPARENT);
			sp_AddColSpr (sp_moviles [gpit], sprite_9_b, TRANSPARENT);
			sp_AddColSpr (sp_moviles [gpit], sprite_9_c, TRANSPARENT);	
			en_an_current_frame [gpit] = sprite_9_a;
		}
	#else
		sp_player = sp_CreateSpr (sp_MASK_SPRITE, 3, sprite_2_a, 1, TRANSPARENT);
		sp_AddColSpr (sp_player, sprite_2_b, TRANSPARENT);
		sp_AddColSpr (sp_player, sprite_2_c, TRANSPARENT);
		p_current_frame = p_next_frame = sprite_2_a;
		
		for (gpit = 0; gpit < MAX_ENEMS; gpit ++) {
			sp_moviles [gpit] = sp_CreateSpr(sp_MASK_SPRITE, 3, sprite_9_a, 2, TRANSPARENT);
			sp_AddColSpr (sp_moviles [gpit], sprite_9_b, TRANSPARENT);
			sp_AddColSpr (sp_moviles [gpit], sprite_9_c, TRANSPARENT);	
			en_an_current_frame [gpit] = en_an_next_frame [gpit] = sprite_9_a;
		}
	#endif

	#ifdef PLAYER_CAN_FIRE
		for (gpit = 0; gpit < MAX_BULLETS; gpit ++) {
			#ifdef MASKED_BULLETS
				sp_bullets [gpit] = sp_CreateSpr (sp_MASK_SPRITE, 2, sprite_19_a, 1, TRANSPARENT);
			#else		
				sp_bullets [gpit] = sp_CreateSpr (sp_OR_SPRITE, 2, sprite_19_a, 1, TRANSPARENT);
			#endif
			sp_AddColSpr (sp_bullets [gpit], sprite_19_a+32, TRANSPARENT);
		}
	#endif

	#ifdef ENABLE_SIMPLE_COCOS
		for (gpit = 0; gpit < MAX_ENEMS; gpit ++) {
			#ifdef MASKED_BULLETS
				sp_cocos [gpit] = sp_CreateSpr (sp_MASK_SPRITE, 2, sprite_19_a, 1, TRANSPARENT);
			#else		
				sp_cocos [gpit] = sp_CreateSpr (sp_OR_SPRITE, 2, sprite_19_a, 1, TRANSPARENT);
			#endif
			sp_AddColSpr (sp_cocos [gpit], sprite_19_a+32, TRANSPARENT);
		}
	#endif

	#include "my/ci/after_load.h"

	while (1) {
		#ifdef ACTIVATE_SCRIPTING
			main_script_offset = (int) (main_script);
		#endif

		// Here the title screen
		sp_UpdateNow();
		blackout ();
		#ifdef MODE_128K
			// Resource 0 = title.bin
			get_resource (0, 16384);
		#else		
			#asm
				ld hl, _s_title
				ld de, 16384
				call depack
			#endasm
		#endif
		
		#ifdef MODE_128K
			//wyz_play_music (0);
		#endif
		
		select_joyfunc ();
		
		#ifdef MODE_128K
			//wyz_stop_sound ();
		#endif

		#ifdef ENABLE_CHECKPOINTS
			sg_submenu ();
		#endif

		#include "my/ci/before_game.h"

		#ifdef COMPRESSED_LEVELS
			#ifdef ENABLE_CHECKPOINTS
				if (sg_do_load) level = sg_level; else level = 0;
			#else
				level = 1;
			#endif

			#ifndef REFILL_ME
				p_life = PLAYER_LIFE;
			#endif

			while (1) 
		#endif
		
		{
			#ifdef COMPRESSED_LEVELS
				prepare_level (level);			
				blackout_area ();

				#include "my/level_screen.h"
			#endif
					
			#ifndef DIRECT_TO_PLAY
				// Clear screen and show game frame
				cortina ();
				sp_UpdateNow();
				#ifdef MODE_128K
					// Resource 1 = marco.bin
					get_resource (1, 16384);
				#else		
					#asm
						ld hl, _s_marco
						ld de, 16384
						-call depack
					#endasm
				#endif
			#endif

			// Let's do it.
			#include "mainloop/game_loop.h"

			#ifdef COMPRESSED_LEVELS
				if (success) {
					#ifdef MODE_128K
						//wyz_play_music (6);
					#endif
					
					zone_clear ();

					++ level;
					
					if (level == MAX_LEVELS) {
						game_ending ();
						break;
					}
				} else {
					#ifdef MODE_128K
						//wyz_play_music (8);
					#endif

					#if defined(TIMER_ENABLE) && defined(TIMER_GAMEOVER_0) && defined(SHOW_TIMER_OVER)
						if (timer_zero) time_over (); else game_over ();
					#else
						game_over ();
					#endif
					
					#ifdef MODE_128K
						wyz_stop_sound ();
					#endif
					break;
				}
			#else
				if (success) {
					game_ending (); 
				} else {
					//wyz_play_music (8);
					game_over ();
				}
				cortina ();
			#endif
		}
		
		cortina ();
		clear_sprites ();
	}
}
