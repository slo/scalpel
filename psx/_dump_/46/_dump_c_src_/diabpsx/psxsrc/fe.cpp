// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8013850C
// line start: 157
// line end:   162
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80138534
// line start: 168
// line end:   175
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x801385A8
// line start: 179
// line end:   184
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80138624
// line start: 189
// line end:   265
void FeDrawBuffer__Fv() {
	// address: 0xFFFFFFA8
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT ARect;
	// register: 16
	register int X;
	// register: 17
	register int Y;
	// register: 19
	// size: 0x4
	register enum TXT_JUST Just;
	// register: 22
	register int SelY;
	// address: 0xFFFFFFC8
	// size: 0x2
	auto char Text[2];
	{
		{
			{
				{
					{
						{
							{
								// register: 20
								register int Loop;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x80138A14
// line start: 269
// line end:   282
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138A94
// line start: 286
// line end:   299
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80138B18
// line start: 305
// line end:   316
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80138C00
// line start: 321
// line end:   332
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80138CE4
// line start: 340
// line end:   341
int FeGetCursor__Fv() {
}


// address: 0x80138CF8
// line start: 345
// line end:   346
void FeSelect__Fv() {
}


// address: 0x80138D3C
// line start: 356
// line end:   406
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138F48
// line start: 410
// line end:   411
void InitDummyMenu__Fv() {
}


// address: 0x80138F50
// line start: 417
// line end:   435
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x80139010
// line start: 452
// line end:   461
void FeInitMainMenu__Fv() {
}


// address: 0x8013906C
// line start: 478
// line end:   484
void FeInitNewGameMenu__Fv() {
}


// address: 0x801390BC
// line start: 489
// line end:   511
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x801391B0
// line start: 529
// line end:   538
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x80139224
// line start: 542
// line end:   551
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80139298
// line start: 556
// line end:   559
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801392E0
// line start: 564
// line end:   606
void FeDrawChrClass__Fv() {
	// address: 0xFFFFFFB0
	// size: 0x10
	auto struct Dialog FeBack;
	// address: 0xFFFFFFC0
	// size: 0x8
	auto struct RECT FeRect;
	// address: 0xFFFFFFC8
	// size: 0x4
	auto char TempStr[4];
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


// address: 0x8013977C
// line start: 775
// line end:   782
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x801397C4
// line start: 786
// line end:   792
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x8013980C
// line start: 797
// line end:   910
void FeNewNameMenuCtrl__Fv() {
	{
		{
			{
				{
					{
						{
							{
								{
									{
										{
											// address: 0xFFFFFFD8
											// size: 0x2
											auto char asd[2];
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


// address: 0x80139D5C
// line start: 919
// line end:   931
void FeCopyPlayerInfoForReturn__Fv() {
	{
		// register: 16
		register int Loop;
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80139E2C
// line start: 938
// line end:   943
void FeEnterGame__Fv() {
}


// address: 0x80139E54
// line start: 959
// line end:   972
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x80139EBC
// line start: 976
// line end:   985
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80139F28
// line start: 989
// line end:   998
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139F94
// line start: 1015
// line end:   1020
void FeInitDifficultyMenu__Fv() {
}


// address: 0x80139FDC
// line start: 1025
// line end:   1040
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x8013A094
// line start: 1077
// line end:   1083
void FeInitBackgroundMenu__Fv() {
}


// address: 0x8013A0DC
// line start: 1087
// line end:   1093
void FeInitBook1Menu__Fv() {
}


// address: 0x8013A128
// line start: 1097
// line end:   1103
void FeInitBook2Menu__Fv() {
}


// address: 0x8013A174
// line start: 1108
// line end:   1141
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x8013A370
// line start: 1149
// line end:   1150
void PlayDemo__Fv() {
}


// address: 0x8013A384
// line start: 1158
// line end:   1178
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x8013A428
// line start: 1192
// line end:   1326
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen FeScreen;
	{
		{
			{
				{
					{
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
				}
			}
		}
	}
}


// address: 0x8013A7E4
// line start: 1331
// line end:   1464
void McMainCharKeyCtrl__Fv() {
	// register: 23
	register int j;
	// register: 30
	register int Spacing;
	// register: 20
	register int fileno;
	// register: 22
	register int sr;
	// register: 21
	register int sg;
	// register: 19
	register int sb;
	// register: 17
	register int SelX;
	// register: 16
	register int len;
}


// address: 0x8013ABEC
// line start: 1469
// line end:   1471
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


