del_items(0x80147920)
SetType(0x80147920, "void EA_cd_seek(int secnum)")
del_items(0x80147948)
SetType(0x80147948, "void MY_CdGetSector(unsigned long *src, unsigned long *dst, int size)")
del_items(0x8014797C)
SetType(0x8014797C, "void init_cdstream(int chunksize, unsigned char *buf, int bufsize)")
del_items(0x8014798C)
SetType(0x8014798C, "void flush_cdstream()")
del_items(0x801479B0)
SetType(0x801479B0, "int check_complete_frame(struct strheader *h)")
del_items(0x80147A30)
SetType(0x80147A30, "void reset_cdstream()")
del_items(0x80147A58)
SetType(0x80147A58, "void kill_stream_handlers()")
del_items(0x80147AC8)
SetType(0x80147AC8, "void stream_cdready_handler(unsigned long *addr, int idx, int i, int sec)")
del_items(0x80147CA8)
SetType(0x80147CA8, "void CD_stream_handler(struct TASK *T)")
del_items(0x80147D9C)
SetType(0x80147D9C, "void install_stream_handlers()")
del_items(0x80147E0C)
SetType(0x80147E0C, "void cdstream_service()")
del_items(0x80147EA4)
SetType(0x80147EA4, "int cdstream_get_chunk(unsigned char **data, struct strheader **h)")
del_items(0x80147FC4)
SetType(0x80147FC4, "int cdstream_is_last_chunk()")
del_items(0x80147FDC)
SetType(0x80147FDC, "void cdstream_discard_chunk()")
del_items(0x801480DC)
SetType(0x801480DC, "void close_cdstream()")
del_items(0x80148170)
SetType(0x80148170, "void wait_cdstream()")
del_items(0x80148228)
SetType(0x80148228, "int open_cdstream(char *fname, int secoffs, int seclen)")
del_items(0x80148394)
SetType(0x80148394, "int set_mdec_img_buffer(unsigned char *p)")
del_items(0x801483C8)
SetType(0x801483C8, "void start_mdec_decode(unsigned char *data, int x, int y, int w, int h)")
del_items(0x8014854C)
SetType(0x8014854C, "void DCT_out_handler()")
del_items(0x801485E8)
SetType(0x801485E8, "void init_mdec(unsigned char *vlc_buffer, unsigned char *vlc_table)")
del_items(0x8014864C)
SetType(0x8014864C, "void init_mdec_buffer(char *buf, int size)")
del_items(0x80148668)
SetType(0x80148668, "int split_poly_area(struct POLY_FT4 *p, struct POLY_FT4 *bp, int offs, struct RECT *r, int sx, int sy, int correct)")
del_items(0x801489EC)
SetType(0x801489EC, "void rebuild_mdec_polys(int x, int y)")
del_items(0x80148BC0)
SetType(0x80148BC0, "void clear_mdec_frame()")
del_items(0x80148BCC)
SetType(0x80148BCC, "void draw_mdec_polys()")
del_items(0x80148F1C)
SetType(0x80148F1C, "void invalidate_mdec_frame()")
del_items(0x80148F30)
SetType(0x80148F30, "int is_frame_decoded()")
del_items(0x80148F3C)
SetType(0x80148F3C, "void init_mdec_polys(int x, int y, int w, int h, int bx1, int by1, int bx2, int by2, int correct)")
del_items(0x8014938C)
SetType(0x8014938C, "void set_mdec_poly_bright(int br)")
del_items(0x801493F4)
SetType(0x801493F4, "int init_mdec_stream(unsigned char *buftop, int sectors_per_frame, int mdec_frames_per_buffer)")
del_items(0x80149444)
SetType(0x80149444, "void init_mdec_audio(int rate)")
del_items(0x801494FC)
SetType(0x801494FC, "void kill_mdec_audio()")
del_items(0x8014952C)
SetType(0x8014952C, "void stop_mdec_audio()")
del_items(0x80149550)
SetType(0x80149550, "void play_mdec_audio(unsigned char *data, struct asec *h)")
del_items(0x801497EC)
SetType(0x801497EC, "void set_mdec_audio_volume(short vol, struct SpuVoiceAttr voice_attr)")
del_items(0x801498B8)
SetType(0x801498B8, "void resync_audio()")
del_items(0x801498E8)
SetType(0x801498E8, "void stop_mdec_stream()")
del_items(0x80149934)
SetType(0x80149934, "void dequeue_stream()")
del_items(0x80149A20)
SetType(0x80149A20, "void dequeue_animation()")
del_items(0x80149BD0)
SetType(0x80149BD0, "void decode_mdec_stream(int frames_elapsed)")
del_items(0x80149DBC)
SetType(0x80149DBC, "void play_mdec_stream(char *filename, int speed, int start, int end)")
del_items(0x80149E70)
SetType(0x80149E70, "void clear_mdec_queue()")
del_items(0x80149E9C)
SetType(0x80149E9C, "void StrClearVRAM()")
del_items(0x80149F00)
SetType(0x80149F00, "short PlayFMVOverLay(char *filename, int w, int h)")
del_items(0x8014A28C)
SetType(0x8014A28C, "unsigned short GetDown__C4CPad(struct CPad *this)")
