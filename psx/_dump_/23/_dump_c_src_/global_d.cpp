// global_d.cpp

#include "types.h"

// address: 0x80126D80
// size: 0xF000
extern unsigned char map_buf[61440];

// address: 0x80135D80
// size: 0x54
extern unsigned short *imgbuf[21];

// address: 0x80135DD4
// size: 0x640
extern struct POLY_FT4 br[10][2][2];

// address: 0x80136414
// size: 0x640
extern struct POLY_FT4 tmdc_pol[10][2][2];

// address: 0x80136A54
// size: 0x10
extern struct RECT mdc_buf[2];

// address: 0x80136A64
// size: 0x640
extern struct SVECTOR tmdc_pol_offs[10][10][2];

// address: 0x801370A4
// size: 0x28
extern struct mdc_header *mdc_idx[10];

// address: 0x801370CC
// size: 0x140
extern struct _mdecanim mdec_queue[16];

// address: 0x8013720C
// size: 0x80
extern struct DR_ENV mdec_drenv[2];

// address: 0x8013728C
// size: 0x84
extern int (*stream_buf[504])[33];

// address: 0x80137310
// size: 0x84
extern struct strheader *stream_bufh[33];

