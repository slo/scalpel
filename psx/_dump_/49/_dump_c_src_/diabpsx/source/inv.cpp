// C:\diabpsx\SOURCE\INV.CPP

#include "types.h"

// address: 0x8013D670
// line start: 424
// line end:   425
void FreeInvGFX__Fv() {
}


// address: 0x8013D678
// line start: 430
// line end:   437
void InvDrawSlot__Fiii(int X, int Y, int Frame) {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8013D6FC
// line start: 442
// line end:   473
void InvDrawSlotBack__FiiiiUc(int X, int Y, int W, int H, int Flag) {
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
}


// address: 0x8013D950
// line start: 479
// line end:   492
void InvDrawItem__FiiiUci(int ItemX, int ItemY, int ItemNo, unsigned char StatFlag, int TransFlag) {
	// register: 3
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x8013DA20
// line start: 497
// line end:   542
void InvDrawSlots__Fv() {
	// register: 16
	register int Bx;
	// register: 17
	register int By;
}


// address: 0x8013DCF8
// line start: 552
// line end:   554
void PrintStat__FiiPcUc(int Y, int Txt0, char *Txt1, unsigned char Col) {
}


// address: 0x8013DDC4
// line start: 559
// line end:   708
void DrawInvStats__Fv() {
	// address: 0xFFFFFFC8
	// size: 0x10
	auto struct Dialog InvBack;
	// register: 18
	register char c;
	// address: 0xFFFFFFD8
	// size: 0xA
	auto char chrstr[10];
	// register: 17
	register long mind;
	// register: 16
	register long maxd;
	// register: 16
	register int hper;
	// register: 16
	register int ac;
}


// address: 0x8013E898
// line start: 713
// line end:   720
void DrawInvBack__Fv() {
	// address: 0xFFFFFFE8
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8013E920
// line start: 725
// line end:   828
void DrawInvCursor__Fv() {
	// register: 6
	register int ItemX;
	// register: 8
	register int ItemY;
	// register: 4
	register int LoopX;
	// register: 5
	register int LoopY;
	// register: 4
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 4
	// size: 0x6C
	register struct TextDat *TData;
}


// address: 0x8013EDE0
// line start: 834
// line end:   865
void DrawInvMsg__Fv() {
	// register: 2
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// address: 0xFFFFFFD8
	// size: 0x8
	auto struct RECT InfoRect;
	// register: 3
	register int InfoX;
	// register: 16
	register int InfoY;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto struct Dialog InvBack;
}


// address: 0x8013EFA8
// line start: 871
// line end:   902
void DrawInvUnique__Fv() {
	// register: 19
	// size: 0x6C
	register struct TextDat *ThisDat;
	// register: 10
	// size: 0x28
	register struct POLY_FT4 *Ft4;
	// register: 17
	register int x;
	// register: 16
	register int y;
	// register: 18
	register int flip;
}


// address: 0x8013F0CC
// line start: 913
// line end:   914
void DrawInv__Fv() {
}


// address: 0x8013F0FC
// line start: 919
// line end:   994
void DrawInvTSK__FP4TASK(struct TASK *T) {
	// register: 18
	// size: 0xE0
	register struct CBlocks *BgBlocks;
	// register: 17
	register int omp;
	// register: 16
	register int osel;
}


// address: 0x8013F3E4
// line start: 999
// line end:   1203
void DoThatDrawInv__Fv() {
	// register: 16
	register int Loop;
	// register: 3
	register int ii;
	// register: 9
	register int ItemX;
	// register: 5
	register int ItemY;
	// register: 6
	register int ItemNo;
}


// address: 0x8013FB4C
// line start: 1208
// line end:   1255
unsigned char AutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x8013FE48
// line start: 1260
// line end:   1324
unsigned char SpecialAutoPlace__FiiiiUc(int pnum, int ii, int sx, int sy, int saveflag) {
	// register: 5
	register int i;
	// register: 11
	register int j;
	// register: 4
	register int xx;
	// register: 10
	register int yy;
	// register: 16
	register unsigned char done;
}


// address: 0x801401B8
// line start: 1329
// line end:   1422
unsigned char GoldAutoPlace__Fi(int pnum) {
	// register: 16
	register int i;
	// register: 19
	register int ii;
	// register: 10
	register int xx;
	// register: 8
	register int yy;
	// register: 3
	register long gt;
	// register: 6
	register unsigned char done;
}


// address: 0x8014064C
// line start: 1427
// line end:   1454
unsigned char WeaponAutoPlace__Fi(int pnum) {
}


// address: 0x801408BC
// line start: 1460
// line end:   1466
int SwapItem__FP10ItemStructT0(struct ItemStruct *a, struct ItemStruct *b) {
	// address: 0xFFFFFF68
	// size: 0x94
	auto struct ItemStruct h;
}


// address: 0x801409AC
// line start: 1473
// line end:   1880
void CheckInvPaste__Fiii(int pnum, int mx, int my) {
	// register: 21
	register int r;
	// register: 23
	register int sx;
	// register: 30
	register int sy;
	// register: 16
	register int i;
	// register: 9
	register int j;
	// register: 7
	register int xx;
	// register: 10
	register int yy;
	// register: 8
	register int ii;
	// register: 17
	register unsigned char done;
	// register: 17
	register unsigned char done2h;
	// register: 20
	register int il;
	// register: 22
	register int cn;
	// register: 2
	register int it;
	// register: 18
	register int iv;
	// register: 5
	register int ig;
	// register: 5
	register long gt;
	// address: 0xFFFFFED8
	// size: 0x94
	auto struct ItemStruct tempitem;
}


// address: 0x8014250C
// line start: 1922
// line end:   2038
void CheckInvCut__Fiii(int pnum, int mx, int my) {
	// register: 18
	register int r;
	// register: 8
	register int ii;
	// register: 8
	register int iv;
}


// address: 0x80142EE4
// line start: 2063
// line end:   2084
void RemoveInvItem__Fii(int pnum, int iv) {
}


// address: 0x80143168
// line start: 2092
// line end:   2098
void RemoveSpdBarItem__Fii(int pnum, int iv) {
}


// address: 0x80143260
// line start: 2104
// line end:   2108
void CheckInvScrn__Fv() {
}


// address: 0x801432D8
// line start: 2122
// line end:   2131
void CheckItemStats__Fi(int pnum) {
	// register: 4
	// size: 0x22C8
	register struct PlayerStruct *p;
}


// address: 0x80143354
// line start: 2137
// line end:   2149
void CheckBookLevel__Fi(int pnum) {
	// register: 6
	register int slvl;
}


// address: 0x80143480
// line start: 2155
// line end:   2213
void CheckQuestItem__Fi(int pnum) {
}


// address: 0x80143860
// line start: 2223
// line end:   2281
void InvGetItem__Fii(int pnum, int ii) {
	// register: 5
	register int j;
	// register: 4
	register int jj;
}


// address: 0x80143B40
// line start: 2288
// line end:   2423
void AutoGetItem__Fii(int pnum, int ii) {
	// register: 16
	register int i;
	// register: 2
	register int g;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// register: 4
	register int idx;
	// register: 17
	register unsigned char done;
	{
		{
			// register: 5
			register int j;
			// register: 2
			register int jj;
		}
	}
}


// address: 0x80144578
// line start: 2467
// line end:   2481
int FindGetItem__FiUsi(int idx, unsigned short ci, int iseed) {
	// register: 8
	register int i;
	// register: 7
	register int ii;
}


// address: 0x8014462C
// line start: 2487
// line end:   2548
void SyncGetItem__FiiiUsi(int x, int y, int idx, unsigned short ci, int iseed) {
	// register: 16
	register int ii;
	{
		{
			// register: 5
			register int j;
			// register: 4
			register int jj;
		}
	}
}


// address: 0x801447B8
// line start: 2563
// line end:   2585
unsigned char TryInvPut__Fv() {
	{
		{
		}
	}
}


// address: 0x80144960
// line start: 2615
// line end:   2714
int InvPutItem__Fiii(int pnum, int x, int y) {
	// register: 16
	register int ii;
	// register: 23
	register unsigned char done;
	{
		// register: 21
		register int d;
		{
			// register: 16
			register int dy;
			{
				{
					{
						{
							{
								{
									{
										// register: 18
										register int l;
										{
											{
												// register: 19
												register int j;
												{
													// register: 20
													register int yy;
													{
														// register: 17
														register int i;
														{
															// register: 16
															register int xx;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80144DF4
// line start: 2726
// line end:   2830
int SyncPutItem__FiiiiUsiUciiiiiUl(int pnum, int x, int y, int idx, int icreateinfo, int iseed, int Id, int dur, int mdur, int ch, int mch, int ivalue, unsigned long ibuff) {
	// register: 16
	register int ii;
	// register: 17
	register int d;
	// register: 16
	register int dy;
	{
		{
			{
				{
					{
						{
							// register: 21
							register unsigned char done;
							{
								// register: 18
								register int l;
								{
									{
										// register: 20
										register int j;
										{
											// register: 19
											register int yy;
											{
												// register: 17
												register int i;
												{
													// register: 16
													register int xx;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80145314
// line start: 2835
// line end:   2944
char CheckInvHLight__Fv() {
	// register: 16
	register int r;
	// register: 19
	register char rv;
	// register: 17
	// size: 0x94
	register struct ItemStruct *pi;
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *p;
	{
		{
			// register: 17
			register int nGold;
		}
	}
}


// address: 0x80145654
// line start: 2951
// line end:   2974
void RemoveScroll__Fi(int pnum) {
	// register: 5
	register int i;
}


// address: 0x80145818
// line start: 2980
// line end:   3002
unsigned char UseScroll__Fv() {
	// register: 5
	register int i;
}


// address: 0x80145A54
// line start: 3009
// line end:   3016
void UseStaffCharge__FP12PlayerStruct(struct PlayerStruct *ptrplr) {
}


// address: 0x80145ABC
// line start: 3024
// line end:   3032
unsigned char UseStaff__Fv() {
}


// address: 0x80145B70
// line start: 3083
// line end:   3097
void StartGoldDrop__Fv() {
}


// address: 0x80145C64
// line start: 3106
// line end:   3192
unsigned char UseInvItem__Fii(int pnum, int cii) {
	// register: 18
	register int c;
	// register: 3
	register int idata;
	// register: 3
	register int it;
	// register: 17
	// size: 0x94
	register struct ItemStruct *Item;
	// register: 19
	register unsigned char speedlist;
}


// address: 0x80146154
// line start: 3198
// line end:   3210
void DoTelekinesis__Fv() {
}


// address: 0x8014627C
// line start: 3217
// line end:   3236
long CalculateGold__Fi(int pnum) {
	// register: 6
	register int i;
	// register: 9
	register long gold;
}


// address: 0x8014639C
// line start: 3250
// line end:   3257
unsigned char DropItemBeforeTrig__Fv() {
}


// address: 0x801463F4
// line start: 3372
// line end:   3442
void ControlInv__Fv() {
}


// address: 0x801466D4
// line start: 3448
// line end:   3457
void InvGetItemWH__Fi(int Pos) {
}


// address: 0x801467BC
// line start: 3463
// line end:   3482
void InvAlignObject__Fv() {
}


// address: 0x80146968
// line start: 3489
// line end:   3507
void InvSetItemCurs__Fv() {
	// register: 5
	register int ItemNo;
}


// address: 0x80146AEC
// line start: 3514
// line end:   3595
void InvMoveCursLeft__Fv() {
	// register: 5
	register int ItemInc;
}


// address: 0x80146CC8
// line start: 3600
// line end:   3687
void InvMoveCursRight__Fv() {
	// register: 6
	register int ItemInc;
}


// address: 0x80146FCC
// line start: 3692
// line end:   3783
void InvMoveCursUp__Fv() {
	// register: 4
	register int ItemInc;
}


// address: 0x801471AC
// line start: 3788
// line end:   3886
void InvMoveCursDown__Fv() {
	// register: 16
	register int ItemInc;
}


