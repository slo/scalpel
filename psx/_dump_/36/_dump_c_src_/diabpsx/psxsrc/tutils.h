// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x80079688
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x800796A4
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007A7FC
int GetTpY__FUs_addr_8007A7FC(unsigned short tpage) {
}


// address: 0x8007A818
int GetTpX__FUs_addr_8007A818(unsigned short tpage) {
}


// address: 0x8007ABB4
int GetTpY__FUs_addr_8007ABB4(unsigned short tpage) {
}


// address: 0x8007ABD0
int GetTpX__FUs_addr_8007ABD0(unsigned short tpage) {
}


// address: 0x8008F270
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x8008F278
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x8008F2B4
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x8008F318
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008F370
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x8008F45C
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x8008F468
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x8008F488
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


