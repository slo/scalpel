// C:\diabpsx\PSXSRC\DATIO.CPP

#include "types.h"

// address: 0x8007F910
// size: 0x14
struct DatIO *__5DatIOUl(struct DatIO *this, unsigned long OurMemId) {
}


// address: 0x8007F94C
void ___5DatIO(struct DatIO *this, int __in_chrg) {
}


// address: 0x8007F9A4
bool FileExists__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 4
	register int FileHnd;
}


// address: 0x8007F9E4
bool LoReadFileAtAddr__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Dest, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FAA4
int GetFileLength__5DatIOPCc(struct DatIO *this, char *Name) {
	// register: 16
	register int FileHnd;
	// register: 17
	register int Len;
}


// address: 0x8007FB58
bool LoSave__5DatIOPCcPUci(struct DatIO *this, char *Name, unsigned char *Addr, int Len) {
	// register: 16
	register int FileHnd;
}


// address: 0x8007FC00
bool LoStreamFile__5DatIOPCciPFPUciib_bii(struct DatIO *this, char *Name, int Slice, bool (*Func)(), int Offset, int Size) {
	// register: 19
	register int FileHnd;
	// register: 21
	register long hnd;
	// register: 18
	register unsigned char *Dest;
	// register: 22
	register int OrigSize;
	{
		// register: 16
		register int SizeToRead;
	}
}


