// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x801379EC
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80137A14
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80137A88
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80137B04
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


// address: 0x80137EF4
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80137F74
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80137FF8
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801380E0
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x801381C4
int FeGetCursor__Fv() {
}


// address: 0x801381D8
void FeSelect__Fv() {
}


// address: 0x8013821C
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80138428
void InitDummyMenu__Fv() {
}


// address: 0x80138430
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x801384F0
void FeInitMainMenu__Fv() {
}


// address: 0x8013854C
void FeInitNewGameMenu__Fv() {
}


// address: 0x80138598
void FeNewGameMenuCtrl__Fv() {
}


// address: 0x8013868C
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801386FC
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x8013876C
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801387B4
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


// address: 0x80138C50
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80138CA0
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x80138CF0
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


// address: 0x80139240
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


// address: 0x80139310
void FeEnterGame__Fv() {
}


// address: 0x80139338
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801393A0
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x8013940C
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x80139478
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801394BC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x80139574
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801395BC
void FeInitBook1Menu__Fv() {
}


// address: 0x80139608
void FeInitBook2Menu__Fv() {
}


// address: 0x80139654
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80139850
void PlayDemo__Fv() {
}


// address: 0x80139864
void FadeFEOut__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x80139908
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


// address: 0x80139CC4
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


// address: 0x8013A0CC
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}

