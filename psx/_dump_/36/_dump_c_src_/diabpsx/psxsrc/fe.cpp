// C:\diabpsx\PSXSRC\FE.CPP

#include "types.h"

// address: 0x8013556C
void FeInitBuffer__Fv() {
	{
	}
}


// address: 0x80135594
void FeAddEntry__Fii8TXT_JUSTUsP7FeTableP5CFont(int X, int Y, enum TXT_JUST Just, unsigned short Str, struct FeTable *MenuPtr, struct CFont *Font) {
}


// address: 0x80135608
void FeAddTable__FP11FeMenuTablei(struct FeMenuTable *Table, int Count) {
	{
		// register: 17
		register int Loop;
	}
}


// address: 0x80135684
void FeAddNameTable__FPUci(unsigned char *Table, int Count) {
	{
		// register: 17
		register int YLoop;
		{
			{
				// register: 3
				register int XLoop;
			}
		}
	}
}


// address: 0x801357B4
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


// address: 0x80135BC8
void FeNewMenu__FP7FeTable(struct FeTable *Menu) {
	// register: 3
	// size: 0x1C
	register struct FeTable *LastMenu;
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135C48
void FePrevMenu__Fv() {
	// register: 2
	register void (*FuncPtr)();
}


// address: 0x80135D04
void FeSelUp__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80135DEC
void FeSelDown__Fi(int No) {
	// register: 6
	register int OldSel;
}


// address: 0x80135ED0
int FeGetCursor__Fv() {
}


// address: 0x80135EE4
void FeSelect__Fv() {
}


// address: 0x80135F28
void FeMainKeyCtrl__FP7CScreen(struct CScreen *FeScreen) {
}


// address: 0x801360D4
void InitDummyMenu__Fv() {
}


// address: 0x801360DC
void InitFrontEnd__FP9FE_CREATE(struct FE_CREATE *CreateStruct) {
}


// address: 0x8013619C
void FeInitMainMenu__Fv() {
}


// address: 0x801361FC
void FeInitNewGameMenu__Fv() {
}


// address: 0x8013624C
void FeNewGameMenuCtrl__Fv() {
	{
		{
		}
	}
}


// address: 0x80136380
void FeInitPlayer1ClassMenu__Fv() {
}


// address: 0x801363F4
void FeInitPlayer2ClassMenu__Fv() {
}


// address: 0x80136468
void FePlayerClassMenuCtrl__Fv() {
}


// address: 0x801364B0
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


// address: 0x8013694C
void FeInitNewP1NameMenu__Fv() {
}


// address: 0x80136994
void FeInitNewP2NameMenu__Fv() {
}


// address: 0x801369DC
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


// address: 0x80136F6C
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


// address: 0x8013703C
void FeEnterGame__Fv() {
}


// address: 0x80137064
void FeInitLoadMemcardSelect__Fv() {
}


// address: 0x801370CC
void FeInitLoadChar1Menu__Fv() {
}


// address: 0x80137138
void FeInitLoadChar2Menu__Fv() {
}


// address: 0x801371A4
void FeInitDifficultyMenu__Fv() {
}


// address: 0x801371EC
void FeDifficultyMenuCtrl__Fv() {
}


// address: 0x801372A4
void FeInitBackgroundMenu__Fv() {
}


// address: 0x801372EC
void FeInitBook1Menu__Fv() {
}


// address: 0x80137338
void FeInitBook2Menu__Fv() {
}


// address: 0x80137384
void FeBackBookMenuCtrl__Fv() {
}


// address: 0x80137580
void PlayDemo__Fv() {
}


// address: 0x80137594
void FadeFEOut__Fv() {
}


// address: 0x80137658
void DrawBackTSK__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFF80
	// size: 0x78
	auto struct CScreen BackScreen;
}


// address: 0x80137750
void FrontEndTask__FP4TASK(struct TASK *T) {
	// register: 16
	register int AttractNo;
	// register: 17
	// size: 0x5C
	register struct TASK *T2;
}


// address: 0x80137AC8
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


// address: 0x80137ED0
void DrawFeTwinkle__Fii(int SelX, int SelY) {
}


