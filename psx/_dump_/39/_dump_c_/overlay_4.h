#include "types.h"

// === [ Overlay ID 4 ] ===

// address: 0x800B0440
// size: 0xC
extern char StrDate[12];

// address: 0x800B044C
// size: 0x9
extern char StrTime[9];

// address: 0x800B0458
// size: 0x1D8
extern char *Words[118];

// address: 0x800B0630
// size: 0x60
extern struct MONTH_DAYS MonDays[12];

// address: 0x800AFF98
// line start: 93
// line end:   134
void VID_OpenModule__Fv() {
}


// address: 0x800B0058
// line start: 184
// line end:   207
void InitScreens__Fv() {
}


// address: 0x800B0148
// line start: 85
// line end:   87
void MEM_SetupMem__Fv() {
}


// address: 0x800B0174
// line start: 123
// line end:   137
void SetupWorkRam__Fv() {
}


// address: 0x800B0214
// line start: 97
// line end:   174
void SYSI_Init__Fv() {
	// address: 0xFFFFFFF0
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x800B035C
// line start: 560
// line end:   563
void PA_Open__Fv() {
}


// address: 0x800B0394
// line start: 103
// line end:   110
void PAD_Open__Fv() {
}


// address: 0x800B03D8
// line start: 1398
// line end:   1403
void GM_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800B03FC
// line start: 110
// line end:   111
void OVR_Open__Fv() {
}


// address: 0x800B041C
// line start: 61
// line end:   63
void DEC_Open__Fv() {
	{
		// register: 3
		register int f;
	}
}


// address: 0x800B0690
// line start: 252
// line end:   275
char *GetVersionString__FPc(char *VersionString2) {
	// address: 0xFFFFFFC8
	// size: 0x28
	auto char VersionString[40];
}


// address: 0x800B0764
// line start: 299
// line end:   338
char *GetWord__FPc(char *VStr) {
	// register: 18
	register bool Found;
	// address: 0xFFFFFFE0
	// size: 0x4
	auto char MonStr[4];
	// register: 17
	register int DayCount;
	// register: 16
	register int Minutes;
	{
	}
}


