// C:\diabpsx\SOURCE\PALETTE.CPP

#include "types.h"

// address: 0x8007EABC
// line start: 78
// line end:   100
void LoadPalette__FPCc(char *pszFileName) {
}


// address: 0x8007EAC4
// line start: 105
// line end:   118
void LoadRndLvlPal__Fi(int l) {
}


// address: 0x8007EACC
// line start: 123
// line end:   129
void ResetPal__Fv() {
}


// address: 0x8007EAD4
// line start: 137
// line end:   144
void SetFadeLevel__Fi(int fadeval) {
	// register: 3
	register int nval;
}


// address: 0x8007EB04
// line start: 179
// line end:   180
bool GetFadeState__Fv() {
}


// address: 0x8007EB10
// line start: 200
// line end:   224
void SetPolyXY__FP8POLY_GT4PUc(struct POLY_GT4 *gt4, unsigned char *coords) {
	// register: 6
	register unsigned char bright1;
	// register: 3
	register unsigned char bright2;
}


// address: 0x8007EC2C
// line start: 232
// line end:   255
void SmearScreen__Fv() {
}


// address: 0x8007EC34
// line start: 258
// line end:   267
void DrawFadedScreen__Fv() {
	// register: 16
	// size: 0x70
	register struct TextDat *ThisDat;
	// register: 2
	// size: 0x34
	register struct POLY_GT4 *GT4a;
}


// address: 0x8007ECBC
// line start: 287
// line end:   304
void BlackPalette__Fv() {
	// register: 7
	// size: 0x28
	register struct POLY_FT4 *FT4;
}


// address: 0x8007EDB8
// line start: 311
// line end:   339
void PaletteFadeInTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007EE48
// line start: 346
// line end:   353
bool PaletteFadeIn__Fi(int fr) {
}


// address: 0x8007EEA0
// line start: 361
// line end:   396
void PaletteFadeOutTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int i;
	{
	}
}


// address: 0x8007EF50
// line start: 403
// line end:   413
bool PaletteFadeOut__Fi(int fr) {
}


