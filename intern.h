/*
 * Various input/output functions
 *
 * @(#)io.c	9.0	(rdk)	 7/17/84
 *
 * Super-Rogue
 * Copyright (C) 1984 Robert D. Kindelberger
 * All rights reserved.
 *
 * Based on "Rogue: Exploring the Dungeons of Doom"
 * Copyright (C) 1980, 1981 Michael Toy, Ken Arnold and Glenn Wichman
 * All rights reserved.
 *
 * See the file LICENSE.TXT for full copyright and licensing information.
 */

#include <stdarg.h>
#include <ctype.h>
#include <string.h>
#include <stdbool.h>
/* #include "rogue.h" */
/* #include "rogue.ext" */

bool cordok();
char *charge_str();
char *ring_num();
char winat();
void _attach();
void _detach();
void _free_list();
int add_dam();
void add_haste();
void add_mon();
bool add_pack();
void add_pass();
void addmsg(char *fmt, ...);
void aggravate();
int attack();
bool author();
int badcheck();
void basic_init();
int be_trapped();
void bounce();
int buy_it();
int call();
int cansee();
int chase();
int chased();
int check_level();
int chg_abil();
void chg_hpt();
int close();
void conn();
void crankout();
int create_obj();
void cur_null();
int d_level();
void dbotline();
bool dead_end();
void death();
void del_pack();
int diag_ok();
int dip_it();
void discard();
void dispmax();
int do_chase();
void do_maze();
void do_motion();
int do_move();
void do_passages();
void do_post();
void do_rooms();
void do_run();
int do_zap();
void doadd(char *fmt, va_list ap);
void door();
bool  dosave();
int drain();
void draw_maze();
void draw_room();
bool drop();
bool dropcheck();
int eat();
int encread();
void encwrite();
void endmsg();
int estr();
int extras();
int fall();
bool fallpos();
void fatal();
bool fight();
int findcells();
void fix_stick();
int genocide();
bool get_dir();
int get_str();
int get_worth();
int getbless();
int gethand();
int getindex();
int getpcon();
int getpdex();
int getpid();
int getpwis();
void heal_self();
int help();
void hit();
int hit_monster();
int hitweight();
void horiz();
int htonl();
int hungdam();
int hurt_armor();
void idenpack();
void ignore();
bool illeg_ch();
void init_colors();
void init_everything();
void init_materials();
void init_names();
void init_player();
void init_ring();
void init_stones();
void init_things();
void init_weapon();
void initfood();
bool inventory();
bool is_current();
bool is_magic();
bool isatrap();
bool isring();
bool iswearing();
int itemvol();
int itemweight();
void killed();
void lev_mon();
int light();
void look();
bool magring();
int makemons();
int midx();
void miss();
int missile();
void money();
bool monhurt();
int msg(char *fmt, ...);
void new_level();
int ntohl();
int o_off();
int o_on();
int o_on();
bool open_market();
void option();
int pack_vol();
int packweight();
void parse_opts();
bool passwd();
int pick_one();
void pick_up();
int picky_inven();
int pinit();
int pl_off();
int pl_on();
void playit();
bool price_it();
int put_things();
int quaff();
void raise_level();
int read_scroll();
char readchar();
void remove_monster();
bool restore();
void restscr();
int rf_on();
int rf_on();
int ring_eat();
int ring_off();
int ring_on();
void ringabil();
int ringex();
void rmwall();
int rnd_mon();
int rnd_room();
int roll();
bool roll_em();
int rs_read_int();
int rs_restore_file();
int rs_save_file();
int rs_write_int();
int save();
void save_file();
bool save_game();
int save_throw();
int score();
int search();
int sell_it();
void setup();
char show();
void showpack();
bool showtop();
bool step_ok();
int str_plus();
void strucpy();
int swing();
int teleport();
void thunk();
void toss_ring();
void total_winner();
int totalenc();
void trans_line();
int u_level();
void unhold();
int updabil();
void updpack();
void vert();
int wait();
void wait_for();
void wanderer();
int waste_time();
int whatis();
int wield();
void activity();
void command();
void displevl();
void dispmons();
void do_daemons();
void do_fuses();
void extinguish();
void free();
void fuse();
void initarmor();
void lengthen();
void resoflg();
void runto();
void setoflg();
void shell();
void srdaemon();
void take_off();
void wear();
