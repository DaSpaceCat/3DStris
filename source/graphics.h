#ifndef GRAPHICS_H
#define GRAPHICS_H

#include "level.h"
#include "structs.h"
#include <citro2d.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define DEFAULT_GRIDX           150
#define DEFAULT_GRIDY           20

#define DEFAULT_NEXT_TEXTX      260
#define DEFAULT_NEXT_TEXTY      55

static const int DEFAULT_NEXT_FRAME_X[] = { 260, 295, 330, 365, 365, 365};
static const int DEFAULT_NEXT_FRAME_Y[] = { 20, 20, 20, 20, 60, 100 };

#define DEFAULT_SCORE_TEXTX     280
#define DEFAULT_SCORE_TEXTY     210

#define DEFAULT_HISCORE_TEXTX     0
#define DEFAULT_HISCORE_TEXTY     210

#define DEFAULT_LINES_FRAMEX    115
#define DEFAULT_LINES_FRAMEY    140

#define DEFAULT_LEVEL_FRAMEX    115
#define DEFAULT_LEVEL_FRAMEY    190

#define DEFAULT_HOLD_FRAMEX     115
#define DEFAULT_HOLD_FRAMEY     20

#define DEFAULT_OFFSET_HOLDX    5
#define DEFAULT_OFFSET_HOLDY    5

#define DEFAULT_OFFSET_NEXTX    5
#define DEFAULT_OFFSET_NEXTY    5

#define DEFAULT_OFFSET_LVLY	10
#define DEFAULT_OFFSET_LNSY	10

#define DEFAULT_POPUPX		270
#define DEFAULT_POPUPY		180

#define DEFAULT_POPUP_FRAME_CFG	40

void render_grid_blocks(int);
void render_block(Tetrimino, bool, bool, int);
void render_frames();
void render_frame(int);
void graphics_parse_config(char*);
void graphics_fini();
void graphics_init();
int load_textures(const char*);

extern int level_grid[DIM_X][DIM_Y];
extern u32 score;
extern u32 high_score;
extern u32 total_lines;
extern u8 paused;
extern u8 controllable;
extern u8 back_to_back_flag;
extern u8 mode;
extern Indicator_to_render indicator;

extern Tetrimino* in_play;
extern Tetrimino* hold;

extern u8* full_lines;
extern u8 ARE_state;

extern const int rotations[6][4][3][3];
extern const int rotation_I[4][5][5];

extern Tetrimino_list* next_blocks;

image background;
image next_text;
image next_frame[6];
image grid;
image score_text;
image hiscore_text;
image lines_frame;
image level_frame;
image hold_frame;

C2D_Image tetriminos[7];
C2D_Image blocks[7];
C2D_Image score_num[10];
C2D_Image misc_num[10];
C2D_Image gameover_text;
C2D_Image paused_text;

C2D_Image tetris_indicator;
C2D_Image tspin_indicator;
C2D_Image tspinsingle_indicator;
C2D_Image tspindouble_indicator;
C2D_Image tspintriple_indicator;
C2D_Image backtoback_indicator;

s32 block_offset_holdx;
s32 block_offset_holdy;

s32 block_offset_nextx;
s32 block_offset_nexty;

s32 remove_line_count;

s32 digit_offset_linesy;
s32 digit_offset_levely;

s32 indicatorx;
s32 indicatory;

s32 indicator_frames;
s32 indicator_frame_config;

#endif // GRAPHICS_H
