// MTE MK1 (la Churrera) v5.0
// Copyleft 2010-2014, 2020 by the Mojon Twins

// Generated by ene2h.exe from ..\enems\enems.ene
// Copyleft 2010, 2017 by The Mojon Twins

typedef struct {
	unsigned char x, y;
	unsigned char x1, y1, x2, y2;
	char mx, my;
	char t;
#ifdef PLAYER_CAN_FIRE
	unsigned char life;
#endif
} MALOTE;

MALOTE malotes [] = {
	// Pantalla 0
 	{16, 112, 16, 112, 208, 128, 8, 8, 4},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 1
 	{16, 16, 16, 16, 128, 80, 4, 4, 3},
 	{192, 48, 192, 48, 48, 96, -4, 4, 3},
 	{128, 128, 128, 128, 208, 128, 4, 0, 1},

	// Pantalla 2
 	{16, 16, 16, 16, 192, 96, 4, 4, 3},
 	{48, 96, 48, 96, 208, 48, 4, -4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 3
 	{16, 128, 16, 128, 144, 128, 4, 0, 2},
 	{160, 64, 160, 64, 16, 128, -4, 4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 4
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 5
 	{48, 48, 48, 48, 160, 96, 4, 4, 3},
 	{160, 128, 160, 128, 208, 128, 2, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 6
 	{16, 128, 16, 128, 192, 128, 8, 0, 2},
 	{208, 128, 208, 128, 32, 128, -8, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 7
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 8
 	{128, 48, 128, 48, 208, 80, 4, 4, 3},
 	{80, 64, 80, 64, 112, 64, 4, 0, 2},
 	{208, 48, 208, 48, 128, 80, -4, 4, 3},

	// Pantalla 9
 	{16, 128, 16, 128, 112, 128, 4, 0, 1},
 	{32, 96, 32, 96, 80, 96, 4, 0, 2},
 	{144, 32, 144, 32, 96, 64, -4, 4, 2},

	// Pantalla 10
 	{64, 96, 64, 96, 64, 32, 0, -4, 2},
 	{192, 96, 192, 96, 192, 32, 0, -4, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 11
 	{176, 16, 176, 16, 128, 80, -4, 4, 3},
 	{96, 80, 96, 80, 208, 16, 4, -4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 12
 	{96, 80, 96, 80, 208, 80, 4, 0, 2},
 	{16, 128, 16, 128, 48, 16, 4, -4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 13
 	{144, 16, 144, 16, 96, 16, -4, 0, 3},
 	{96, 48, 96, 48, 144, 48, 4, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 14
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 15
 	{64, 32, 64, 32, 112, 32, 4, 0, 3},
 	{112, 64, 112, 64, 64, 64, -4, 0, 3},
 	{64, 96, 64, 96, 112, 96, 4, 0, 3},

	// Pantalla 16
 	{160, 96, 160, 96, 208, 96, 4, 0, 2},
 	{96, 64, 96, 64, 128, 64, 4, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 17
 	{48, 64, 48, 64, 112, 64, 4, 0, 1},
 	{128, 64, 128, 64, 64, 64, -4, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 18
 	{80, 80, 80, 80, 128, 80, 4, 0, 2},
 	{128, 32, 128, 32, 208, 32, 4, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 19
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 20
 	{16, 16, 16, 16, 48, 128, 4, 4, 3},
 	{96, 80, 96, 80, 160, 80, 4, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 21
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 22
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 23
 	{112, 32, 112, 32, 64, 32, -4, 0, 3},
 	{64, 64, 64, 64, 112, 64, 4, 0, 3},
 	{112, 96, 112, 96, 64, 96, -4, 0, 3},

	// Pantalla 24
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 25
 	{80, 64, 80, 64, 128, 64, 4, 0, 2},
 	{80, 32, 80, 32, 128, 32, 4, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 26
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 27
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 28
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 29
 	{80, 64, 80, 64, 128, 64, 4, 0, 3},
 	{128, 96, 128, 96, 80, 96, -4, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 30
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 31
 	{16, 32, 16, 32, 112, 96, 4, 4, 3},
 	{112, 32, 112, 32, 16, 96, -4, 4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 32
 	{208, 96, 208, 96, 16, 144, -4, 4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 33
 	{16, 16, 16, 16, 192, 64, 4, 4, 3},
 	{112, 80, 112, 80, 192, 80, 4, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 34
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 35
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 36
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 37
 	{80, 96, 80, 96, 128, 32, 4, -4, 3},
 	{224, 48, 224, 48, 80, 128, -4, 4, 3},
 	{48, 128, 48, 128, 128, 128, 4, 0, 1},

	// Pantalla 38
 	{48, 32, 48, 32, 96, 32, 8, 0, 2},
 	{48, 112, 48, 112, 176, 112, 4, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 39
 	{16, 0, 16, 0, 144, 64, 4, 4, 3},
 	{112, 0, 112, 0, 112, 64, 0, 4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 40
 	{96, 64, 96, 64, 208, 32, 4, -4, 3},
 	{64, 96, 64, 96, 176, 32, 4, -4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 41
 	{64, 64, 64, 64, 160, 128, 4, 4, 3},
 	{160, 64, 160, 64, 64, 128, -4, 4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 42
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 43
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 44
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 45
 	{128, 16, 128, 16, 224, 32, 4, 4, 3},
 	{48, 16, 48, 16, 144, 96, 4, 4, 3},
 	{16, 96, 16, 96, 208, 96, 4, 0, 3},

	// Pantalla 46
 	{16, 32, 16, 32, 192, 32, 4, 0, 1},
 	{208, 32, 208, 32, 32, 32, -4, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 47
 	{64, 16, 64, 16, 208, 48, 4, 4, 3},
 	{80, 96, 80, 96, 160, 96, 4, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 48
 	{112, 0, 112, 0, 176, 96, 4, 4, 3},
 	{96, 128, 96, 128, 208, 128, 4, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 49
 	{64, 0, 64, 0, 160, 64, 4, 4, 3},
 	{160, 48, 160, 48, 64, 112, -4, 4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 50
 	{64, 32, 64, 32, 208, 64, 4, 4, 3},
 	{128, 0, 128, 0, 176, 80, 4, 4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 51
 	{16, 16, 16, 16, 208, 48, 4, 4, 3},
 	{224, 16, 224, 16, 64, 80, -4, 4, 3},
 	{80, 48, 80, 48, 80, 48, 0, 0, 1},

	// Pantalla 52
 	{32, 16, 32, 16, 192, 64, 4, 4, 3},
 	{96, 112, 96, 112, 192, 32, 4, -4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 53
 	{64, 48, 64, 48, 208, 48, 4, 0, 3},
 	{208, 48, 208, 48, 64, 48, -4, 0, 3},
 	{112, 16, 112, 16, 112, 128, 0, 4, 3},

	// Pantalla 54
 	{96, 16, 96, 16, 208, 16, 4, 0, 1},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 55
 	{80, 96, 80, 96, 144, 96, 4, 0, 2},
 	{128, 16, 128, 16, 208, 16, 4, 0, 3},
 	{176, 96, 176, 96, 208, 16, 4, -4, 3},

	// Pantalla 56
 	{128, 0, 128, 0, 208, 64, 4, 4, 3},
 	{96, 48, 96, 48, 32, 96, -4, 4, 3},
 	{112, 112, 112, 112, 208, 112, 4, 0, 3},

	// Pantalla 57
 	{32, 16, 32, 16, 128, 80, 4, 4, 3},
 	{48, 112, 48, 112, 128, 112, 4, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 58
 	{96, 96, 96, 96, 96, 96, 0, 0, 1},
 	{160, 80, 160, 80, 160, 80, 0, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 59
 	{48, 48, 48, 48, 128, 128, 4, 4, 3},
 	{176, 48, 176, 48, 64, 128, -4, 4, 3},
 	{112, 32, 112, 32, 112, 32, 0, 0, 2},

	// Pantalla 60
 	{64, 0, 64, 0, 192, 0, 4, 0, 3},
 	{64, 16, 64, 16, 144, 64, 4, 4, 3},
 	{48, 64, 48, 64, 48, 64, 0, 0, 2},

	// Pantalla 61
 	{80, 16, 80, 16, 208, 16, 8, 0, 2},
 	{64, 48, 64, 48, 112, 112, 4, 4, 3},
 	{112, 64, 112, 64, 64, 144, -4, 4, 3},

	// Pantalla 62
 	{144, 32, 144, 32, 144, 32, 0, 0, 1},
 	{128, 64, 128, 64, 208, 64, 4, 0, 2},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 63
 	{16, 32, 16, 32, 144, 32, 4, 0, 3},
 	{48, 64, 48, 64, 144, 64, 4, 0, 3},
 	{208, 112, 208, 112, 208, 0, 0, -4, 3},

	// Pantalla 64
 	{80, 0, 80, 0, 208, 48, 4, 4, 3},
 	{128, 48, 128, 48, 208, 48, 4, 0, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 65
 	{128, 48, 128, 48, 16, 48, -4, 0, 3},
 	{64, 32, 64, 32, 192, 0, 4, -4, 3},
 	{0, 0, 0, 0, 0, 0, 0, 0, 0},

	// Pantalla 66
 	{128, 16, 128, 16, 208, 64, 4, 4, 3},
 	{48, 48, 48, 48, 128, 96, 4, 4, 3},
 	{80, 64, 80, 64, 80, 64, 0, 0, 2},

	// Pantalla 67
 	{160, 16, 160, 16, 208, 16, 1, 0, 1},
 	{16, 16, 16, 16, 112, 64, 4, 4, 3},
 	{16, 64, 16, 64, 112, 16, 4, -4, 3},

	// Pantalla 68
 	{32, 16, 32, 16, 208, 80, 4, 4, 3},
 	{208, 16, 208, 16, 32, 80, -4, 4, 3},
 	{144, 16, 144, 16, 80, 128, -4, 4, 3},

	// Pantalla 69
 	{96, 16, 96, 16, 16, 48, -4, 4, 3},
 	{112, 48, 112, 48, 32, 48, -4, 0, 2},
 	{16, 128, 16, 128, 208, 128, 4, 0, 2},

	// Pantalla 70
 	{0, 96, 0, 96, 224, 128, 4, 4, 3},
 	{224, 96, 224, 96, 0, 128, -4, 4, 3},
 	{16, 128, 16, 128, 208, 128, 4, 0, 1},

	// Pantalla 71
 	{112, 16, 112, 16, 192, 112, 4, 4, 3},
 	{112, 96, 112, 96, 192, 16, 4, -4, 3},
 	{192, 64, 192, 64, 192, 64, 0, 0, 2}

};

#define N_ENEMS_TYPE_0 88
#define N_ENEMS_TYPE_1 15
#define N_ENEMS_TYPE_2 27
#define N_ENEMS_TYPE_3 85
#define N_ENEMS_TYPE_5 0
#define N_ENEMS_TYPE_6 0
#define N_ENEMS_TYPE_7 0

// This is output the way it worked originally, please modify if you need
// You may want to add type 5 or 6's below.
#define BADDIES_COUNT (N_ENEMS_TYPE_1+N_ENEMS_TYPE_2+N_ENEMS_TYPE_3)

typedef struct {
	unsigned char xy, tipo, act;
} HOTSPOT;

HOTSPOT hotspots [] = {
	{0, 0, 0}, 
	{19, 1, 0}, 
	{33, 2, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{36, 1, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{68, 1, 0}, 
	{148, 3, 0}, 
	{66, 1, 0}, 
	{0, 0, 0}, 
	{40, 2, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{194, 1, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{40, 1, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{83, 1, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{17, 3, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{116, 1, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{179, 1, 0}, 
	{0, 0, 0}, 
	{212, 1, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{49, 1, 0}, 
	{0, 0, 0}, 
	{104, 3, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{33, 3, 0}, 
	{0, 0, 0}, 
	{0, 0, 0}, 
	{200, 3, 0}, 
	{0, 0, 0}, 
	{209, 2, 0}, 
	{211, 1, 0}, 
	{19, 1, 0}, 
	{116, 1, 0}, 
	{0, 0, 0}
};

#define N_HOTSPOTS_TYPE_0 50
#define N_HOTSPOTS_TYPE_1 14
#define N_HOTSPOTS_TYPE_2 3
#define N_HOTSPOTS_TYPE_3 5
#define N_HOTSPOTS_TYPE_4 0
#define N_HOTSPOTS_TYPE_5 0
#define N_HOTSPOTS_TYPE_6 0
#define N_HOTSPOTS_TYPE_7 0

