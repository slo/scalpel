// C:\diabpsx\PSXSRC\PADFUNCS.CPP

#include "types.h"

// address: 0x80094324
void DrawArrow__Fii(int x1, int y1) {
	// register: 22
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 20
	register char r;
	// register: 18
	register char b;
	{
		// register: 6
		register int ni;
		{
			// register: 30
			register int i;
			// register: 6
			register int ni;
		}
	}
}


// address: 0x80094528
void show_spell_dir__Fi(int pnum) {
	// register: 21
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 22
	register int ScrXOff;
	// register: 19
	register int ScrYOff;
	// register: 16
	register int x;
	// register: 17
	register int y;
	// register: 16
	register int cp;
	// register: 18
	// size: 0x24
	register struct Spell_Target *spl;
	// register: 30
	register int otx;
	// register: 23
	register int oty;
	// address: 0xFFFFFFB8
	// size: 0x8
	auto struct RECT R;
	// address: 0xFFFFFFC0
	// size: 0xE0
	auto struct CBlocks *gblocks;
	// register: 16
	register int ops;
}


// address: 0x80094924
void release_spell__Fi(int pnum) {
	// register: 2
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80094998
void select_belt_item__Fi(int pnum) {
}


// address: 0x800949A0
unsigned char any_belt_items__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094A00
void get_last_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094B2C
void get_next_inv__Fv() {
	// register: 4
	register int i;
}


// address: 0x80094C60
void pad_func_up__Fi(int pnum) {
}


// address: 0x80094C8C
void pad_func_down__Fi(int pnum) {
}


// address: 0x80094CB8
void pad_func_left__Fi(int pnum) {
}


// address: 0x80094CC0
void pad_func_right__Fi(int pnum) {
}


// address: 0x80094CC8
void pad_func_select__Fi(int pnum) {
}


// address: 0x80094DB8
void pad_func_Attack__Fi(int pnum) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 20
	register int x;
	// register: 21
	register int y;
}


// address: 0x80095178
void pad_func_Action__Fi(int pnum) {
	// register: 16
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 19
	register int x;
	// register: 20
	register int y;
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
}


// address: 0x80095498
void InitTargetCursor__Fi(int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
	{
		// register: 5
		register int i;
	}
}


// address: 0x800955E0
void RemoveTargetCursor__Fi(int pnum) {
	// register: 16
	// size: 0x24
	register struct Spell_Target *spl;
}


// address: 0x80095670
void pad_func_Cast_Spell__Fi(int pnum) {
	// register: 17
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 16
	register int sp;
	// register: 20
	// size: 0xE0
	register struct CBlocks *gblocks;
	// register: 21
	register int omp;
	// register: 4
	// size: 0x6C
	register struct CPad *pad;
	// register: 19
	register unsigned char DoTarget;
	{
		{
			{
				{
				}
			}
		}
	}
}


// address: 0x80095C6C
void pad_func_Use_Item__Fi(int pnum) {
}


// address: 0x80095D60
void pad_func_Chr__Fi(int pnum) {
}


// address: 0x80095E9C
void pad_func_Inv__Fi(int pnum) {
}


// address: 0x80095FBC
void pad_func_SplBook__Fi(int pnum) {
}


// address: 0x800960D4
void pad_func_QLog__Fi(int pnum) {
}


// address: 0x80096180
void pad_func_SpellBook__Fi(int pnum) {
}


// address: 0x8009624C
void pad_func_AutoMap__Fi(int pnum) {
}


// address: 0x80096364
void pad_func_Quick_Spell__Fi(int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 6
	register int sp;
	// register: 5
	register char spt;
}


// address: 0x800963D8
void check_inv__FiPci(int pnum, char *ilist, int entries) {
	// register: 17
	register int i;
	// register: 3
	register int ii;
	{
	}
}


// address: 0x800965A8
void pad_func_Quick_Use_Health__Fi(int pnum) {
}


// address: 0x800965D0
void pad_func_Quick_Use_Mana__Fi(int pnum) {
}


// address: 0x800965F8
int get_max_find_size__FPici(int *lsize, char mask, int pnum) {
	// register: 19
	register int maxlen;
	// register: 18
	register int size;
	{
		// register: 17
		register int i;
		{
			{
				{
					// register: 3
					register int l;
				}
			}
		}
	}
}


// address: 0x80096730
int sort_gold__Fi(int pnum) {
	// register: 17
	register int num_gold_items;
	{
		// register: 16
		register int i;
	}
}


// address: 0x8009683C
void DrawObjSelector__Fi(int pnum) {
	// register: 23
	// size: 0x22C8
	register struct PlayerStruct *player;
	// address: 0xFFFFFF40
	// size: 0x1E
	auto char str[30];
	// register: 16
	// size: 0x6C
	register struct CPad *Pad;
	// register: 18
	register int cp;
	// address: 0xFFFFFF60
	auto int list_size;
	// address: 0xFFFFFF68
	auto int maxlen;
	// register: 2
	register int cgold;
	{
		// register: 21
		register int i;
		{
			// register: 9
			register int R;
			// register: 8
			register int G;
			// register: 3
			register int B;
			{
				{
					// register: 17
					register int len;
				}
			}
		}
	}
}


// address: 0x800970F8
void DrawObjTask__FP4TASK(struct TASK *T) {
	// register: 2
	// size: 0x10
	register struct DEF_ARGS *args;
	// register: 17
	register int pnum;
	{
		// register: 16
		register int oseldata;
	}
}


// address: 0x800971D4
void add_area_find_object__Fciii(char type, int index, int x, int y) {
}


// address: 0x800972E0
unsigned char CheckRangeObject__Fiici(int x, int y, char cmask, int distance) {
	// register: 3
	register char co;
}


// address: 0x80097694
unsigned char CheckArea__FiiicUci(int xx, int yy, int range, char c_mask, int allflag, int pnum) {
	// register: 3
	// size: 0x22C8
	register struct PlayerStruct *player;
	// register: 18
	register int x;
	// register: 20
	register int y;
	// register: 16
	register int dir;
	// register: 19
	register int front_range;
	{
		{
			// register: 17
			register int i;
			{
				// register: 17
				register int l;
				{
					{
						// register: 19
						register int j;
						{
							{
								// register: 16
								register int i;
							}
						}
					}
				}
			}
		}
	}
}


// address: 0x800978E0
void PlacePlayer__FiiiUc(int pnum, int x, int y, unsigned char do_current) {
	// register: 18
	// size: 0x22C8
	register struct PlayerStruct *player;
}


// address: 0x80097B14
void _GLOBAL__D_gplayer() {
}


// address: 0x80097B3C
void _GLOBAL__I_gplayer() {
}


