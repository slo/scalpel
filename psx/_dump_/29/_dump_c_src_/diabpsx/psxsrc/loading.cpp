// C:\diabpsx\PSXSRC\LOADING.CPP

#include "types.h"

// address: 0x80099984
void UPDATEPROGRESS__Fi(int inc) {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800999E4
bool IsGameLoading__Fv() {
}


// address: 0x800999F0
void PutUpCutScreenTSK__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *Args;
	// address: 0xFFFFFFD0
	auto int lev;
	// register: 16
	register int tx;
	// address: 0xFFFFFFC8
	// size: 0x24
	auto struct POLY_G4 *G4;
	// register: 21
	register unsigned char barr;
	// register: 16
	register unsigned char barg;
	// register: 17
	register unsigned short prog;
}


// address: 0x80099E64
void PutUpCutScreen__Fi(int lev) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *A;
}


// address: 0x80099F14
void TakeDownCutScreen__Fv() {
}


// address: 0x80099FA0
void FinishProgress__Fv() {
}


// address: 0x8009A080
void _GLOBAL__D_UPDATEPROGRESS__Fi() {
}


// address: 0x8009A0B8
void _GLOBAL__I_UPDATEPROGRESS__Fi() {
}

