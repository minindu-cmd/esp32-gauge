/*******************************************************************************
 * Size: 16 px
 * Bpp: 1
 * Opts: --bpp 1 --size 16 --font /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/Staatliches-Regular.ttf -o /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/ui_font_Font_16.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT_16
#define UI_FONT_FONT_16 1
#endif

#if UI_FONT_FONT_16

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0x3c,

    /* U+0022 "\"" */
    0xde, 0xf6,

    /* U+0023 "#" */
    0x6d, 0xff, 0xfb, 0x6f, 0xff, 0xdb, 0x0,

    /* U+0024 "$" */
    0x33, 0xf3, 0x9e, 0x38, 0xf9, 0xcb, 0xcc,

    /* U+0025 "%" */
    0x61, 0x9e, 0x23, 0xcc, 0x79, 0xf, 0x40, 0xc8,
    0x2, 0x70, 0x9f, 0x13, 0x64, 0x6d, 0x7, 0x0,

    /* U+0026 "&" */
    0x78, 0xf8, 0xc0, 0xc0, 0xff, 0xff, 0xcc, 0xcc,
    0xcc, 0xfc, 0x7c,

    /* U+0027 "'" */
    0xfc,

    /* U+0028 "(" */
    0x7f, 0xcc, 0xcc, 0xcc, 0xcf, 0x70,

    /* U+0029 ")" */
    0xef, 0x33, 0x33, 0x33, 0x3f, 0xe0,

    /* U+002A "*" */
    0x23, 0x9c, 0x40,

    /* U+002B "+" */
    0x30, 0xcf, 0xff, 0x30, 0xc3, 0x0,

    /* U+002C "," */
    0xf6,

    /* U+002D "-" */
    0xfc,

    /* U+002E "." */
    0xf0,

    /* U+002F "/" */
    0x33, 0x33, 0x26, 0x66, 0x66, 0x40,

    /* U+0030 "0" */
    0x39, 0xff, 0x1e, 0x3c, 0x78, 0xf1, 0xe3, 0xc7,
    0xfc, 0xe0,

    /* U+0031 "1" */
    0xff, 0xff, 0xfc,

    /* U+0032 "2" */
    0x7b, 0xfc, 0xf3, 0x1c, 0x63, 0x1c, 0xe3, 0xff,
    0xc0,

    /* U+0033 "3" */
    0x7b, 0xfc, 0xf3, 0x3c, 0xe0, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0034 "4" */
    0x18, 0x70, 0xe3, 0xc7, 0x8b, 0x36, 0x7f, 0xfe,
    0x30, 0x60,

    /* U+0035 "5" */
    0xff, 0xfc, 0x30, 0xfb, 0xf0, 0xc3, 0xcf, 0xf7,
    0x80,

    /* U+0036 "6" */
    0x7b, 0xfc, 0xf3, 0xfb, 0xfc, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0037 "7" */
    0xff, 0xf0, 0xc3, 0x18, 0x61, 0x8c, 0x30, 0xc6,
    0x0,

    /* U+0038 "8" */
    0x7b, 0xfc, 0xf3, 0xff, 0xfc, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0039 "9" */
    0x7b, 0xfc, 0xf3, 0xcf, 0xf7, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+003A ":" */
    0xf0, 0x3c,

    /* U+003B ";" */
    0xf0, 0x3d, 0x80,

    /* U+003C "<" */
    0x8, 0x67, 0x38, 0x70, 0x60, 0xc0,

    /* U+003D "=" */
    0xff, 0xff, 0xff,

    /* U+003E ">" */
    0xc7, 0xc, 0x33, 0x72, 0x0,

    /* U+003F "?" */
    0x7b, 0xfc, 0xf3, 0x1c, 0xe3, 0xc, 0x0, 0xc3,
    0x0,

    /* U+0040 "@" */
    0x7c, 0xfe, 0xc6, 0xde, 0xde, 0xde, 0xde, 0xcc,
    0xc0, 0xff, 0x7f,

    /* U+0041 "A" */
    0x38, 0xe3, 0x9e, 0x69, 0xb6, 0xdb, 0x7f, 0xfc,
    0xc0,

    /* U+0042 "B" */
    0xfb, 0xfc, 0xf3, 0xfb, 0xec, 0xf3, 0xcf, 0xef,
    0x0,

    /* U+0043 "C" */
    0x7b, 0xfc, 0xf3, 0xc3, 0xc, 0x33, 0xcf, 0xf7,
    0x80,

    /* U+0044 "D" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xef,
    0x0,

    /* U+0045 "E" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30, 0xc3, 0xff,
    0xc0,

    /* U+0046 "F" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30, 0xc3, 0xc,
    0x0,

    /* U+0047 "G" */
    0x7b, 0xfc, 0xf3, 0xc3, 0x7d, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0048 "H" */
    0xcf, 0x3c, 0xf3, 0xff, 0xfc, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0049 "I" */
    0xff, 0xff, 0xfc,

    /* U+004A "J" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+004B "K" */
    0xcd, 0x9b, 0x67, 0x8f, 0x1e, 0x36, 0x6c, 0xcd,
    0x9b, 0x38,

    /* U+004C "L" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xff,
    0xc0,

    /* U+004D "M" */
    0xc7, 0xdf, 0xff, 0xfd, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+004E "N" */
    0xcf, 0x3e, 0xfb, 0xef, 0xfd, 0xf7, 0xdf, 0x3c,
    0xc0,

    /* U+004F "O" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0050 "P" */
    0xfb, 0xfc, 0xf3, 0xcf, 0xef, 0xb0, 0xc3, 0xc,
    0x0,

    /* U+0051 "Q" */
    0x79, 0xfb, 0x36, 0x6c, 0xd9, 0xb3, 0x66, 0xcd,
    0xf9, 0xf8, 0x20,

    /* U+0052 "R" */
    0xfb, 0xfc, 0xf3, 0xff, 0xec, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0053 "S" */
    0x7b, 0xfc, 0xf3, 0xe1, 0xe1, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0054 "T" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+0055 "U" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0056 "V" */
    0xc7, 0x99, 0xb3, 0x66, 0xcd, 0x9a, 0x1c, 0x38,
    0x70, 0xe0,

    /* U+0057 "W" */
    0xcc, 0xf3, 0x34, 0xd9, 0xb6, 0x7d, 0x9f, 0xe7,
    0xf9, 0xfc, 0x37, 0xc, 0xc3, 0x30,

    /* U+0058 "X" */
    0xcd, 0x36, 0x9e, 0x38, 0xc3, 0x9e, 0x69, 0x3c,
    0xc0,

    /* U+0059 "Y" */
    0xcf, 0x34, 0x9e, 0x78, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+005A "Z" */
    0xff, 0xf0, 0xc6, 0x38, 0xc7, 0x18, 0xc3, 0xff,
    0xc0,

    /* U+005B "[" */
    0xff, 0xcc, 0xcc, 0xcc, 0xcf, 0xf0,

    /* U+005C "\\" */
    0x46, 0x66, 0x62, 0x23, 0x33, 0x30,

    /* U+005D "]" */
    0xff, 0xc6, 0x31, 0x8c, 0x63, 0x1f, 0xfe,

    /* U+005E "^" */
    0x21, 0x9f, 0x90,

    /* U+005F "_" */
    0xff, 0xfc,

    /* U+0060 "`" */
    0xd9, 0x80,

    /* U+0061 "a" */
    0x38, 0xe3, 0x9e, 0x69, 0xb6, 0xdb, 0x7f, 0xfc,
    0xc0,

    /* U+0062 "b" */
    0xfb, 0xfc, 0xf3, 0xfb, 0xec, 0xf3, 0xcf, 0xef,
    0x0,

    /* U+0063 "c" */
    0x7b, 0xfc, 0xf3, 0xc3, 0xc, 0x33, 0xcf, 0xf7,
    0x80,

    /* U+0064 "d" */
    0xfb, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xef,
    0x0,

    /* U+0065 "e" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30, 0xc3, 0xff,
    0xc0,

    /* U+0066 "f" */
    0xff, 0xfc, 0x30, 0xff, 0xfc, 0x30, 0xc3, 0xc,
    0x0,

    /* U+0067 "g" */
    0x7b, 0xfc, 0xf3, 0xc3, 0x7d, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0068 "h" */
    0xcf, 0x3c, 0xf3, 0xff, 0xfc, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0069 "i" */
    0xff, 0xff, 0xfc,

    /* U+006A "j" */
    0xc, 0x30, 0xc3, 0xc, 0x30, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+006B "k" */
    0xcd, 0x9b, 0x67, 0x8f, 0x1e, 0x36, 0x6c, 0xcd,
    0x9b, 0x38,

    /* U+006C "l" */
    0xc3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3, 0xff,
    0xc0,

    /* U+006D "m" */
    0xc7, 0xdf, 0xff, 0xfd, 0x78, 0xf1, 0xe3, 0xc7,
    0x8f, 0x18,

    /* U+006E "n" */
    0xcf, 0x3e, 0xfb, 0xef, 0xfd, 0xf7, 0xdf, 0x3c,
    0xc0,

    /* U+006F "o" */
    0x7b, 0xfc, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0070 "p" */
    0xfb, 0xfc, 0xf3, 0xcf, 0xef, 0xb0, 0xc3, 0xc,
    0x0,

    /* U+0071 "q" */
    0x79, 0xfb, 0x36, 0x6c, 0xd9, 0xb3, 0x66, 0xcd,
    0xf9, 0xf8, 0x20,

    /* U+0072 "r" */
    0xfb, 0xfc, 0xf3, 0xff, 0xec, 0xf3, 0xcf, 0x3c,
    0xc0,

    /* U+0073 "s" */
    0x7b, 0xfc, 0xf3, 0xe1, 0xe1, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0074 "t" */
    0xff, 0xf3, 0xc, 0x30, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+0075 "u" */
    0xcf, 0x3c, 0xf3, 0xcf, 0x3c, 0xf3, 0xcf, 0xf7,
    0x80,

    /* U+0076 "v" */
    0xc7, 0x99, 0xb3, 0x66, 0xcd, 0x9a, 0x1c, 0x38,
    0x70, 0xe0,

    /* U+0077 "w" */
    0xcc, 0xf3, 0x34, 0xd9, 0xb6, 0x7d, 0x9f, 0xe7,
    0xf9, 0xfc, 0x37, 0xc, 0xc3, 0x30,

    /* U+0078 "x" */
    0xcd, 0x36, 0x9e, 0x38, 0xc3, 0x9e, 0x69, 0x3c,
    0xc0,

    /* U+0079 "y" */
    0xcf, 0x34, 0x9e, 0x78, 0xc3, 0xc, 0x30, 0xc3,
    0x0,

    /* U+007A "z" */
    0xff, 0xf0, 0xc6, 0x38, 0xc7, 0x18, 0xc3, 0xff,
    0xc0,

    /* U+007B "{" */
    0x3c, 0xf3, 0xc, 0xf3, 0xc3, 0xc, 0x30, 0xf3,
    0xc0,

    /* U+007C "|" */
    0xff, 0xff, 0xfc,

    /* U+007D "}" */
    0xf9, 0xf0, 0x60, 0xc1, 0x83, 0xc7, 0x8c, 0x19,
    0xf3, 0xe0,

    /* U+007E "~" */
    0xff, 0xe0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 38, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 52, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 4, .adv_w = 100, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 6, .adv_w = 121, .box_w = 7, .box_h = 7, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 13, .adv_w = 96, .box_w = 5, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 20, .adv_w = 174, .box_w = 11, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 36, .adv_w = 127, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 47, .adv_w = 54, .box_w = 2, .box_h = 3, .ofs_x = 1, .ofs_y = 8},
    {.bitmap_index = 48, .adv_w = 83, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 54, .adv_w = 83, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 60, .adv_w = 90, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 63, .adv_w = 113, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 69, .adv_w = 52, .box_w = 2, .box_h = 4, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 70, .adv_w = 78, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 71, .adv_w = 52, .box_w = 2, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 72, .adv_w = 77, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 78, .adv_w = 127, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 88, .adv_w = 54, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 91, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 100, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 109, .adv_w = 115, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 119, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 128, .adv_w = 116, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 113, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 146, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 155, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 164, .adv_w = 52, .box_w = 2, .box_h = 7, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 166, .adv_w = 52, .box_w = 2, .box_h = 9, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 169, .adv_w = 109, .box_w = 6, .box_h = 7, .ofs_x = 0, .ofs_y = 2},
    {.bitmap_index = 175, .adv_w = 113, .box_w = 6, .box_h = 4, .ofs_x = 1, .ofs_y = 4},
    {.bitmap_index = 178, .adv_w = 109, .box_w = 5, .box_h = 7, .ofs_x = 1, .ofs_y = 2},
    {.bitmap_index = 183, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 192, .adv_w = 138, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 203, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 212, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 221, .adv_w = 116, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 230, .adv_w = 121, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 239, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 248, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 257, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 266, .adv_w = 122, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 275, .adv_w = 54, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 278, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 287, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 297, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 306, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 316, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 325, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 334, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 343, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 354, .adv_w = 123, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 363, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 372, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 381, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 390, .adv_w = 111, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 400, .adv_w = 161, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 414, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 423, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 432, .adv_w = 106, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 441, .adv_w = 86, .box_w = 4, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 447, .adv_w = 77, .box_w = 4, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 453, .adv_w = 86, .box_w = 5, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 460, .adv_w = 94, .box_w = 5, .box_h = 4, .ofs_x = 0, .ofs_y = 7},
    {.bitmap_index = 463, .adv_w = 140, .box_w = 7, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 465, .adv_w = 73, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 467, .adv_w = 109, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 476, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 485, .adv_w = 116, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 494, .adv_w = 121, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 503, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 512, .adv_w = 108, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 521, .adv_w = 115, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 530, .adv_w = 122, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 539, .adv_w = 54, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 542, .adv_w = 111, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 551, .adv_w = 120, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 561, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 570, .adv_w = 137, .box_w = 7, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 580, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 589, .adv_w = 117, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 598, .adv_w = 119, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 607, .adv_w = 119, .box_w = 7, .box_h = 12, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 618, .adv_w = 123, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 627, .adv_w = 112, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 636, .adv_w = 102, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 645, .adv_w = 118, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 654, .adv_w = 111, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 664, .adv_w = 161, .box_w = 10, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 678, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 687, .adv_w = 103, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 696, .adv_w = 106, .box_w = 6, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 705, .adv_w = 104, .box_w = 6, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 714, .adv_w = 51, .box_w = 2, .box_h = 11, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 717, .adv_w = 104, .box_w = 7, .box_h = 11, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 727, .adv_w = 122, .box_w = 6, .box_h = 2, .ofs_x = 1, .ofs_y = 5}
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
    0, 6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 3, 0, 3, 0,
    0, 0, 6, 0, 3, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -9, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -9,
    0, 0, 0, 0, 0, 0, 0, -5,
    0, 0, -5, 0, -15, -8, 0, 1,
    0, -3, 0, 0, -5, 0, -3, 0,
    -10, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -3, 2, -5, -3, -10, -4,
    -3, -5, 0, -13, -5, 0, -4, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, -5, -8, -5, 0,
    0, -15, -3, 0, 0, 0, 0, 0,
    -4, 0, 0, -10, 0, 0, -3, -13,
    0, -8, -8, -5, -10, -5, -8, 0,
    0, -4, -10, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, -5, -5, 0,
    0, 0, -5, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, 0, -41, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -10, -41, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -26, 0, 0, 0, 0, 0, 0, -5,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, -8, 0, -3,
    0, 0, 0, 0, 3, -3, 0, 0,
    0, -3, -5, -8, 0, -10, -10, 0,
    -13, 0, -10, 0, 0, 3, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -15, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    -13, 0, -5, -5, -8, -10, -10, -5,
    0, 0, -8, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -3, 0, 0, 0, 0, 0, -8,
    0, -3, 0, 0, 0, -23, 3, -3,
    0, 0, 0, -3, -5, -8, 0, -10,
    -10, 0, -13, 0, -10, 0, 0, 3,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, -13, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, -13, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, -3,
    0, -5, -5, -3, -4, 0, -5, 0,
    0, 0, -8, -3, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, -5, 0, 0,
    0, 0, 0, 0, 0, 0, -5, -5,
    -4, -4, -3, -5, 0, 0, -5, 0,
    -4, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -3, 0, 0, 0, -5,
    0, 0, -15, -23, -8, -23, 0, -5,
    -4, -5, -20, 0, -5, 0, -5, -5,
    -10, 0, 0, 0, -14, -5, 0, -23,
    0, -5, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, -23, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -10, 0, -1, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    -3, 0, -5, -5, -5, -5, 0, -5,
    0, 0, -5, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, -3,
    -3, -3, -4, 0, -3, 0, 0, -5,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -13, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, -10,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, 0, -8,
    0, -5, -5, -5, 0, -3, -5, 0,
    0, -5, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, -5, -10, 0, -10, -10,
    -10, 0, -10, -10, 0, 0, -8, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -10, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 3, -13, 0, 0, -2,
    -5, -13, -10, 0, -13, 0, -6, -5,
    0, -5, -5, -3, -8, -13, -5, -5,
    0, -10, -3, -18, 1, -5, 1, -6,
    0, -5, -5, -12, -3, -15, -15, -5,
    -11, -3, -15, -10, 0, 1, -6, -5,
    0, 0, 0, 0, 0, -3, 0, 0,
    -5, 0, -5, 0, 0, 0, 0, -3,
    0, 0, -3, 0, 0, 0, 0, 0,
    0, -5, 0, 0, 0, 0, 0, 0,
    -5, 0, -5, -5, -5, -8, 0, -5,
    0, -18, -5, 0, -5, 0, 0, 0,
    0, 0, -5, 0, 0, -5, 0, -5,
    -8, -6, 0, 0, 0, 0, 0, -3,
    0, -6, 0, 0, 0, 0, -5, -6,
    0, 0, 0, -6, 0, -5, -1, -5,
    -5, -6, -6, -5, -5, 0, -20, -8,
    0, -6, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -4, 0,
    -3, -15, 0, 0, 0, -5, -3, 0,
    0, 0, 0, -3, -4, 0, -23, 0,
    -4, -2, 0, 0, 0, 0, -5, -1,
    0, 0, 0, 0, -3, -9, -5, 0,
    0, 3, 0, 0, 0, 0, 0, -8,
    0, -8, -13, -9, 0, 0, 0, 0,
    0, 0, 0, -9, 0, 0, 0, 0,
    -15, -9, 0, 0, 3, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -26, -15, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -5, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -5, 0,
    -5, 0, -5, 0, 0, 0, 0, 0,
    0, 0, -5, 0, 0, 0, 0, -5,
    -5, 0, 0, 0, -5, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -5, 0, 0, 0, 0, 0, -10, -5,
    0, -13, 0, 3, -13, 3, 0, -10,
    0, 0, 0, -5, -8, 0, -10, -10,
    0, 0, 0, 0, 0, -10, -3, -8,
    0, -8, -10, -4, 0, -3, -3, -3,
    -3, 0, -3, -15, 0, 0, -8, -3,
    -10, 0, 0, 0, -5, 0, -36, -26,
    0, -23, 0, 0, -4, 0, -5, -5,
    -5, -8, -15, -8, -5, 0, 0, 0,
    -18, 0, -4, 0, -8, 0, -4, -6,
    -26, -5, -15, -15, -3, -21, -5, -15,
    0, 0, 0, -8, -3, 0, 0, 0,
    0, -3, -3, -5, 0, -15, 0, -15,
    0, -3, 0, 0, 0, 0, 0, -5,
    -3, -3, 0, 0, 0, 0, -13, -3,
    0, -31, 0, -3, 0, -3, 0, -2,
    -2, -8, -5, -5, -2, 0, -31, -13,
    -31, -8, 0, 0, 0, 0, 0, -5,
    0, 0, -5, 0, -15, -8, 0, 1,
    0, -3, 0, 0, -5, 0, -3, 0,
    -10, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -3, 0, -5, -3, -10, -4,
    -3, -5, 0, -13, -5, 0, -4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -1, 0, 0, 0, 0,
    0, -8, 0, -1, 0, -8, 0, 0,
    0, -1, 0, -5, 0, -1, -1, -5,
    0, -5, -5, -3, -8, 0, -5, 0,
    0, 0, -5, -3, 0, 0, 0, 0,
    0, -5, 0, 0, -8, 0, -8, -8,
    0, 0, 0, 0, 0, 0, -5, 0,
    0, 0, -5, 0, 0, -5, 0, 0,
    -5, 0, 0, -3, -1, 0, -5, -5,
    -5, -5, 0, -5, 0, 0, -5, -5,
    -5, 0, 0, 0, 0, -3, 0, 0,
    0, -8, -13, -10, -15, -6, 0, 0,
    -10, 0, -3, 0, -3, -6, -8, -8,
    0, 0, -12, -6, 0, -23, 5, -6,
    -1, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, -23, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -3, 0, 0, 0, 0, 0,
    -4, 0, -3, 0, 0, 0, 0, -5,
    0, 0, 0, -13, -10, -13, -20, -5,
    -5, 0, -10, 0, -5, 0, -6, -3,
    0, -10, -5, 0, -11, -5, 0, -18,
    0, -5, -3, 0, 0, -3, -3, 0,
    0, 0, -3, 0, 0, -11, -18, 0,
    3, 0, 0, 0, -5, 0, -5, 0,
    0, -13, 0, 0, -8, -5, -5, -10,
    0, -6, 0, -5, -5, 0, -10, -3,
    -5, -6, -8, 0, -8, 0, -8, -8,
    0, -3, 0, 0, 0, 0, 0, 0,
    0, 0, -6, -8, 0, 0, 0, 0,
    0, -5, 0, -5, 0, -13, -13, -13,
    -20, -8, -8, -5, -18, 0, -6, 0,
    -7, -4, -15, 0, 0, -5, -14, -8,
    0, -28, 0, -8, -5, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, -14,
    -28, 0, 0, 0, 0, 0, -3, 0,
    0, 0, 0, -10, 0, -8, -5, 0,
    -3, -10, 0, 0, 0, 0, -5, 0,
    -13, -3, 0, -3, -5, 0, -9, 0,
    -5, -1, 0, 0, 0, 0, 0, 2,
    -3, 0, 0, 0, -3, -9, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, -49, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -8, -49, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, 0, 0, 0, 0, 0,
    -13, 0, 0, 0, 0, 0, -13, 0,
    0, 0, -13, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 3, -13, 0, 0, -2, -5, -13,
    -10, 0, -13, 0, -6, -5, 0, -5,
    -5, -3, -8, -13, -5, -5, 0, -10,
    -3, -18, 1, -5, 1, -6, 0, -5,
    -5, -12, -3, -16, -16, -5, -11, -3,
    -16, -10, 0, 1, -6, -5, 0, 0,
    0, 0, -3, -3, -5, 0, -15, 0,
    -15, 0, -3, 0, 0, 0, 0, 0,
    -5, -3, -3, 0, 0, 0, 0, -15,
    -3, 0, -31, 0, -3, 0, -3, 0,
    -2, -2, -8, -5, -5, -2, 0, -31,
    -13, -31, -8, 0, 0, 0, 0, -3,
    0, 0, 0, -8, -13, -10, -15, -3,
    0, 0, -10, 0, -3, 0, -3, -3,
    -8, -8, 0, 0, -9, -3, 0, -23,
    5, -5, -1, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -9, -23, 0,
    0, 0, 0, 0, -5, 0, -5, 0,
    -13, -13, -13, -20, -8, -8, -5, -18,
    0, -6, 0, -7, -4, -15, 0, 0,
    -5, -15, -8, 0, -28, 0, -8, -5,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, -15, -28, 0
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
const lv_font_t ui_font_Font_16 = {
#else
lv_font_t ui_font_Font_16 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 17,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_FONT_16*/

