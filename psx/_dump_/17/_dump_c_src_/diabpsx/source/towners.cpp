// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x800370CC
// line start: 99
// line end:   103
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x80037120
// line start: 108
// line end:   126
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x80037140
// line start: 132
// line end:   142
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80037188
// line start: 148
// line end:   160
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x800372E8
// line start: 166
// line end:   175
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x800373A0
// line start: 181
// line end:   190
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800374CC
// line start: 196
// line end:   206
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037600
// line start: 211
// line end:   220
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037730
// line start: 225
// line end:   234
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037860
// line start: 239
// line end:   248
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037990
// line start: 253
// line end:   263
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037AC8
// line start: 268
// line end:   277
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037BF8
// line start: 283
// line end:   292
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037D28
// line start: 297
// line end:   306
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80037E58
// line start: 312
// line end:   337
void InitCows__Fv() {
	// register: 20
	register int i;
	// register: 17
	register int x;
	// register: 19
	register int y;
	// register: 18
	register int d;
	// register: 17
	register int x2;
	// register: 3
	register int y2;
}


// address: 0x8003811C
// line start: 344
// line end:   358
void InitTowners__Fv() {
}


// address: 0x800381A8
// line start: 363
// line end:   377
void FreeTownerGFX__Fv() {
	// register: 17
	register int i;
	{
		{
			{
				{
					{
						{
							{
								{
									// register: 4
									register void *p__p;
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x8003824C
// line start: 384
// line end:   395
void TownCtrlMsg__Fi(int i) {
	// register: 3
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80038364
// line start: 404
// line end:   412
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80038398
// line start: 420
// line end:   427
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x800383CC
// line start: 435
// line end:   447
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x800384B4
// line start: 453
// line end:   455
void TownHealer__Fv() {
}


// address: 0x800384DC
// line start: 462
// line end:   465
void TownStory__Fv() {
}


// address: 0x80038504
// line start: 472
// line end:   475
void TownDrunk__Fv() {
}


// address: 0x8003852C
// line start: 482
// line end:   485
void TownBoy__Fv() {
}


// address: 0x80038554
// line start: 493
// line end:   496
void TownWitch__Fv() {
}


// address: 0x8003857C
// line start: 503
// line end:   505
void TownBarMaid__Fv() {
}


// address: 0x800385A4
// line start: 512
// line end:   515
void TownCow__Fv() {
}


// address: 0x800385CC
// line start: 522
// line end:   573
void ProcessTowners__Fv() {
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


// address: 0x8003881C
// size: 0x94
// line start: 579
// line end:   584
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x800388E0
// line start: 593
// line end:   639
void CowSFX__Fi(int pnum) {
	// address: 0x8010B764
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x801156E4
	static int snLastCowSFX;
}


// address: 0x800389EC
// line start: 645
// line end:   652
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80038A2C
// line start: 659
// line end:   1055
void TalkToTowner__Fii(int p, int t) {
	// address: 0xFFFFFFE0
	auto int i;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
	// register: 17
	// size: 0x94
	register struct ItemStruct *Item;
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


