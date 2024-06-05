/*******************************************************************************
 * Size: 18 px
 * Bpp: 1
 * Opts: --bpp 1 --size 18 --font /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/Staatliches-Regular.ttf -o /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/ui_font_Font_18.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT_18
#define UI_FONT_FONT_18 1
#endif

#if UI_FONT_FONT_18

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xc3, 0xc0,

    /* U+0022 "\"" */
    0xde, 0xf7, 0xb0,

    /* U+0023 "#" */
    0x6c, 0x6c, 0xff, 0xff, 0x6c, 0xff, 0xff, 0x6c,
    0x6c,

    /* U+0024 "$" */
    0x31, 0xef, 0xf3, 0xcf, 0x87, 0x87, 0xcf, 0x3f,
    0xde, 0x30,

    /* U+0025 "%" */
    0x70, 0xcf, 0x8c, 0xd9, 0x8d, 0x98, 0xfb, 0x7,
    0x20, 0x6, 0x0, 0xce, 0xd, 0xf1, 0x9b, 0x19,
    0xb3, 0x1f, 0x20, 0xe0,

    /* U+0026 "&" */
    0x3c, 0x3e, 0x30, 0x18, 0xc, 0x3, 0xfd, 0xff,
    0x8c, 0xc6, 0x63, 0x31, 0x8f, 0xc3, 0xe0,

    /* U+0027 "'" */
    0xff,

    /* U+0028 "(" */
    0x3b, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x30, 0xf3,
    0x80,

    /* U+0029 ")" */
    0xe7, 0x86, 0x31, 0x8c, 0x63, 0x18, 0xc7, 0xee,
    0x0,

    /* U+002A "*" */
    0x27, 0xc9, 0xf2, 0x0,

    /* U+002B "+" */
    0x30, 0x60, 0xc7, 0xff, 0xe6, 0xc, 0x18,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x33, 0x66, 0x66, 0x6e, 0xcc, 0xcc, 0xc0,

    /* U+0030 "0" */
    0x3c, 0x7e, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0x7e, 0x3c,

    /* U+0031 "1" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+0032 "2" */
    0x38, 0xfb, 0x1e, 0x3c, 0x61, 0xc7, 0xc, 0x38,
    0xe3, 0x87, 0xff, 0xe0,

    /* U+0033 "3" */
    0x38, 0xfb, 0x1e, 0x30, 0x63, 0x87, 0x3, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0034 "4" */
    0xc, 0x38, 0x71, 0xe3, 0xc7, 0x9b, 0x36, 0xcd,
    0xff, 0xf8, 0x60, 0xc0,

    /* U+0035 "5" */
    0xff, 0xff, 0x6, 0xc, 0x1f, 0x3f, 0x63, 0x7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0036 "6" */
    0x38, 0xfb, 0x3e, 0x3c, 0x1f, 0x3f, 0x63, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0037 "7" */
    0xff, 0xfc, 0x18, 0x70, 0xc1, 0x87, 0xc, 0x18,
    0x70, 0xc1, 0x87, 0x0,

    /* U+0038 "8" */
    0x38, 0xfb, 0x1e, 0x3c, 0x6f, 0xff, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0039 "9" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xdf, 0x9f, 0x7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+003A ":" */
    0xf0, 0xf,

    /* U+003B ";" */
    0xf0, 0xf, 0x60,

    /* U+003C "<" */
    0x4, 0x18, 0xe3, 0x8e, 0xe, 0x6, 0x7, 0x4,

    /* U+003D "=" */
    0xff, 0xfc, 0x7, 0xff, 0xe0,

    /* U+003E ">" */
    0x83, 0x87, 0xe, 0x1c, 0xe7, 0x30, 0x80,

    /* U+003F "?" */
    0x79, 0xec, 0xf3, 0xcc, 0x71, 0x8c, 0x30, 0xc0,
    0xc, 0x30,

    /* U+0040 "@" */
    0x3c, 0x3f, 0x30, 0xd8, 0x6d, 0xb6, 0xdb, 0x6d,
    0xb6, 0xdf, 0x67, 0x30, 0xf, 0xf3, 0xf8,

    /* U+0041 "A" */
    0x38, 0x70, 0xf1, 0xe3, 0xcf, 0x9b, 0x36, 0x6e,
    0xdd, 0xff, 0xfc, 0x60,

    /* U+0042 "B" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x7f, 0xbf, 0x67, 0xc7,
    0x8f, 0x3f, 0xef, 0x80,

    /* U+0043 "C" */
    0x38, 0xfb, 0x1e, 0x3c, 0x18, 0x30, 0x60, 0xc1,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0044 "D" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x3f, 0xef, 0x80,

    /* U+0045 "E" */
    0xff, 0xfc, 0x30, 0xc3, 0xff, 0xf0, 0xc3, 0xc,
    0x3f, 0xfc,

    /* U+0046 "F" */
    0xff, 0xfc, 0x30, 0xc3, 0xff, 0xf0, 0xc3, 0xc,
    0x30, 0xc0,

    /* U+0047 "G" */
    0x38, 0xfb, 0x1e, 0x3c, 0x18, 0x37, 0xef, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0048 "H" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x7f, 0xff, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+004A "J" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+004B "K" */
    0xc7, 0x9b, 0x76, 0xcf, 0x1e, 0x3e, 0x7c, 0xd9,
    0x9b, 0x36, 0x7c, 0x60,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x3f, 0xfc,

    /* U+004D "M" */
    0xe7, 0xe7, 0xff, 0xff, 0xdb, 0xdb, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+004E "N" */
    0xc7, 0x8f, 0x9f, 0x3f, 0x7e, 0xff, 0xef, 0xdf,
    0x9f, 0x3e, 0x3c, 0x60,

    /* U+004F "O" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0050 "P" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x79, 0xff, 0x7c, 0xc1,
    0x83, 0x6, 0xc, 0x0,

    /* U+0051 "Q" */
    0x38, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,
    0xc6, 0xc6, 0xc6, 0x7e, 0x3f, 0x2,

    /* U+0052 "R" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x7f, 0xbf, 0x67, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+0053 "S" */
    0x38, 0xfb, 0x1e, 0x3c, 0x7e, 0x1e, 0xe, 0xf,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0054 "T" */
    0xff, 0xfc, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x30, 0x60, 0xc1, 0x80,

    /* U+0055 "U" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0056 "V" */
    0xc7, 0xcd, 0x9b, 0x36, 0x6d, 0x9b, 0x1e, 0x3c,
    0x78, 0xe1, 0xc1, 0x80,

    /* U+0057 "W" */
    0xc6, 0x7d, 0xcd, 0xbb, 0xb7, 0x66, 0xec, 0xdd,
    0x9b, 0xb3, 0x5e, 0x3b, 0xc7, 0x70, 0xee, 0x1d,
    0xc3, 0xb8,

    /* U+0058 "X" */
    0xc6, 0xd9, 0xb3, 0x63, 0x87, 0xe, 0x1c, 0x6c,
    0xd9, 0xb3, 0x6c, 0x60,

    /* U+0059 "Y" */
    0xcf, 0x3c, 0xde, 0x79, 0xe3, 0xc, 0x30, 0xc3,
    0xc, 0x30,

    /* U+005A "Z" */
    0xff, 0xfc, 0x38, 0x61, 0xc3, 0xe, 0x18, 0x70,
    0xc3, 0x87, 0xff, 0xe0,

    /* U+005B "[" */
    0xff, 0xf1, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0xff,
    0x80,

    /* U+005C "\\" */
    0xcc, 0xcc, 0xc6, 0x66, 0x66, 0x63, 0x30,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc7, 0xff,
    0x80,

    /* U+005E "^" */
    0x10, 0xc7, 0x9b, 0x48,

    /* U+005F "_" */
    0xff, 0xff,

    /* U+0060 "`" */
    0xcd, 0x80,

    /* U+0061 "a" */
    0x38, 0x70, 0xf1, 0xe3, 0xcf, 0x9b, 0x36, 0x6e,
    0xdd, 0xff, 0xfc, 0x60,

    /* U+0062 "b" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x7f, 0xbf, 0x67, 0xc7,
    0x8f, 0x3f, 0xef, 0x80,

    /* U+0063 "c" */
    0x38, 0xfb, 0x1e, 0x3c, 0x18, 0x30, 0x60, 0xc1,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0064 "d" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x3f, 0xef, 0x80,

    /* U+0065 "e" */
    0xff, 0xfc, 0x30, 0xc3, 0xff, 0xf0, 0xc3, 0xc,
    0x3f, 0xfc,

    /* U+0066 "f" */
    0xff, 0xfc, 0x30, 0xc3, 0xff, 0xf0, 0xc3, 0xc,
    0x30, 0xc0,

    /* U+0067 "g" */
    0x38, 0xfb, 0x1e, 0x3c, 0x18, 0x37, 0xef, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0068 "h" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x7f, 0xff, 0xe3, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+0069 "i" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+006A "j" */
    0x6, 0xc, 0x18, 0x30, 0x60, 0xc1, 0x83, 0x7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+006B "k" */
    0xc7, 0x9b, 0x76, 0xcf, 0x1e, 0x3e, 0x7c, 0xd9,
    0x9b, 0x36, 0x7c, 0x60,

    /* U+006C "l" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xc,
    0x3f, 0xfc,

    /* U+006D "m" */
    0xe7, 0xe7, 0xff, 0xff, 0xdb, 0xdb, 0xc3, 0xc3,
    0xc3, 0xc3, 0xc3, 0xc3, 0xc3,

    /* U+006E "n" */
    0xc7, 0x8f, 0x9f, 0x3f, 0x7e, 0xff, 0xef, 0xdf,
    0x9f, 0x3e, 0x3c, 0x60,

    /* U+006F "o" */
    0x38, 0xfb, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0070 "p" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x79, 0xff, 0x7c, 0xc1,
    0x83, 0x6, 0xc, 0x0,

    /* U+0071 "q" */
    0x38, 0x7c, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6, 0xc6,
    0xc6, 0xc6, 0xc6, 0x7e, 0x3f, 0x2,

    /* U+0072 "r" */
    0xf9, 0xfb, 0x1e, 0x3c, 0x7f, 0xbf, 0x67, 0xc7,
    0x8f, 0x1e, 0x3c, 0x60,

    /* U+0073 "s" */
    0x38, 0xfb, 0x1e, 0x3c, 0x7e, 0x1e, 0xe, 0xf,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0074 "t" */
    0xff, 0xfc, 0x60, 0xc1, 0x83, 0x6, 0xc, 0x18,
    0x30, 0x60, 0xc1, 0x80,

    /* U+0075 "u" */
    0xc7, 0x8f, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x1b, 0xe3, 0x80,

    /* U+0076 "v" */
    0xc7, 0xcd, 0x9b, 0x36, 0x6d, 0x9b, 0x1e, 0x3c,
    0x78, 0xe1, 0xc1, 0x80,

    /* U+0077 "w" */
    0xc6, 0x7d, 0xcd, 0xbb, 0xb7, 0x66, 0xec, 0xdd,
    0x9b, 0xb3, 0x5e, 0x3b, 0xc7, 0x70, 0xee, 0x1d,
    0xc3, 0xb8,

    /* U+0078 "x" */
    0xc6, 0xd9, 0xb3, 0x63, 0x87, 0xe, 0x1c, 0x6c,
    0xd9, 0xb3, 0x6c, 0x60,

    /* U+0079 "y" */
    0xcf, 0x3c, 0xde, 0x79, 0xe3, 0xc, 0x30, 0xc3,
    0xc, 0x30,

    /* U+007A "z" */
    0xff, 0xfc, 0x38, 0x61, 0xc3, 0xe, 0x18, 0x70,
    0xc3, 0x87, 0xff, 0xe0,

    /* U+007B "{" */
    0x3e, 0x7c, 0xc1, 0x83, 0x1e, 0x3c, 0x18, 0x30,
    0x60, 0xc1, 0xf3, 0xe0,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xc0,

    /* U+007D "}" */
    0xf9, 0xf0, 0x60, 0xc1, 0x83, 0xc7, 0x8c, 0x18,
    0x30, 0x67, 0xcf, 0x80,

    /* U+007E "~" */
    0x67, 0xfb, 0x70
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 43, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 58, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 5, .adv_w = 113, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 8, .adv_w = 137, .box_w = 8, .box_h = 9, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 17, .adv_w = 108, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 27, .adv_w = 195, .box_w = 12, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 143, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 62, .adv_w = 61, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 63, .adv_w = 94, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 94, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 81, .adv_w = 101, .box_w = 5, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 85, .adv_w = 127, .box_w = 7, .box_h = 8, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 92, .adv_w = 58, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 93, .adv_w = 87, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 94, .adv_w = 58, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 95, .adv_w = 86, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 102, .adv_w = 143, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 60, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 143, .adv_w = 130, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 131, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 127, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 129, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 129, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 215, .adv_w = 58, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 58, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 220, .adv_w = 123, .box_w = 7, .box_h = 9, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 228, .adv_w = 128, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 233, .adv_w = 123, .box_w = 6, .box_h = 9, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 240, .adv_w = 125, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 250, .adv_w = 156, .box_w = 9, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 265, .adv_w = 123, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 277, .adv_w = 134, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 289, .adv_w = 130, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 301, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 313, .adv_w = 121, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 121, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 333, .adv_w = 130, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 345, .adv_w = 137, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 357, .adv_w = 60, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 361, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 135, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 385, .adv_w = 114, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 395, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 408, .adv_w = 134, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 420, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 134, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 458, .adv_w = 139, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 470, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 482, .adv_w = 115, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 506, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 518, .adv_w = 181, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 536, .adv_w = 116, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 548, .adv_w = 115, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 558, .adv_w = 119, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 96, .box_w = 5, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 579, .adv_w = 87, .box_w = 4, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 586, .adv_w = 96, .box_w = 5, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 106, .box_w = 6, .box_h = 5, .ofs_x = 0, .ofs_y = 8},
    {.bitmap_index = 599, .adv_w = 158, .box_w = 8, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 601, .adv_w = 82, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 14},
    {.bitmap_index = 603, .adv_w = 123, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 615, .adv_w = 134, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 130, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 639, .adv_w = 136, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 121, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 661, .adv_w = 121, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 671, .adv_w = 130, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 683, .adv_w = 137, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 695, .adv_w = 60, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 699, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 711, .adv_w = 135, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 723, .adv_w = 114, .box_w = 6, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 733, .adv_w = 155, .box_w = 8, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 746, .adv_w = 134, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 758, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 770, .adv_w = 134, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 782, .adv_w = 134, .box_w = 8, .box_h = 14, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 796, .adv_w = 139, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 808, .adv_w = 126, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 820, .adv_w = 115, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 832, .adv_w = 132, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 844, .adv_w = 125, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 181, .box_w = 11, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 874, .adv_w = 116, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 886, .adv_w = 115, .box_w = 6, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 896, .adv_w = 119, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 908, .adv_w = 117, .box_w = 7, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 920, .adv_w = 57, .box_w = 2, .box_h = 13, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 924, .adv_w = 117, .box_w = 7, .box_h = 13, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 936, .adv_w = 137, .box_w = 7, .box_h = 3, .ofs_x = 1, .ofs_y = 6}
};

/*---------------------
 *  CHARACTER MAPPING
 *--------------------*/



/*Collect the unicode lists and glyph_id offsets*/
static const lv_font_fmt_txt_cmap_t cmaps[] =
{
    {
        .range_start = 32, .range_length = 95, .glyph_id_start = 1,
        .unicode_list = NULL, .glyph_id_ofs_list = NULL, .list_length = 0, .type = LV_FONT_FMT_TXT_CMAP_FORMAT0_TINY
    }
};

/*-----------------
 *    KERNING
 *----------------*/


/*Map glyph_ids to kern left classes*/
static const uint8_t kern_left_class_mapping[] =
{
    0, 1, 0, 2, 3, 0, 0, 4,
    2, 5, 5, 6, 7, 8, 9, 10,
    11, 3, 0, 12, 13, 14, 15, 3,
    16, 17, 18, 19, 19, 20, 0, 21,
    22, 23, 24, 25, 3, 26, 27, 28,
    3, 29, 30, 31, 32, 33, 29, 29,
    3, 34, 35, 36, 37, 38, 39, 40,
    40, 41, 42, 43, 0, 0, 0, 44,
    45, 0, 46, 25, 3, 26, 27, 28,
    3, 29, 29, 29, 32, 33, 29, 29,
    3, 47, 3, 36, 37, 48, 39, 40,
    40, 41, 49, 43, 5, 0, 5, 0
};

/*Map glyph_ids to kern right classes*/
static const uint8_t kern_right_class_mapping[] =
{
    0, 1, 0, 2, 3, 4, 0, 5,
    2, 6, 6, 7, 8, 9, 10, 11,
    12, 13, 0, 14, 15, 16, 17, 18,
    19, 20, 21, 22, 22, 23, 0, 24,
    25, 0, 26, 3, 27, 3, 3, 3,
    13, 3, 28, 29, 3, 30, 3, 3,
    31, 3, 13, 3, 32, 33, 34, 35,
    36, 37, 38, 39, 0, 40, 0, 41,
    42, 0, 43, 3, 13, 0, 3, 3,
    13, 3, 3, 44, 3, 30, 3, 3,
    13, 3, 13, 3, 32, 33, 34, 40,
    40, 45, 38, 39, 6, 0, 6, 0
};

/*Kern values between classes*/
static const int8_t kern_class_values[] =
{
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 3, 0,
    0, 0, 7, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -10, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, -6, 0, -17, -9, 0, 1,
    0, -3, 0, 0, -6, 0, -3, 0,
    -12, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -4, 2, -6, -3, -12, -5,
    -3, -5, 0, -14, -5, 0, -4, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, -6, -9, -6, 0,
    0, -17, -3, 0, 0, 0, 0, 0,
    -4, 0, 0, -12, 0, 0, -3, -14,
    0, -9, -9, -6, -12, -6, -9, 0,
    0, -4, -12, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, -6, -6, 0,
    0, 0, -6, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -17, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, 0, 0, -46, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, -46, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -29, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, -9, 0, -3,
    0, 0, 0, 0, 3, -3, 0, 0,
    0, -3, -6, -9, 0, -12, -12, 0,
    -14, 0, -12, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -17, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    -14, 0, -6, -6, -9, -12, -12, -6,
    0, 0, -9, 0, -9, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, -9,
    0, -3, 0, 0, 0, -26, 3, -3,
    0, 0, 0, -3, -6, -9, 0, -12,
    -12, 0, -14, 0, -12, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, 0, -14, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -20, -14, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, 0, 0, 0, -4,
    0, -6, -6, -3, -4, 0, -6, 0,
    0, 0, -9, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, -6, 0, 0,
    0, 0, 0, 0, 0, 0, -6, -6,
    -4, -5, -3, -6, 0, 0, -6, 0,
    -4, 0, 0, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, -6,
    0, 0, -17, -26, -9, -26, 0, -6,
    -5, -6, -23, 0, -6, 0, -6, -6,
    -12, 0, 0, 0, -15, -6, 0, -26,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -15, -26, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, 0, -1, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    -3, 0, -6, -6, -6, -6, 0, -6,
    0, 0, -6, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -3, -3, -5, 0, -3, 0, 0, -6,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, 0, -9,
    0, -6, -6, -6, 0, -3, -6, 0,
    0, -6, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, 0, 0,
    0, 0, 0, -6, -12, 0, -12, -12,
    -12, 0, -12, -12, 0, 0, -9, 0,
    -12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, -14, 0, 0, -3,
    -6, -14, -12, 0, -14, 0, -7, -6,
    0, -6, -6, -3, -9, -14, -6, -6,
    0, -12, -3, -20, 1, -6, 1, -7,
    0, -6, -6, -14, -4, -16, -16, -6,
    -13, -3, -16, -12, 0, 1, -7, -6,
    0, 0, 0, 0, 0, -3, 0, 0,
    -6, 0, -6, 0, 0, 0, 0, -3,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, -6, 0, 0, 0, 0, 0, 0,
    -6, 0, -6, -6, -5, -9, 0, -6,
    0, -20, -6, 0, -5, 0, 0, 0,
    0, 0, -6, 0, 0, -6, 0, -6,
    -9, -7, 0, 0, 0, 0, 0, -3,
    0, -7, 0, 0, 0, 0, -6, -7,
    0, 0, 0, -7, 0, -6, -1, -6,
    -6, -7, -6, -6, -6, 0, -23, -9,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -3, -17, 0, 0, 0, -5, -3, 0,
    0, 0, 0, -3, -5, 0, -26, 0,
    -5, -2, 0, 0, 0, 0, -6, -1,
    0, 0, 0, 0, -3, -10, -6, 0,
    0, 3, 0, 0, 0, 0, 0, -9,
    0, -9, -14, -10, 0, 0, 0, 0,
    0, 0, 0, -10, 0, 0, 0, 0,
    -17, -10, 0, 0, 3, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -29, -17, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -6, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    -6, 0, -6, 0, 0, 0, 0, 0,
    0, 0, -6, 0, 0, 0, 0, -6,
    -6, 0, 0, 0, -6, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -6, 0, 0, 0, 0, 0, -12, -6,
    0, -14, 0, 3, -14, 3, 0, -12,
    0, 0, 0, -6, -9, 0, -12, -12,
    0, 0, 0, 0, 0, -12, -3, -9,
    0, -9, -11, -4, 0, -4, -4, -3,
    -3, 0, -4, -17, 0, 0, -9, -3,
    -12, 0, 0, 0, -6, 0, -40, -29,
    0, -26, 0, 0, -4, 0, -6, -6,
    -6, -9, -17, -9, -6, 0, 0, 0,
    -20, 0, -4, 0, -9, 0, -4, -7,
    -29, -6, -17, -17, -3, -23, -6, -17,
    0, 0, 0, -9, -3, 0, 0, 0,
    0, -3, -3, -6, 0, -17, 0, -17,
    0, -3, 0, 0, 0, 0, 0, -6,
    -3, -3, 0, 0, 0, 0, -14, -3,
    0, -35, 0, -3, 0, -3, 0, -3,
    -3, -9, -6, -6, -3, 0, -35, -14,
    -35, -9, 0, 0, 0, 0, 0, -6,
    0, 0, -6, 0, -17, -9, 0, 1,
    0, -3, 0, 0, -6, 0, -3, 0,
    -12, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -4, 0, -6, -3, -12, -5,
    -3, -5, 0, -14, -5, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, -9, 0, -1, 0, -9, 0, 0,
    0, -1, 0, -6, 0, -1, -1, -6,
    0, -6, -6, -3, -9, 0, -6, 0,
    0, 0, -6, -3, 0, 0, 0, 0,
    0, -6, 0, 0, -9, 0, -9, -9,
    0, 0, 0, 0, 0, 0, -6, 0,
    0, 0, -6, 0, 0, -6, 0, 0,
    -6, 0, 0, -3, -1, 0, -6, -6,
    -6, -6, 0, -6, 0, 0, -6, -6,
    -6, 0, 0, 0, 0, -3, 0, 0,
    0, -9, -14, -12, -17, -6, 0, 0,
    -12, 0, -3, 0, -3, -6, -9, -9,
    0, 0, -13, -6, 0, -26, 6, -6,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, -26, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    -5, 0, -3, 0, 0, 0, 0, -6,
    0, 0, 0, -14, -12, -14, -23, -6,
    -6, 0, -12, 0, -6, 0, -7, -3,
    0, -12, -6, 0, -12, -6, 0, -21,
    0, -6, -4, 0, 0, -3, -3, 0,
    0, 0, -3, 0, 0, -12, -21, 0,
    3, 0, 0, 0, -6, 0, -6, 0,
    0, -14, 0, 0, -10, -6, -6, -12,
    0, -7, 0, -6, -5, 0, -12, -3,
    -6, -7, -10, 0, -9, 0, -10, -10,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, -7, -9, 0, 0, 0, 0,
    0, -6, 0, -6, 0, -14, -14, -14,
    -23, -10, -9, -6, -20, 0, -7, 0,
    -8, -5, -17, 0, 0, -6, -16, -10,
    0, -32, 0, -10, -6, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, -16,
    -32, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, -12, 0, -9, -6, 0,
    -3, -12, 0, 0, 0, 0, -6, 0,
    -14, -3, 0, -3, -6, 0, -10, 0,
    -6, -1, 0, 0, 0, 0, 0, 3,
    -3, 0, 0, 0, -3, -10, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, -55, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -9, -55, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, 0, 0, 0, 0, -14, 0,
    0, 0, -14, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, -14, 0, 0, -3, -6, -14,
    -12, 0, -14, 0, -7, -6, 0, -6,
    -6, -3, -9, -14, -6, -6, 0, -12,
    -3, -20, 1, -6, 1, -7, 0, -6,
    -6, -14, -4, -18, -18, -6, -13, -3,
    -18, -12, 0, 1, -7, -6, 0, 0,
    0, 0, -3, -3, -6, 0, -17, 0,
    -17, 0, -3, 0, 0, 0, 0, 0,
    -6, -3, -3, 0, 0, 0, 0, -17,
    -3, 0, -35, 0, -3, 0, -3, 0,
    -3, -3, -9, -6, -6, -3, 0, -35,
    -14, -35, -9, 0, 0, 0, 0, -3,
    0, 0, 0, -9, -14, -12, -17, -3,
    0, 0, -12, 0, -3, 0, -3, -3,
    -9, -9, 0, 0, -10, -3, 0, -26,
    6, -6, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -10, -26, 0,
    0, 0, 0, 0, -6, 0, -6, 0,
    -14, -14, -14, -23, -10, -9, -6, -20,
    0, -7, 0, -8, -5, -17, 0, 0,
    -6, -17, -10, 0, -32, 0, -10, -6,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, -17, -32, 0
};


/*Collect the kern class' data in one place*/
static const lv_font_fmt_txt_kern_classes_t kern_classes =
{
    .class_pair_values   = kern_class_values,
    .left_class_mapping  = kern_left_class_mapping,
    .right_class_mapping = kern_right_class_mapping,
    .left_class_cnt      = 49,
    .right_class_cnt     = 45,
};

/*--------------------
 *  ALL CUSTOM DATA
 *--------------------*/

#if LVGL_VERSION_MAJOR == 8
/*Store all the custom data of the font*/
static  lv_font_fmt_txt_glyph_cache_t cache;
#endif

#if LVGL_VERSION_MAJOR >= 8
static const lv_font_fmt_txt_dsc_t font_dsc = {
#else
static lv_font_fmt_txt_dsc_t font_dsc = {
#endif
    .glyph_bitmap = glyph_bitmap,
    .glyph_dsc = glyph_dsc,
    .cmaps = cmaps,
    .kern_dsc = &kern_classes,
    .kern_scale = 16,
    .cmap_num = 1,
    .bpp = 1,
    .kern_classes = 1,
    .bitmap_format = 0,
#if LVGL_VERSION_MAJOR == 8
    .cache = &cache
#endif
};



/*-----------------
 *  PUBLIC FONT
 *----------------*/

/*Initialize a public general font descriptor*/
#if LVGL_VERSION_MAJOR >= 8
const lv_font_t ui_font_Font_18 = {
#else
lv_font_t ui_font_Font_18 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 19,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -2,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONT_18*/

