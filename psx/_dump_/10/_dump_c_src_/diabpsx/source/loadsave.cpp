// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80148AB4
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x80148B08
void LoadQuest__Fi(int i) {
}


// address: 0x80148BD0
void ISave__Fi(int v) {
}


// address: 0x80148C30
void SaveQuest__Fi(int i) {
}


// address: 0x80148CFC
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80148F44
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x801491C0
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 16
	register int result;
	// register: 7
	register unsigned char *LoadBuff;
}


// address: 0x80149304
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 10
	register unsigned char *SaveBuff;
}

