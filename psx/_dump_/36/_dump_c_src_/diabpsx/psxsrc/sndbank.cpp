// C:\diabpsx\PSXSRC\SNDBANK.CPP

#include "types.h"

// address: 0x8008E478
void SND_Monitor__FP4TASK(struct TASK *T) {
	// address: 0xFFFFFFD8
	// size: 0x18
	auto char status[24];
	{
		{
			// register: 5
			register int i;
		}
	}
}


// address: 0x8008E504
void SPU_Init__Fv() {
	{
		// address: 0xFFFFFFD0
		// size: 0x28
		auto struct SpuCommonAttr common_attr;
		{
			// register: 3
			register int i;
		}
	}
}


// address: 0x8008E610
int SND_FindChannel__Fv() {
	// address: 0xFFFFFFE0
	// size: 0x18
	auto char status[24];
	// register: 3
	register int count;
	// register: 16
	register int result;
}


// address: 0x8008E67C
void SND_ClearBank__Fv() {
	// register: 16
	register bool GalRet;
}


// address: 0x8008E6F4
bool SndLoadCallBack__FPUciib(unsigned char *Mem, int ReadSoFar, int Size, bool LastChunk) {
	// address: 0x8012B0D0
	static int DestAddr;
}


// address: 0x8008E76C
void SND_LoadBank__Fi(int lvlnum) {
	// register: 16
	// size: 0x14
	register struct FileIO *MyFileIO;
	// address: 0xFFFFFFE0
	// size: 0x10
	auto char BankFile[16];
}


// address: 0x8008E8A0
int SND_FindSFX__FUs(unsigned short Name) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008E8F4
void SND_StopSnd__Fi(int voice) {
}


// address: 0x8008E918
bool SND_IsSfxPlaying__Fi(int SFXNo) {
	{
		// register: 5
		register int i;
	}
}


// address: 0x8008E954
int SND_RemapSnd__Fi(int SFXNo) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8008E9C8
int SND_PlaySnd__FUsiii(unsigned short Name, int vol, int pan, int pitchadj) {
	// address: 0xFFFFFF98
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 19
	register int Offset;
	// register: 3
	register int sfxnum;
	// register: 17
	register int voice;
}


