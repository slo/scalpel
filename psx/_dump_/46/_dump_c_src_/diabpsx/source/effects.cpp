// C:\diabpsx\SOURCE\EFFECTS.CPP

#include "types.h"

// address: 0x80039FD4
// line start: 77
// line end:   88
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80039FDC
// line start: 96
// line end:   103
void stream_stop__Fv() {
}


// address: 0x8003A024
// line start: 116
// line end:   143
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A0E8
// line start: 149
// line end:   165
void stream_update__Fv() {
}


// address: 0x8003A0F0
// line start: 171
// line end:   178
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A10C
// line start: 185
// line end:   216
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A164
// line start: 222
// line end:   245
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A16C
// line start: 251
// line end:   271
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A270
// line start: 278
// line end:   309
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A36C
// line start: 318
// line end:   363
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A484
// line start: 370
// line end:   392
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A51C
// line start: 407
// line end:   410
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A55C
// line start: 418
// line end:   428
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A5B0
// line start: 435
// line end:   450
void sound_stop__Fv() {
	// register: 18
	register int mi;
	// register: 17
	register int mode;
	// register: 16
	register int nr;
	{
		{
			{
				{
					{
						{
						}
					}
				}
			}
		}
	}
}


// address: 0x8003A648
// line start: 457
// line end:   467
void sound_update__Fv() {
}


// address: 0x8003A67C
// line start: 475
// line end:   506
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A6C0
// line start: 512
// line end:   525
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


