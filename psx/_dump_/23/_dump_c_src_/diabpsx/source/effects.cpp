// C:\diabpsx\SOURCE\EFFECTS.CPP

#include "types.h"

// address: 0x80039F80
unsigned char effect_is_playing__Fi(int nSFX) {
}


// address: 0x80039F88
void stream_stop__Fv() {
}


// address: 0x80039FD0
void stream_play__FP4TSFXll(struct TSFX *pSFX, long lVolume, long lPan) {
}


// address: 0x8003A094
void stream_update__Fv() {
}


// address: 0x8003A09C
void sfx_stop__Fv() {
	{
		// register: 2
		register unsigned long d;
	}
}


// address: 0x8003A0B8
void InitMonsterSND__Fi(int monst) {
	// register: 4
	register int mtype;
}


// address: 0x8003A110
void FreeMonsterSnd__Fv() {
}


// address: 0x8003A118
unsigned char calc_snd_position__FiiPlT2(int x, int y, long *plVolume, long *plPan) {
	// register: 3
	register long volume;
	// register: 19
	register long pan;
}


// address: 0x8003A21C
void PlaySFX_priv__FP4TSFXUcii(struct TSFX *pSFX, unsigned char loc, int x, int y) {
	// address: 0xFFFFFFF4
	auto long lPan;
	// address: 0xFFFFFFF0
	auto long lVolume;
}


// address: 0x8003A32C
void PlayEffect__Fii(int i, int mode) {
	// register: 16
	register int mi;
	// address: 0xFFFFFFEC
	auto long lPan;
	// address: 0xFFFFFFE8
	auto long lVolume;
}


// address: 0x8003A458
int RndSFX__Fi(int psfx) {
	// register: 5
	register int nRand;
}


// address: 0x8003A4F0
void PlaySFX__Fi(int psfx) {
}


// address: 0x8003A530
void PlaySfxLoc__Fiii(int psfx, int x, int y) {
}


// address: 0x8003A584
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


// address: 0x8003A61C
void sound_update__Fv() {
}


// address: 0x8003A650
void priv_sound_init__FUc(unsigned char bLoadMask) {
	{
	}
}


// address: 0x8003A694
void sound_init__Fv() {
	// register: 4
	register unsigned char bLoadMask;
}


