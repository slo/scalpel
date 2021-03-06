#include "types.h"

// === [ Overlay ID d ] ===

// address: 0x80139B6C
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80148B6C
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80148BC0
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80149200
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80149840
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80149850
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x80149E90
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x80149EB8
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x80149FF8
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x8014A078
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x8014A0FC
// size: 0x84
extern struct strheader *stream_bufh[33];

// address: 0x8014A180
// line start: 275
// line end:   277
void EA_cd_seek(int secnum) {
}


// address: 0x8014A188
// line start: 281
// line end:   285
void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size) {
	{
		// register: 3
		register int i;
	}
}


// address: 0x8014A1BC
// line start: 298
// line end:   304
void init_cdstream(int chunksize, unsigned char *buf, int bufsize) {
}


// address: 0x8014A1CC
// line start: 309
// line end:   316
void flush_cdstream() {
}


// address: 0x8014A1F0
// line start: 325
// line end:   337
int check_complete_frame(struct strheader *h) {
	// register: 7
	register int ok;
	// register: 5
	register int i;
}


// address: 0x8014A270
// line start: 360
// line end:   363
void reset_cdstream() {
}


// address: 0x8014A298
// line start: 368
// line end:   379
void kill_stream_handlers() {
}


// address: 0x8014A2F8
// line start: 389
// line end:   513
void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec) {
	{
		{
			// register: 2
			register unsigned long *ptr;
		}
	}
}


// address: 0x8014A4EC
// line start: 517
// line end:   537
void CD_stream_handler(struct TASK *T) {
	{
	}
}


// address: 0x8014A5CC
// line start: 544
// line end:   553
void install_stream_handlers() {
}


// address: 0x8014A63C
// line start: 564
// line end:   586
void cdstream_service() {
	// register: 4
	register int timeout_occured;
}


// address: 0x8014A6D4
// line start: 620
// line end:   655
int cdstream_get_chunk(unsigned char **data, struct strheader **h) {
	{
		{
			// register: 4
			register unsigned char *ptr;
		}
	}
}


// address: 0x8014A7F8
// line start: 667
// line end:   668
int cdstream_is_last_chunk() {
}


// address: 0x8014A810
// line start: 680
// line end:   710
void cdstream_discard_chunk() {
}


// address: 0x8014A910
// line start: 720
// line end:   737
void close_cdstream() {
}


// address: 0x8014A988
// line start: 778
// line end:   854
int open_cdstream(char *fname, int secoffs, int seclen) {
	// register: 16
	register int len;
}


// address: 0x8014AB20
// line start: 873
// line end:   884
int set_mdec_img_buffer(unsigned char *p) {
	// register: 5
	register int i;
	// register: 6
	register int tsz;
}


// address: 0x8014AB54
// line start: 898
// line end:   934
void start_mdec_decode(unsigned char *data, int x, int y, int w, int h) {
	// register: 5
	register int sz;
}


// address: 0x8014ACD8
// line start: 942
// line end:   950
void DCT_out_handler() {
}


// address: 0x8014AD74
// line start: 960
// line end:   974
void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table) {
}


// address: 0x8014ADE4
// line start: 986
// line end:   989
void init_mdec_buffer(char *buf, int size) {
}


// address: 0x8014AE00
// line start: 1003
// line end:   1072
int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct) {
	// register: 30
	register int xx;
	// register: 20
	register int x;
	// register: 22
	register int y;
	// register: 23
	register int xs;
	// address: 0xFFFFFFA8
	auto int ys;
	// register: 19
	register int w;
	// register: 21
	register int h;
	// address: 0xFFFFFFB0
	auto int n;
	// address: 0xFFFFFFB8
	auto int ox;
	// address: 0xFFFFFFC0
	auto int oy;
}


// address: 0x8014B1F0
// line start: 1081
// line end:   1095
void rebuild_mdec_polys(int x, int y) {
	// register: 7
	register int px;
	// register: 14
	register int py;
	// register: 15
	// size: 0x28
	register struct POLY_FT4 *p;
}


// address: 0x8014B3C4
// line start: 1106
// line end:   1107
void clear_mdec_frame() {
}


// address: 0x8014B3D0
// line start: 1116
// line end:   1155
void draw_mdec_polys() {
	// register: 10
	register int i;
	// register: 16
	register unsigned char cdbuf;
}


// address: 0x8014B71C
// line start: 1161
// line end:   1162
void invalidate_mdec_frame() {
}


// address: 0x8014B730
// line start: 1171
// line end:   1172
int is_frame_decoded() {
}


// address: 0x8014B73C
// line start: 1185
// line end:   1228
void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct) {
	// address: 0xFFFFFFB0
	// size: 0x8
	auto struct RECT r;
	// register: 9
	register int i;
}


// address: 0x8014BACC
// line start: 1233
// line end:   1242
void set_mdec_poly_bright(int br) {
	// register: 9
	register int a;
	// register: 7
	register int b;
	// register: 5
	register int c;
}


// address: 0x8014BB34
// line start: 1254
// line end:   1259
int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer) {
}


// address: 0x8014BB84
// line start: 1265
// line end:   1295
void init_mdec_audio(int rate) {
	// address: 0xFFFFFFD0
	// size: 0x28
	auto struct SpuCommonAttr comm_attr;
}


// address: 0x8014BC3C
// line start: 1301
// line end:   1303
void kill_mdec_audio() {
}


// address: 0x8014BC6C
// line start: 1308
// line end:   1309
void stop_mdec_audio() {
}


// address: 0x8014BC90
// line start: 1316
// line end:   1421
void play_mdec_audio(unsigned char *data, struct asec *h) {
	// register: 16
	register int i;
	// register: 7
	register int b;
	// register: 19
	register int offs;
	// address: 0xFFFFFF90
	// size: 0x40
	auto struct SpuVoiceAttr voice_attr;
	// register: 5
	register unsigned char *dp;
	// register: 20
	register int hsize;
}


// address: 0x8014BF2C
// line start: 1428
// line end:   1441
void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr) {
	// register: 16
	register int i;
}


// address: 0x8014BFF8
// line start: 1447
// line end:   1449
void resync_audio() {
}


// address: 0x8014C028
// line start: 1458
// line end:   1465
void stop_mdec_stream() {
}


// address: 0x8014C074
// line start: 1471
// line end:   1490
void dequeue_stream() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014C160
// line start: 1497
// line end:   1540
void dequeue_animation() {
	// register: 16
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014C310
// line start: 1559
// line end:   1617
void decode_mdec_stream(int frames_elapsed) {
	// address: 0xFFFFFFF0
	auto unsigned char *data;
	// address: 0xFFFFFFF4
	// size: 0x20
	auto struct strheader *h;
	// register: 16
	register int req_frame;
}


// address: 0x8014C4FC
// line start: 1637
// line end:   1656
void play_mdec_stream(char *filename, int speed, int start, int end) {
	// register: 3
	// size: 0x14
	register struct _mdecanim *a;
}


// address: 0x8014C5B0
// line start: 1663
// line end:   1666
void clear_mdec_queue() {
}


// address: 0x8014C5DC
// line start: 1677
// line end:   1690
void StrClearVRAM() {
	// address: 0xFFFFFFE8
	// size: 0x8
	auto struct RECT clrRect;
}


// address: 0x8014C69C
// line start: 1700
// line end:   1889
short PlayFMVOverLay(char *filename, int w, int h) {
	// register: 20
	register int start_time;
	// register: 23
	register int start_frame;
	// register: 2
	register int afrm;
	// register: 4
	register int efrm;
	// register: 19
	register int br;
	// register: 22
	register int fade;
	// register: 21
	register int user_quit;
	// address: 0xFFFFFFD0
	// size: 0x8
	auto struct RECT r;
	// register: 17
	// size: 0x6C
	register struct CPad *P1;
	// register: 18
	// size: 0x6C
	register struct CPad *P2;
}


// address: 0x8014CAA4
// line start: 114
// line end:   118
unsigned short GetDown__C4CPad(struct CPad *this) {
}


