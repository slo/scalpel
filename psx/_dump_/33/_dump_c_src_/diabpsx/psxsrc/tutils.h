// C:\diabpsx\PSXSRC\TUTILS.H

#include "types.h"

// address: 0x8007B82C
int GetTpY__FUs(unsigned short tpage) {
}


// address: 0x8007B848
int GetTpX__FUs(unsigned short tpage) {
}


// address: 0x8007C9A0
int GetTpY__FUs_addr_8007C9A0(unsigned short tpage) {
}


// address: 0x8007C9BC
int GetTpX__FUs_addr_8007C9BC(unsigned short tpage) {
}


// address: 0x8007CDCC
int GetTpY__FUs_addr_8007CDCC(unsigned short tpage) {
}


// address: 0x8007CDE8
int GetTpX__FUs_addr_8007CDE8(unsigned short tpage) {
}


// address: 0x80090EC0
int GetNumOfObjs__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
}


// address: 0x80090EC8
// size: 0x18
struct PalEntry *GetObj__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	// register: 16
	// size: 0x18
	register struct PalEntry *RetObj;
}


// address: 0x80090F04
void Init__t10Collection2Z8PalEntryi20(struct t10Collection2Z8PalEntryi20 *this) {
	{
		// register: 18
		register int f;
	}
}


// address: 0x80090F68
void MoveFromUsedToUnused__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x80090FC0
void MoveFromUnusedToUsed__t10Collection2Z8PalEntryi20P8PalEntry(struct t10Collection2Z8PalEntryi20 *this, struct PalEntry *RetObj) {
}


// address: 0x800910AC
// size: 0x18
struct PalEntry *GetNext__Ct11TLinkedList1Z8PalEntry(struct t11TLinkedList1Z8PalEntry *this) {
}


// address: 0x800910B8
void AddToList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}


// address: 0x800910D8
void DetachFromList__t11TLinkedList1Z8PalEntryPP8PalEntry(struct t11TLinkedList1Z8PalEntry *this, struct PalEntry **Head) {
}

