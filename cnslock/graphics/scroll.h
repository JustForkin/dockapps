int s_width = 56;
int s_height = 56;

char s_cmap[256][3] = {
	{  0,  0,  0},
	{ 54, 37,  3},
	{ 56, 39,  3},
	{218,150, 13},
	{  6,  4,  0},
	{177,122, 10},
	{ 97, 67,  6},
	{  9,  6,  0},
	{ 29, 20,  2},
	{ 26, 18,  2},
	{ 89, 61,  5},
	{186,127, 11},
	{196,134, 11},
	{123, 85,  7},
	{236,162, 14},
	{ 66, 45,  4},
	{210,144, 12},
	{ 65, 44,  4},
	{112, 77,  6},
	{162,111,  9},
	{ 49, 34,  3},
	{ 88, 60,  5},
	{  4, 55, 29},
	{108, 74,  6},
	{ 50, 34,  3},
	{ 24, 16,  1},
	{233,160, 13},
	{ 41, 28,  2},
	{136, 93,  8},
	{138, 95,  8},
	{  6, 79, 41},
	{ 15,195,102},
	{ 18,232,121},
	{  2, 31, 16},
	{ 90, 62,  5},
	{225,154, 13},
	{118, 81,  7},
	{120, 83,  7},
	{ 47, 33,  3},
	{227,156, 13},
	{ 17, 12,  1},
	{  4, 48, 25},
	{ 13,164, 85},
	{ 14,184, 96},
	{ 13,172, 90},
	{  3, 43, 23},
	{ 67, 46,  4},
	{113, 78,  7},
	{106, 73,  6},
	{ 12,  8,  1},
	{  1,  0,  0},
	{168,116, 10},
	{  1, 17,  9},
	{ 10,133, 69},
	{ 17,215,112},
	{  8, 99, 52},
	{ 10,128, 67},
	{195,133, 11},
	{ 74, 50,  4},
	{ 56, 38,  3},
	{  8,102, 53},
	{ 17,218,113},
	{ 10,130, 68},
	{  1, 14,  8},
	{ 13,167, 87},
	{  1,  7,  4},
	{ 80, 55,  5},
	{201,138, 12},
	{  7,  5,  0},
	{ 24, 17,  1},
	{  1, 13,  7},
	{ 12,151, 79},
	{  4, 46, 24},
	{  5, 70, 37},
	{ 12,149, 78},
	{ 14,186, 97},
	{  5, 65, 34},
	{  0,  6,  3},
	{ 14,178, 93},
	{  6, 77, 40},
	{  3, 39, 21},
	{ 12,155, 81},
	{ 15,193,100},
	{  5,  4,  0},
	{131, 90,  8},
	{ 37, 25,  2},
	{ 10,124, 65},
	{ 11,142, 74},
	{ 17,224,117},
	{  8,108, 56},
	{  1,  8,  4},
	{  3, 33, 17},
	{ 35, 24,  2},
	{145, 99,  8},
	{130, 89,  8},
	{  3, 36, 19},
	{ 11,139, 72},
	{  2, 23, 12},
	{  7, 93, 49},
	{ 16,209,109},
	{  8,107, 56},
	{241,165, 14},
	{153,105,  9},
	{ 32, 22,  2},
	{ 81, 56,  5},
	{  9,  6,  1},
	{  9,119, 62},
	{ 13,170, 89},
	{  4, 54, 28},
	{  5, 62, 32},
	{121, 83,  7},
	{242,166, 14},
	{170,116, 10},
	{  0,  1,  1},
	{ 16,201,105},
	{  7, 85, 44},
	{  9,116, 60},
	{ 25, 17,  1},
	{193,133, 11},
	{124, 85,  7},
	{  2, 25, 13},
	{ 15, 10,  1},
	{  4, 47, 24},
	{ 38, 26,  2},
	{ 48, 33,  3},
	{104, 72,  6},
	{ 31, 21,  2},
	{  6, 72, 37},
	{ 14,185, 97},
	{ 18,228,119},
	{203,139, 12},
	{ 69, 48,  4},
	{  2, 29, 15},
	{ 17,225,117},
	{  6, 82, 43},
	{  8,100, 52},
	{115, 79,  7},
	{160,110,  9},
	{142, 98,  8},
	{ 64, 44,  4},
	{  8,101, 52},
	{  7, 84, 44},
	{103, 71,  6},
	{  8,  6,  0},
	{123, 84,  7},
	{  3,  2,  0},
	{  2, 22, 11},
	{ 13,162, 84},
	{  6, 73, 38},
	{  5, 66, 34},
	{148,102,  9},
	{  4, 50, 26},
	{  3, 44, 23},
	{169,116, 10},
	{ 71, 49,  4},
	{ 45, 31,  3},
	{ 82, 56,  5},
	{ 39, 27,  2},
	{111, 76,  6},
	{ 23, 16,  1},
	{  4, 58, 30},
	{ 20,171,226},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255},
	{255,255,255}
	};

char s_data[] = {
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,70,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,161,161,161,0,0,0,0,161,161,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,161,161,161,161,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,161,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,161,0,0,0,0,0,0,0,
	161,161,161,161,0,0,161,0,161,161,161,0,0,0,161,161,
	161,161,0,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,161,0,0,0,0,0,0,161,
	0,0,0,0,0,0,161,161,0,0,0,0,0,161,0,0,
	0,0,161,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,161,161,161,161,0,0,161,
	0,0,0,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,161,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,161,0,161,
	0,0,0,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,161,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,161,0,161,
	0,0,0,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,161,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,161,0,0,0,0,161,0,161,
	0,0,0,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,161,0,0,0,161,0,0,0,0,0,0,161,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,161,161,161,161,0,0,0,
	161,161,161,161,0,0,161,0,0,0,0,0,0,0,161,161,
	161,161,0,0,161,161,161,161,161,0,0,161,161,161,161,161,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
	0,0,0,0,0,0,0,0
	};
