/*******************************************************************************
 * Size: 14 px
 * Bpp: 1
 * Opts: --bpp 1 --size 14 --font /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/Staatliches-Regular.ttf -o /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/ui_font_Font_14.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT_14
#define UI_FONT_FONT_14 1
#endif

#if UI_FONT_FONT_14

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xfc, 0x30,

    /* U+0022 "\"" */
    0xff, 0xf0,

    /* U+0023 "#" */
    0x79, 0xef, 0xde, 0xfd, 0xe7, 0x80,

    /* U+0024 "$" */
    0x22, 0xf7, 0xff, 0x3c, 0xfb, 0xd1, 0x0,

    /* U+0025 "%" */
    0x63, 0x4b, 0x25, 0x93, 0x87, 0xc0, 0xc0, 0xec,
    0x69, 0x74, 0xb1, 0x80,

    /* U+0026 "&" */
    0x71, 0x83, 0x6, 0x7, 0xfb, 0x36, 0x6c, 0xd8,
    0xf0,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x7c, 0xcc, 0xcc, 0xcc, 0xc7,

    /* U+0029 ")" */
    0xe3, 0x33, 0x33, 0x33, 0x3e,

    /* U+002A "*" */
    0x5f, 0xa0,

    /* U+002B "+" */
    0x30, 0xcf, 0xcc, 0x30, 0xc0,

    /* U+002C "," */
    0xd8,

    /* U+002D "-" */
    0xe0,

    /* U+002E "." */
    0xc0,

    /* U+002F "/" */
    0x33, 0x22, 0x66, 0x64, 0x44,

    /* U+0030 "0" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0031 "1" */
    0xff, 0xff, 0xf0,

    /* U+0032 "2" */
    0x7b, 0x3c, 0xc3, 0x1c, 0xe3, 0x1c, 0xe3, 0xf0,

    /* U+0033 "3" */
    0x7b, 0x3c, 0xc3, 0x38, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0034 "4" */
    0x18, 0xe3, 0x8e, 0x79, 0x6d, 0xbf, 0x18, 0x60,

    /* U+0035 "5" */
    0xff, 0xc, 0x30, 0xfb, 0x30, 0xf3, 0xcd, 0xe0,

    /* U+0036 "6" */
    0x7b, 0x3c, 0xf0, 0xfb, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0037 "7" */
    0xfc, 0x30, 0xc6, 0x18, 0x63, 0xc, 0x31, 0x80,

    /* U+0038 "8" */
    0x76, 0xf7, 0xb7, 0x6f, 0x7b, 0xdb, 0x80,

    /* U+0039 "9" */
    0x7b, 0x3c, 0xf3, 0xcd, 0xf0, 0xf3, 0xcd, 0xe0,

    /* U+003A ":" */
    0xc0, 0x30,

    /* U+003B ";" */
    0xc0, 0x36,

    /* U+003C "<" */
    0x19, 0x98, 0xc3, 0xc,

    /* U+003D "=" */
    0xfc, 0x0, 0x3f,

    /* U+003E ">" */
    0xc6, 0x33, 0x68,

    /* U+003F "?" */
    0x7b, 0x3c, 0xf3, 0x1c, 0xe3, 0xc, 0x0, 0xc0,

    /* U+0040 "@" */
    0x7d, 0x8f, 0x1f, 0xbf, 0x7e, 0xf7, 0x60, 0xc0,
    0xfc,

    /* U+0041 "A" */
    0x30, 0xc7, 0x1e, 0x79, 0xe5, 0xb6, 0xfb, 0x30,

    /* U+0042 "B" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x3c, 0xf3, 0xcf, 0xe0,

    /* U+0043 "C" */
    0x7b, 0x3c, 0xf0, 0xc3, 0xc, 0x33, 0xcd, 0xe0,

    /* U+0044 "D" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xe0,

    /* U+0045 "E" */
    0xfe, 0x31, 0x8f, 0xe3, 0x18, 0xc7, 0xc0,

    /* U+0046 "F" */
    0xfe, 0x31, 0x8f, 0xe3, 0x18, 0xc6, 0x0,

    /* U+0047 "G" */
    0x7b, 0x3c, 0xf0, 0xc3, 0x7c, 0xf3, 0xcd, 0xe0,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xff, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+0049 "I" */
    0xff, 0xff, 0xf0,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xf3, 0xcd, 0xe0,

    /* U+004B "K" */
    0xcf, 0x6d, 0x3c, 0xf3, 0xcd, 0xb6, 0xcf, 0x30,

    /* U+004C "L" */
    0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc7, 0xc0,

    /* U+004D "M" */
    0xcf, 0xff, 0xff, 0xcf, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+004E "N" */
    0xde, 0xf7, 0xff, 0xff, 0xfb, 0xde, 0xc0,

    /* U+004F "O" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0050 "P" */
    0xfb, 0x3c, 0xf3, 0xcf, 0xec, 0x30, 0xc3, 0x0,

    /* U+0051 "Q" */
    0x79, 0x9b, 0x36, 0x6c, 0xd9, 0xb3, 0x66, 0xcc,
    0xf8, 0x10,

    /* U+0052 "R" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+0053 "S" */
    0x7b, 0x3c, 0xfb, 0xf1, 0xf1, 0xf3, 0xcd, 0xe0,

    /* U+0054 "T" */
    0xf9, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x80,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0056 "V" */
    0xcf, 0x34, 0x96, 0x79, 0xe7, 0x8c, 0x30, 0xc0,

    /* U+0057 "W" */
    0xc9, 0x6c, 0x96, 0xcb, 0xe5, 0xf3, 0xf9, 0xd8,
    0xec, 0x36, 0x1b, 0x0,

    /* U+0058 "X" */
    0xca, 0xd6, 0xe3, 0x39, 0xcb, 0x5e, 0x40,

    /* U+0059 "Y" */
    0xcd, 0x27, 0x9e, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+005A "Z" */
    0xf8, 0xc4, 0x63, 0x31, 0x88, 0xc7, 0xc0,

    /* U+005B "[" */
    0xfc, 0xcc, 0xcc, 0xcc, 0xcf,

    /* U+005C "\\" */
    0x44, 0x46, 0x66, 0x22, 0x33,

    /* U+005D "]" */
    0xf3, 0x33, 0x33, 0x33, 0x3f,

    /* U+005E "^" */
    0x23, 0x94, 0xa0,

    /* U+005F "_" */
    0xfc,

    /* U+0060 "`" */
    0xc0,

    /* U+0061 "a" */
    0x30, 0xc7, 0x1e, 0x79, 0xe5, 0xb6, 0xfb, 0x30,

    /* U+0062 "b" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x3c, 0xf3, 0xcf, 0xe0,

    /* U+0063 "c" */
    0x7b, 0x3c, 0xf0, 0xc3, 0xc, 0x33, 0xcd, 0xe0,

    /* U+0064 "d" */
    0xfb, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xe0,

    /* U+0065 "e" */
    0xfe, 0x31, 0x8f, 0xe3, 0x18, 0xc7, 0xc0,

    /* U+0066 "f" */
    0xfe, 0x31, 0x8f, 0xe3, 0x18, 0xc6, 0x0,

    /* U+0067 "g" */
    0x7b, 0x3c, 0xf0, 0xc3, 0x7c, 0xf3, 0xcd, 0xe0,

    /* U+0068 "h" */
    0xcf, 0x3c, 0xf3, 0xff, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+0069 "i" */
    0xff, 0xff, 0xf0,

    /* U+006A "j" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xf3, 0xcd, 0xe0,

    /* U+006B "k" */
    0xcf, 0x6d, 0x3c, 0xf3, 0xcd, 0xb6, 0xcf, 0x30,

    /* U+006C "l" */
    0xc6, 0x31, 0x8c, 0x63, 0x18, 0xc7, 0xc0,

    /* U+006D "m" */
    0xcf, 0xff, 0xff, 0xcf, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+006E "n" */
    0xde, 0xf7, 0xff, 0xff, 0xfb, 0xde, 0xc0,

    /* U+006F "o" */
    0x7b, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0070 "p" */
    0xfb, 0x3c, 0xf3, 0xcf, 0xec, 0x30, 0xc3, 0x0,

    /* U+0071 "q" */
    0x79, 0x9b, 0x36, 0x6c, 0xd9, 0xb3, 0x66, 0xcc,
    0xf8, 0x10,

    /* U+0072 "r" */
    0xfb, 0x3c, 0xf3, 0xfb, 0x3c, 0xf3, 0xcf, 0x30,

    /* U+0073 "s" */
    0x7b, 0x3c, 0xfb, 0xf1, 0xf1, 0xf3, 0xcd, 0xe0,

    /* U+0074 "t" */
    0xf9, 0x8c, 0x63, 0x18, 0xc6, 0x31, 0x80,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcd, 0xe0,

    /* U+0076 "v" */
    0xcf, 0x34, 0x96, 0x79, 0xe7, 0x8c, 0x30, 0xc0,

    /* U+0077 "w" */
    0xc9, 0x6c, 0x96, 0xcb, 0xe5, 0xf3, 0xf9, 0xd8,
    0xec, 0x36, 0x1b, 0x0,

    /* U+0078 "x" */
    0xca, 0xd6, 0xe3, 0x39, 0xcb, 0x5e, 0x40,

    /* U+0079 "y" */
    0xcd, 0x27, 0x9e, 0x30, 0xc3, 0xc, 0x30, 0xc0,

    /* U+007A "z" */
    0xf8, 0xc4, 0x63, 0x31, 0x88, 0xc7, 0xc0,

    /* U+007B "{" */
    0x3c, 0xc3, 0xc, 0xf0, 0xc3, 0xc, 0x30, 0xf0,

    /* U+007C "|" */
    0xff, 0xff, 0xf0,

    /* U+007D "}" */
    0xf1, 0x8c, 0x63, 0x98, 0xc6, 0x37, 0x80,

    /* U+007E "~" */
    0xdd, 0x80
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 33, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 45, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 88, .box_w = 4, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 6, .adv_w = 106, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 12, .adv_w = 84, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 19, .adv_w = 152, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 31, .adv_w = 111, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 40, .adv_w = 47, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 41, .adv_w = 73, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 46, .adv_w = 73, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 51, .adv_w = 79, .box_w = 3, .box_h = 4, .ofs_x = 1, .ofs_y = 6},
    {.bitmap_index = 53, .adv_w = 99, .box_w = 6, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 58, .adv_w = 45, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 59, .adv_w = 68, .box_w = 3, .box_h = 1, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 60, .adv_w = 45, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 61, .adv_w = 67, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 66, .adv_w = 111, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 74, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 98, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 85, .adv_w = 99, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 93, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 101, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 117, .adv_w = 99, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 125, .adv_w = 101, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 132, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 140, .adv_w = 45, .box_w = 2, .box_h = 6, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 142, .adv_w = 45, .box_w = 2, .box_h = 8, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 144, .adv_w = 95, .box_w = 5, .box_h = 6, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 148, .adv_w = 99, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 151, .adv_w = 95, .box_w = 4, .box_h = 6, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 154, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 162, .adv_w = 121, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 171, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 179, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 187, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 195, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 210, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 217, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 225, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 233, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 236, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 244, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 252, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 259, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 267, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 274, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 282, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 290, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 300, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 308, .adv_w = 98, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 323, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 331, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 339, .adv_w = 141, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 351, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 358, .adv_w = 90, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 366, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 373, .adv_w = 75, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 378, .adv_w = 67, .box_w = 4, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 383, .adv_w = 75, .box_w = 4, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 388, .adv_w = 82, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 6},
    {.bitmap_index = 391, .adv_w = 123, .box_w = 6, .box_h = 1, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 392, .adv_w = 64, .box_w = 2, .box_h = 1, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 393, .adv_w = 96, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 401, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 409, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 417, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 425, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 94, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 439, .adv_w = 101, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 106, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 455, .adv_w = 47, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 458, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 105, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 474, .adv_w = 89, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 481, .adv_w = 120, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 489, .adv_w = 104, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 102, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 504, .adv_w = 104, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 522, .adv_w = 108, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 98, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 103, .box_w = 6, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 553, .adv_w = 97, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 141, .box_w = 9, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 573, .adv_w = 90, .box_w = 5, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 90, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 588, .adv_w = 93, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 595, .adv_w = 91, .box_w = 6, .box_h = 10, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 603, .adv_w = 44, .box_w = 2, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 606, .adv_w = 91, .box_w = 5, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 613, .adv_w = 106, .box_w = 5, .box_h = 2, .ofs_x = 1, .ofs_y = 4}
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
    0, 0, 0, 0, 0, 0, 2, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 2, 0, 2, 0,
    0, 0, 5, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, -4, 0, -13, -7, 0, 1,
    0, -2, 0, 0, -4, 0, -2, 0,
    -9, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -3, 1, -5, -3, -9, -4,
    -2, -4, 0, -11, -4, 0, -3, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, -4, -7, -4, 0,
    0, -13, -2, 0, 0, 0, 0, 0,
    -3, 0, 0, -9, 0, 0, -2, -11,
    0, -7, -7, -4, -9, -4, -7, 0,
    0, -3, -9, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, -4, -4, 0,
    0, 0, -4, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, 0, -36, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -9, -36, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, -7, 0, -2,
    0, 0, 0, 0, 2, -2, 0, 0,
    0, -2, -4, -7, 0, -9, -9, 0,
    -11, 0, -9, 0, 0, 2, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    -11, 0, -4, -4, -7, -9, -9, -4,
    0, 0, -7, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -2, 0, 0, 0, 0, 0, -7,
    0, -2, 0, 0, 0, -20, 2, -2,
    0, 0, 0, -2, -4, -7, 0, -9,
    -9, 0, -11, 0, -9, 0, 0, 2,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, 0, 0, -11, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, -11, -11, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, -3,
    0, -4, -4, -2, -3, 0, -4, 0,
    0, 0, -7, -2, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, -4, 0, 0,
    0, 0, 0, 0, 0, 0, -4, -4,
    -3, -4, -2, -4, 0, 0, -4, 0,
    -3, 0, 0, 0, 0, 0, 0, -11,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, -4,
    0, 0, -13, -20, -7, -20, 0, -4,
    -4, -4, -18, 0, -4, 0, -4, -4,
    -9, 0, 0, 0, -12, -4, 0, -20,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, -20, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -9, 0, -1, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    -2, 0, -4, -4, -4, -5, 0, -4,
    0, 0, -4, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, -2,
    -2, -2, -4, 0, -2, 0, 0, -4,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, 0, -7,
    0, -4, -4, -4, 0, -2, -4, 0,
    0, -4, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, -4, -9, 0, -9, -9,
    -9, 0, -9, -9, 0, 0, -7, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -9, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 2, -11, 0, 0, -2,
    -4, -11, -9, 0, -11, 0, -5, -5,
    0, -4, -4, -2, -7, -11, -4, -5,
    0, -9, -2, -16, 0, -4, 1, -5,
    0, -5, -4, -11, -3, -13, -13, -4,
    -10, -2, -13, -9, 0, 0, -5, -4,
    0, 0, 0, 0, 0, -2, 0, 0,
    -4, 0, -4, 0, 0, 0, 0, -2,
    0, 0, -2, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, 0,
    -4, 0, -4, -4, -4, -7, 0, -4,
    0, -16, -4, 0, -4, 0, 0, 0,
    0, 0, -4, 0, 0, -4, 0, -4,
    -7, -5, 0, 0, 0, 0, 0, -2,
    0, -5, 0, 0, 0, 0, -4, -5,
    0, 0, 0, -5, 0, -4, -1, -4,
    -4, -5, -5, -4, -4, 0, -18, -7,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -2, -13, 0, 0, 0, -4, -2, 0,
    0, 0, 0, -2, -4, 0, -20, 0,
    -4, -1, 0, 0, 0, 0, -5, -1,
    0, 0, 0, 0, -2, -8, -5, 0,
    0, 2, 0, 0, 0, 0, 0, -7,
    0, -7, -11, -8, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    -13, -8, 0, 0, 2, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -22, -13, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -4, 0, -4, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, -4,
    -4, 0, 0, 0, -4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -4, 0, 0, 0, 0, 0, -9, -4,
    0, -11, 0, 2, -11, 2, 0, -9,
    0, 0, 0, -4, -7, 0, -9, -9,
    0, 0, 0, 0, 0, -9, -2, -7,
    0, -7, -9, -3, 0, -3, -3, -2,
    -2, 0, -3, -13, 0, 0, -7, -2,
    -9, 0, 0, 0, -4, 0, -31, -22,
    0, -20, 0, 0, -3, 0, -4, -4,
    -4, -7, -13, -7, -4, 0, 0, 0,
    -16, 0, -3, 0, -7, 0, -3, -6,
    -22, -4, -13, -13, -2, -18, -4, -13,
    0, 0, 0, -7, -2, 0, 0, 0,
    0, -2, -2, -4, 0, -13, 0, -13,
    0, -2, 0, 0, 0, 0, 0, -4,
    -2, -2, 0, 0, 0, 0, -11, -2,
    0, -27, 0, -2, 0, -2, 0, -2,
    -2, -7, -4, -4, -2, 0, -27, -11,
    -27, -7, 0, 0, 0, 0, 0, -4,
    0, 0, -4, 0, -13, -7, 0, 1,
    0, -2, 0, 0, -4, 0, -2, 0,
    -9, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -3, 0, -5, -3, -9, -4,
    -2, -4, 0, -11, -4, 0, -3, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, -7, 0, -1, 0, -7, 0, 0,
    0, -1, 0, -4, 0, -1, -1, -4,
    0, -4, -4, -2, -7, 0, -4, 0,
    0, 0, -4, -2, 0, 0, 0, 0,
    0, -4, 0, 0, -7, 0, -7, -7,
    0, 0, 0, 0, 0, 0, -4, 0,
    0, 0, -4, 0, 0, -4, 0, 0,
    -4, 0, 0, -2, -1, 0, -4, -4,
    -4, -4, 0, -4, 0, 0, -4, -4,
    -4, 0, 0, 0, 0, -2, 0, 0,
    0, -7, -11, -9, -13, -5, 0, 0,
    -9, 0, -2, 0, -2, -5, -7, -7,
    0, 0, -10, -5, 0, -20, 4, -5,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, -20, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -2, 0, 0, 0, 0, 0,
    -4, 0, -2, 0, 0, 0, 0, -4,
    0, 0, 0, -11, -9, -11, -18, -4,
    -4, 0, -9, 0, -4, 0, -6, -2,
    0, -9, -4, 0, -9, -4, 0, -16,
    0, -4, -3, 0, 0, -2, -2, 0,
    0, 0, -2, 0, 0, -9, -16, 0,
    2, 0, 0, 0, -4, 0, -4, 0,
    0, -11, 0, 0, -7, -4, -4, -9,
    0, -6, 0, -4, -4, 0, -9, -2,
    -4, -5, -7, 0, -7, 0, -7, -7,
    0, -2, 0, 0, 0, 0, 0, 0,
    0, 0, -5, -7, 0, 0, 0, 0,
    0, -4, 0, -4, 0, -11, -11, -11,
    -18, -7, -7, -4, -16, 0, -5, 0,
    -6, -4, -13, 0, 0, -4, -13, -7,
    0, -25, 0, -7, -4, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, -13,
    -25, 0, 0, 0, 0, 0, -2, 0,
    0, 0, 0, -9, 0, -7, -4, 0,
    -2, -9, 0, 0, 0, 0, -4, 0,
    -11, -2, 0, -2, -4, 0, -8, 0,
    -4, 0, 0, 0, 0, 0, 0, 2,
    -2, 0, 0, 0, -2, -8, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, -43, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -7, -43, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, 0, 0, 0, 0, -11, 0,
    0, 0, -11, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 2, -11, 0, 0, -2, -4, -11,
    -9, 0, -11, 0, -5, -5, 0, -4,
    -4, -2, -7, -11, -4, -5, 0, -9,
    -2, -16, 0, -4, 1, -5, 0, -5,
    -4, -11, -3, -14, -14, -4, -10, -2,
    -14, -9, 0, 0, -5, -4, 0, 0,
    0, 0, -2, -2, -4, 0, -13, 0,
    -13, 0, -2, 0, 0, 0, 0, 0,
    -4, -2, -2, 0, 0, 0, 0, -13,
    -2, 0, -27, 0, -2, 0, -2, 0,
    -2, -2, -7, -4, -4, -2, 0, -27,
    -11, -27, -7, 0, 0, 0, 0, -2,
    0, 0, 0, -7, -11, -9, -13, -2,
    0, 0, -9, 0, -2, 0, -2, -2,
    -7, -7, 0, 0, -8, -2, 0, -20,
    4, -4, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, -20, 0,
    0, 0, 0, 0, -4, 0, -4, 0,
    -11, -11, -11, -18, -7, -7, -4, -16,
    0, -5, 0, -6, -4, -13, 0, 0,
    -4, -13, -7, 0, -25, 0, -7, -4,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, -13, -25, 0
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
const lv_font_t ui_font_Font_14 = {
#else
lv_font_t ui_font_Font_14 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 14,          /*The maximum line height required by the font*/
    .base_line = 2,             /*Baseline measured from the bottom of the line*/
#if !(LVGL_VERSION_MAJOR == 6 && LVGL_VERSION_MINOR == 0)
    .subpx = LV_FONT_SUBPX_NONE,
#endif
#if LV_VERSION_CHECK(7, 4, 0) || LVGL_VERSION_MAJOR >= 8
    .underline_position = -1,
    .underline_thickness = 1,
#endif
    .dsc = &font_dsc,          /*The custom font data. Will be accessed by `get_glyph_bitmap/dsc` */
#if LV_VERSION_CHECK(8, 2, 0) || LVGL_VERSION_MAJOR >= 9
    .fallback = NULL,
#endif
    .user_data = NULL,
};



#endif /*#if UI_FONT_FONT_14*/

