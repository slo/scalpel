// C:\diabpsx\SOURCE\TOWNERS.CPP

#include "types.h"

// address: 0x80038168
int GetActiveTowner__Fi(int t) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x800381BC
void SetTownerGPtrs__FPUcPPUc(unsigned char *pData, unsigned char **pAnim) {
	// register: 2
	register int i;
}


// address: 0x800381DC
void NewTownerAnim__FiPUcii(int tnum, unsigned char *pAnim, int numFrames, int Delay) {
}


// address: 0x80038224
void InitTownerInfo__FilUciiici(int i, long w, unsigned char sel, int t, int x, int y, int ao, int tp) {
}


// address: 0x80038384
void InitQstSnds__Fi(int i) {
	// register: 4
	register int j;
	{
		// register: 6
		register int quest;
	}
}


// address: 0x8003843C
void InitSmith__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038568
void InitBarOwner__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8003869C
void InitTownDead__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800387CC
void InitWitch__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x800388FC
void InitBarmaid__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038A2C
void InitBoy__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038B64
void InitHealer__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038C94
void InitTeller__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038DC4
void InitDrunk__Fv() {
	{
		// register: 5
		register int i;
	}
}


// address: 0x80038EF4
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


// address: 0x800391B8
void InitTowners__Fv() {
}


// address: 0x80039244
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


// address: 0x800392E8
void TownCtrlMsg__Fi(int i) {
	// register: 2
	register int p;
	// register: 16
	register int dx;
	// register: 2
	register int dy;
}


// address: 0x80039408
void TownBlackSmith__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x8003943C
void TownBarOwner__Fv() {
	// register: 4
	register int x;
	// register: 2
	register int y;
	// register: 16
	register int tidx;
}


// address: 0x80039470
void TownDead__Fv() {
	// register: 17
	register int tidx;
}


// address: 0x80039558
void TownHealer__Fv() {
}


// address: 0x80039580
void TownStory__Fv() {
}


// address: 0x800395A8
void TownDrunk__Fv() {
}


// address: 0x800395D0
void TownBoy__Fv() {
}


// address: 0x800395F8
void TownWitch__Fv() {
}


// address: 0x80039620
void TownBarMaid__Fv() {
}


// address: 0x80039648
void TownCow__Fv() {
}


// address: 0x80039670
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


// address: 0x800398C0
// size: 0x94
struct ItemStruct *PlrHasItem__FiiRi(int pnum, int item, int *i) {
}


// address: 0x80039994
void CowSFX__Fi(int pnum) {
	// address: 0x8010E208
	// size: 0x24
	static int snSFX[3][3];
	// address: 0x80117874
	static int snLastCowSFX;
}


// address: 0x80039AB0
void TownerTalk__Fii(int first, int t) {
}


// address: 0x80039AF0
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


