// C:\diabpsx\SOURCE\LOADSAVE.CPP

#include "types.h"

// address: 0x80148958
int ILoad__Fv() {
	// register: 2
	register int rv;
}


// address: 0x801489AC
void LoadQuest__Fi(int i) {
}


// address: 0x80148A74
void ISave__Fi(int v) {
}


// address: 0x80148AD4
void SaveQuest__Fi(int i) {
}


// address: 0x80148BA0
int PSX_GM_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int i;
	// register: 16
	register int result;
	// register: 18
	register unsigned char *SaveBuff;
}


// address: 0x80148DE8
int PSX_GM_LoadGame__FUcii(unsigned char firstflag, int card_number, int file) {
	// register: 16
	register int i;
	// register: 18
	register int result;
	// register: 2
	register unsigned char *LoadBuff;
}


// address: 0x80149064
int PSX_CH_LoadGame__Fii(int card_number, int file) {
	// register: 17
	register int result;
	// register: 16
	register unsigned char *LoadBuff;
}


// address: 0x801491D0
int PSX_CH_SaveGame__FiPcT1(int card_number, char *name, char *title) {
	// register: 16
	register int result;
	// register: 16
	register unsigned char *SaveBuff;
}


