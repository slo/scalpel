// C:\diabpsx\SOURCE\DIABLO.CPP

#include "types.h"

// address: 0x800357A4
void FreeGameMem__Fv() {
	{
		// register: 4
		register void *p__p;
	}
}


// address: 0x800357F4
void start_game__FUi(unsigned int uMsg) {
}


// address: 0x80035850
void free_game__Fv() {
	{
		// register: 16
		register int i;
	}
}


// address: 0x800358C4
void LittleStart__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	// address: 0xFFFFFFF0
	auto unsigned char fExitProgram;
	// register: 4
	register unsigned int uMsg;
}


// address: 0x80035988
unsigned char StartGame__FUcUc(unsigned char bNewGame, unsigned char bSinglePlayer) {
	{
		// address: 0xFFFFFFE0
		auto unsigned char fExitProgram;
		// register: 16
		register unsigned int uMsg;
	}
}


// address: 0x80035B70
void run_game_loop__FUi(unsigned int uMsg) {
	// register: 18
	register unsigned long (*saveProc)();
	// address: 0xFFFFFFD0
	// size: 0x1C
	auto struct MSG msg;
}


// address: 0x80035CE0
unsigned char TryIconCurs__Fv() {
}


// address: 0x800360BC
unsigned long DisableInputWndProc__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x800360C4
unsigned long GM_Game__FUlUilUl(unsigned long hWnd, unsigned int uMsg, long wParam, unsigned long lParam) {
}


// address: 0x80036174
void LoadLvlGFX__Fv() {
}


// address: 0x80036210
void LoadAllGFX__Fv() {
}


// address: 0x80036230
void CreateLevel__Fi(int lvldir) {
	// address: 0xFFFFFFF0
	auto long hnd;
}


// address: 0x80036328
void LoCreateLevel__FPv() {
	// register: 16
	register int lvldir;
}


// address: 0x800364B0
void ClearOutDungeonMap__Fv() {
	// register: 11
	register unsigned short val;
	{
		// register: 10
		register int x;
		{
			{
				// register: 6
				register int y;
			}
		}
	}
}


// address: 0x8003658C
void LoadGameLevel__FUci(unsigned char firstflag, int lvldir) {
	// register: 16
	register int i;
	// register: 4
	register int j;
	{
		{
			// register: 6
			register unsigned char visited;
		}
	}
}


// address: 0x80036F10
void game_logic__Fv() {
}


// address: 0x8003701C
void timeout_cursor__FUc(unsigned char bTimeout) {
}


// address: 0x800370C4
void game_loop__FUc(unsigned char bStartup) {
}


// address: 0x800370FC
void alloc_plr__Fv() {
}


// address: 0x80037104
void plr_encrypt__FUc(unsigned char bEncrypt) {
}


// address: 0x8003710C
void assert_fail__FiPCcT1(int nLineNo, char *pszFile, char *pszFail) {
}


// address: 0x8003712C
void assert_fail__FiPCc(int nLineNo, char *pszFile) {
}


// address: 0x8003714C
void app_fatal(char *pszFile) {
}


// address: 0x8003717C
void DoMemCardFromFrontEnd__Fv() {
}


// address: 0x800371A4
void DoMemCardFromInGame__Fv() {
}


