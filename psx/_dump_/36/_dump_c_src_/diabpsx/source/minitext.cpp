// C:\diabpsx\SOURCE\MINITEXT.CPP

#include "types.h"

// address: 0x80045294
// line start: 110
// line end:   113
void FreeQuestText__Fv() {
}


// address: 0x8004529C
// line start: 117
// line end:   121
void InitQuestText__Fv() {
}


// address: 0x800452A8
// line start: 129
// line end:   167
void CalcTextSpeed__FPCc(char *Name) {
	// register: 16
	register char *ptr;
	// address: 0xFFFFFFC8
	// size: 0x10
	auto char SpeechName[16];
	// register: 19
	register unsigned long SfxFrames;
	// register: 2
	register unsigned long TextHeight;
	// register: 18
	register int NoLines;
	// register: 17
	register int cw;
}


// address: 0x800453F8
// line start: 176
// line end:   225
void InitQTextMsg__Fi(int m) {
	// address: 0xFFFFFFE0
	// size: 0xE
	auto char Name[14];
}


// address: 0x800455A0
// line start: 230
// line end:   236
void DrawQTextBack__Fv() {
}


// address: 0x80045610
// line start: 246
// line end:   301
void DrawQTextTSK__FP4TASK(struct TASK *T) {
	// register: 16
	register int quest_pad;
	{
	}
}


// address: 0x80045774
// line start: 306
// line end:   435
void DrawQText__Fv() {
	// register: 18
	register char *p;
	// address: 0xFFFFFFC0
	auto char *pnl;
	// register: 21
	register char *SpacePtr;
	// address: 0xFFFFFF38
	// size: 0x80
	auto char tempstr[128];
	// register: 30
	register int ty;
	// register: 19
	register int l;
	// register: 17
	register int i;
	// register: 23
	register unsigned char doneflag;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT ClipRect;
	// register: 4
	register unsigned long currTime;
	// register: 20
	register int LetterCount;
}


// address: 0x80045AFC
// line start: 438
// line end:   438
void _GLOBAL__D_QBack() {
}


// address: 0x80045B24
// line start: 438
// line end:   438
void _GLOBAL__I_QBack() {
}


