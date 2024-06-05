/*******************************************************************************
 * Size: 22 px
 * Bpp: 1
 * Opts: --bpp 1 --size 22 --font /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/Staatliches-Regular.ttf -o /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/ui_font_Font_22.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT_22
#define UI_FONT_FONT_22 1
#endif

#if UI_FONT_FONT_22

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0x80, 0x3f,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xe0,

    /* U+0023 "#" */
    0x33, 0x19, 0xbf, 0xff, 0xf3, 0x31, 0x98, 0xcd,
    0xff, 0xff, 0x99, 0x8c, 0xc0,

    /* U+0024 "$" */
    0x18, 0x79, 0x3e, 0x3c, 0x7c, 0xfc, 0x7e, 0x7c,
    0x7c, 0x3e, 0x3c, 0x6c, 0x8f, 0xc,

    /* U+0025 "%" */
    0x78, 0x73, 0xf1, 0xcc, 0xce, 0x33, 0x38, 0xcd,
    0xc3, 0x37, 0xf, 0xf8, 0x1e, 0xe0, 0x7, 0x0,
    0x1d, 0xe0, 0xef, 0xc3, 0x33, 0x1c, 0xcc, 0x63,
    0x33, 0x8c, 0xcc, 0x1e,

    /* U+0026 "&" */
    0x3f, 0xf, 0xe3, 0xc0, 0x70, 0xe, 0x1, 0xc0,
    0x1f, 0xfb, 0xff, 0xf3, 0x9c, 0x73, 0x8e, 0x71,
    0xce, 0x38, 0xe7, 0x1f, 0xe0, 0xfc,

    /* U+0027 "'" */
    0xff, 0xfe,

    /* U+0028 "(" */
    0x3d, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xc7, 0xcf,

    /* U+0029 ")" */
    0xe3, 0xe3, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0xff, 0xb8,

    /* U+002A "*" */
    0x32, 0xdf, 0xde, 0xfe, 0xd3, 0x0,

    /* U+002B "+" */
    0x18, 0xc, 0x6, 0x3, 0xf, 0xff, 0xfc, 0x60,
    0x30, 0x18, 0xc, 0x0,

    /* U+002C "," */
    0xfd, 0xbc,

    /* U+002D "-" */
    0xff,

    /* U+002E "." */
    0xfc,

    /* U+002F "/" */
    0x39, 0xcc, 0x63, 0x39, 0xce, 0x63, 0x19, 0xce,
    0x73, 0x18,

    /* U+0030 "0" */
    0x1e, 0x1f, 0xef, 0x3f, 0x87, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1,
    0xfc, 0xf7, 0xf8, 0x78,

    /* U+0031 "1" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+0032 "2" */
    0x3c, 0x3f, 0xbd, 0xdc, 0x7e, 0x3f, 0x3c, 0x1e,
    0x1e, 0xf, 0xf, 0xf, 0x7, 0x7, 0x87, 0x83,
    0xff, 0xff,

    /* U+0033 "3" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1c, 0x1e,
    0x1e, 0xf, 0x3, 0xc0, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x7c,

    /* U+0034 "4" */
    0x7, 0x7, 0x83, 0xc3, 0xe1, 0xf1, 0xf8, 0xfc,
    0x6e, 0x77, 0x33, 0xb9, 0xdf, 0xff, 0xf8, 0x38,
    0x1c, 0xe,

    /* U+0035 "5" */
    0xff, 0x7f, 0xb8, 0x1c, 0xe, 0x7, 0x3, 0xf9,
    0xfe, 0xe7, 0x81, 0xc0, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x7c,

    /* U+0036 "6" */
    0x3c, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x3, 0xf9,
    0xfe, 0xf7, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x3c,

    /* U+0037 "7" */
    0xff, 0xff, 0xc0, 0xe0, 0x70, 0x70, 0x38, 0x1c,
    0x1c, 0xe, 0x7, 0x7, 0x3, 0x81, 0xc1, 0xc0,
    0xe0, 0x70,

    /* U+0038 "8" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0xbd, 0xfc,
    0xfe, 0xf7, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x3c,

    /* U+0039 "9" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xef, 0x7f, 0x9f, 0xc0, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x78,

    /* U+003A ":" */
    0xfc, 0x0, 0x7, 0xe0,

    /* U+003B ";" */
    0xfc, 0x0, 0x7, 0xed, 0xe0,

    /* U+003C "<" */
    0x2, 0xf, 0x1c, 0x38, 0x70, 0x70, 0x38, 0x1e,
    0x7, 0x3,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xfc,

    /* U+003E ">" */
    0xc1, 0xe0, 0xe0, 0xe0, 0xe1, 0xc7, 0x3c, 0xe1,
    0x80,

    /* U+003F "?" */
    0x3c, 0x3f, 0xbd, 0xdc, 0x7e, 0x3f, 0x1c, 0x1e,
    0x1e, 0xe, 0xf, 0x7, 0x3, 0x80, 0x0, 0x0,
    0x70, 0x38,

    /* U+0040 "@" */
    0x3f, 0xf, 0xf3, 0xcf, 0x70, 0xef, 0xdd, 0xfb,
    0xbf, 0x77, 0xee, 0xfd, 0xdf, 0xbb, 0xbe, 0x73,
    0x8e, 0x1, 0xc0, 0x1f, 0xf9, 0xff,

    /* U+0041 "A" */
    0x1c, 0xf, 0xf, 0x87, 0xc3, 0xe1, 0xb0, 0xd8,
    0x6c, 0x77, 0x3b, 0x9d, 0xce, 0xe7, 0xf3, 0xfb,
    0x8f, 0xc7,

    /* U+0042 "B" */
    0xfe, 0x7f, 0xb9, 0xdc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xff, 0x73, 0xf8, 0xfc, 0x7e, 0x3f, 0x3b,
    0xfd, 0xf8,

    /* U+0043 "C" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x7e, 0x3f, 0xbd,
    0xfc, 0x7c,

    /* U+0044 "D" */
    0xfc, 0x7f, 0xb9, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x3b,
    0xfd, 0xf8,

    /* U+0045 "E" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0047 "G" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x3, 0x81,
    0xc0, 0xef, 0xf7, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x7c,

    /* U+0048 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xff, 0xff, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8f, 0xc7,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+004A "J" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0x81, 0xc0, 0xfc, 0x7e, 0x3f, 0x39,
    0xfc, 0x78,

    /* U+004B "K" */
    0xe3, 0xb8, 0xce, 0x73, 0xb8, 0xee, 0x3f, 0xf,
    0x83, 0xf0, 0xfc, 0x3f, 0x8e, 0xe3, 0x9c, 0xe7,
    0x38, 0xee, 0x3b, 0x86,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,

    /* U+004D "M" */
    0xf3, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x7e,
    0xdf, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1,
    0xf8, 0x7e, 0x1f, 0x87,

    /* U+004E "N" */
    0xe3, 0xf1, 0xfc, 0xfe, 0x7f, 0x3f, 0xdf, 0xef,
    0xf7, 0xff, 0xf7, 0xfb, 0xfc, 0xfe, 0x7f, 0x3f,
    0x8f, 0xc7,

    /* U+004F "O" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x3c,

    /* U+0050 "P" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xce, 0xff, 0x7f, 0x38, 0x1c, 0xe, 0x7, 0x3,
    0x81, 0xc0,

    /* U+0051 "Q" */
    0x3e, 0x1f, 0xcf, 0x7b, 0x8e, 0xe3, 0xb8, 0xee,
    0x3b, 0x8e, 0xe3, 0xb8, 0xee, 0x3b, 0x8e, 0xe3,
    0xbd, 0xe7, 0xf0, 0xff, 0x1, 0x80,

    /* U+0052 "R" */
    0xfc, 0x7f, 0xb9, 0xdc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xff, 0x73, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8f, 0xc7,

    /* U+0053 "S" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x9f, 0xe0,
    0xfc, 0x3f, 0xf, 0xc1, 0xfc, 0x7e, 0x3f, 0xb9,
    0xfc, 0x7c,

    /* U+0054 "T" */
    0xff, 0xff, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x3c,

    /* U+0056 "V" */
    0xe3, 0xf1, 0xd8, 0xec, 0x67, 0x33, 0x99, 0xdc,
    0x6e, 0x37, 0x1b, 0xf, 0x87, 0xc1, 0xe0, 0xf0,
    0x70, 0x38,

    /* U+0057 "W" */
    0xe3, 0x1f, 0x38, 0xd9, 0xce, 0xce, 0x76, 0x7b,
    0xbb, 0xdd, 0xde, 0xce, 0xf6, 0x37, 0xb1, 0xff,
    0x8f, 0x7c, 0x7b, 0xe3, 0xde, 0x1e, 0x70, 0x73,
    0x83, 0x9c,

    /* U+0058 "X" */
    0xe3, 0x33, 0x99, 0xce, 0xc3, 0x61, 0xf0, 0xf0,
    0x38, 0x3c, 0x1f, 0xf, 0x8e, 0xc7, 0x63, 0x39,
    0x9d, 0xc6,

    /* U+0059 "Y" */
    0xe3, 0xb1, 0xd8, 0xce, 0xe7, 0x71, 0xb0, 0xf8,
    0x7c, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38,

    /* U+005A "Z" */
    0xff, 0xff, 0x7, 0xe, 0xe, 0xc, 0x1c, 0x1c,
    0x38, 0x38, 0x70, 0x70, 0x60, 0xe0, 0xff, 0xff,

    /* U+005B "[" */
    0xff, 0xfe, 0x38, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8f, 0xff,

    /* U+005C "\\" */
    0xc6, 0x39, 0xce, 0x31, 0x8c, 0x73, 0x8c, 0x63,
    0x1c, 0xe7,

    /* U+005D "]" */
    0xff, 0xf1, 0xc7, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0x7f, 0xff,

    /* U+005E "^" */
    0x18, 0x30, 0xf3, 0xe6, 0x68, 0xc0,

    /* U+005F "_" */
    0xff, 0xff, 0xf0,

    /* U+0060 "`" */
    0xe6, 0x73,

    /* U+0061 "a" */
    0x1c, 0xf, 0xf, 0x87, 0xc3, 0xe1, 0xb0, 0xd8,
    0x6c, 0x77, 0x3b, 0x9d, 0xce, 0xe7, 0xf3, 0xfb,
    0x8f, 0xc7,

    /* U+0062 "b" */
    0xfe, 0x7f, 0xb9, 0xdc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xff, 0x73, 0xf8, 0xfc, 0x7e, 0x3f, 0x3b,
    0xfd, 0xf8,

    /* U+0063 "c" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x3, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x7e, 0x3f, 0xbd,
    0xfc, 0x7c,

    /* U+0064 "d" */
    0xfc, 0x7f, 0xb9, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x3b,
    0xfd, 0xf8,

    /* U+0065 "e" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,

    /* U+0066 "f" */
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,

    /* U+0067 "g" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x3, 0x81,
    0xc0, 0xef, 0xf7, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x7c,

    /* U+0068 "h" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xff, 0xff, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8f, 0xc7,

    /* U+0069 "i" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+006A "j" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0x81, 0xc0, 0xfc, 0x7e, 0x3f, 0x39,
    0xfc, 0x78,

    /* U+006B "k" */
    0xe3, 0xb8, 0xce, 0x73, 0xb8, 0xee, 0x3f, 0xf,
    0x83, 0xf0, 0xfc, 0x3f, 0x8e, 0xe3, 0x9c, 0xe7,
    0x38, 0xee, 0x3b, 0x86,

    /* U+006C "l" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,

    /* U+006D "m" */
    0xf3, 0xfc, 0xff, 0xff, 0xff, 0xff, 0xfb, 0x7e,
    0xdf, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1,
    0xf8, 0x7e, 0x1f, 0x87,

    /* U+006E "n" */
    0xe3, 0xf1, 0xfc, 0xfe, 0x7f, 0x3f, 0xdf, 0xef,
    0xf7, 0xff, 0xf7, 0xfb, 0xfc, 0xfe, 0x7f, 0x3f,
    0x8f, 0xc7,

    /* U+006F "o" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x3c,

    /* U+0070 "p" */
    0xfe, 0x7f, 0xb9, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xce, 0xff, 0x7f, 0x38, 0x1c, 0xe, 0x7, 0x3,
    0x81, 0xc0,

    /* U+0071 "q" */
    0x3e, 0x1f, 0xcf, 0x7b, 0x8e, 0xe3, 0xb8, 0xee,
    0x3b, 0x8e, 0xe3, 0xb8, 0xee, 0x3b, 0x8e, 0xe3,
    0xbd, 0xe7, 0xf0, 0xff, 0x1, 0x80,

    /* U+0072 "r" */
    0xfc, 0x7f, 0xb9, 0xdc, 0x7e, 0x3f, 0x1f, 0x9f,
    0xfe, 0xff, 0x73, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8f, 0xc7,

    /* U+0073 "s" */
    0x3e, 0x3f, 0xbd, 0xfc, 0x7e, 0x3f, 0x9f, 0xe0,
    0xfc, 0x3f, 0xf, 0xc1, 0xfc, 0x7e, 0x3f, 0xb9,
    0xfc, 0x7c,

    /* U+0074 "t" */
    0xff, 0xff, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0x3c,

    /* U+0076 "v" */
    0xe3, 0xf1, 0xd8, 0xec, 0x67, 0x33, 0x99, 0xdc,
    0x6e, 0x37, 0x1b, 0xf, 0x87, 0xc1, 0xe0, 0xf0,
    0x70, 0x38,

    /* U+0077 "w" */
    0xe3, 0x1f, 0x38, 0xd9, 0xce, 0xce, 0x76, 0x7b,
    0xbb, 0xdd, 0xde, 0xce, 0xf6, 0x37, 0xb1, 0xff,
    0x8f, 0x7c, 0x7b, 0xe3, 0xde, 0x1e, 0x70, 0x73,
    0x83, 0x9c,

    /* U+0078 "x" */
    0xe3, 0x33, 0x99, 0xce, 0xc3, 0x61, 0xf0, 0xf0,
    0x38, 0x3c, 0x1f, 0xf, 0x8e, 0xc7, 0x63, 0x39,
    0x9d, 0xc6,

    /* U+0079 "y" */
    0xe3, 0xb1, 0xd8, 0xce, 0xe7, 0x71, 0xb0, 0xf8,
    0x7c, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38,

    /* U+007A "z" */
    0xff, 0xff, 0x7, 0xe, 0xe, 0xc, 0x1c, 0x1c,
    0x38, 0x38, 0x70, 0x70, 0x60, 0xe0, 0xff, 0xff,

    /* U+007B "{" */
    0x1f, 0x8f, 0xc7, 0x3, 0x81, 0xc0, 0xe0, 0x71,
    0xf8, 0xfc, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x7e, 0x3f,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff,

    /* U+007D "}" */
    0xfc, 0xfc, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0x1f,
    0x1f, 0x1c, 0x1c, 0x1c, 0x1c, 0x1c, 0xfc, 0xfc,

    /* U+007E "~" */
    0x73, 0xff, 0xce
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 52, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 71, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 7, .adv_w = 138, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 12, .adv_w = 167, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 25, .adv_w = 132, .box_w = 7, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 39, .adv_w = 239, .box_w = 14, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 67, .adv_w = 175, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 89, .adv_w = 75, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 11},
    {.bitmap_index = 91, .adv_w = 115, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 115, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 115, .adv_w = 124, .box_w = 6, .box_h = 7, .ofs_x = 1, .ofs_y = 9},
    {.bitmap_index = 121, .adv_w = 156, .box_w = 9, .box_h = 10, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 133, .adv_w = 71, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 135, .adv_w = 107, .box_w = 4, .box_h = 2, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 136, .adv_w = 71, .box_w = 3, .box_h = 2, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 137, .adv_w = 105, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 147, .adv_w = 175, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 167, .adv_w = 74, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 173, .adv_w = 155, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 155, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 209, .adv_w = 159, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 227, .adv_w = 152, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 245, .adv_w = 160, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 263, .adv_w = 156, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 281, .adv_w = 158, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 299, .adv_w = 158, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 317, .adv_w = 71, .box_w = 3, .box_h = 9, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 321, .adv_w = 71, .box_w = 3, .box_h = 12, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 326, .adv_w = 150, .box_w = 8, .box_h = 10, .ofs_x = 0, .ofs_y = 3},
    {.bitmap_index = 336, .adv_w = 156, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 343, .adv_w = 150, .box_w = 7, .box_h = 10, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 352, .adv_w = 153, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 370, .adv_w = 190, .box_w = 11, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 392, .adv_w = 150, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 410, .adv_w = 163, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 428, .adv_w = 159, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 446, .adv_w = 166, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 464, .adv_w = 148, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 480, .adv_w = 148, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 496, .adv_w = 158, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 514, .adv_w = 167, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 532, .adv_w = 74, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 538, .adv_w = 153, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 556, .adv_w = 165, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 576, .adv_w = 140, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 592, .adv_w = 189, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 612, .adv_w = 163, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 630, .adv_w = 161, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 648, .adv_w = 161, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 666, .adv_w = 164, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 688, .adv_w = 170, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 706, .adv_w = 153, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 724, .adv_w = 141, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 742, .adv_w = 162, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 760, .adv_w = 152, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 778, .adv_w = 221, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 804, .adv_w = 142, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 822, .adv_w = 141, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 840, .adv_w = 146, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 856, .adv_w = 118, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 868, .adv_w = 106, .box_w = 5, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 878, .adv_w = 118, .box_w = 6, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 890, .adv_w = 130, .box_w = 7, .box_h = 6, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 896, .adv_w = 193, .box_w = 10, .box_h = 2, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 899, .adv_w = 100, .box_w = 4, .box_h = 4, .ofs_x = 1, .ofs_y = 17},
    {.bitmap_index = 901, .adv_w = 150, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 919, .adv_w = 163, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 937, .adv_w = 159, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 955, .adv_w = 166, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 148, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 989, .adv_w = 148, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1005, .adv_w = 158, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1023, .adv_w = 167, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1041, .adv_w = 74, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1047, .adv_w = 153, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1065, .adv_w = 165, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1085, .adv_w = 140, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1101, .adv_w = 189, .box_w = 10, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1121, .adv_w = 163, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1139, .adv_w = 161, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1157, .adv_w = 164, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1175, .adv_w = 164, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1197, .adv_w = 170, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1215, .adv_w = 153, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1233, .adv_w = 141, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1251, .adv_w = 162, .box_w = 9, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1269, .adv_w = 152, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1287, .adv_w = 221, .box_w = 13, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1313, .adv_w = 142, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1331, .adv_w = 141, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1349, .adv_w = 146, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1365, .adv_w = 143, .box_w = 9, .box_h = 16, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1383, .adv_w = 70, .box_w = 3, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1389, .adv_w = 143, .box_w = 8, .box_h = 16, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1405, .adv_w = 167, .box_w = 8, .box_h = 3, .ofs_x = 1, .ofs_y = 7}
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
    0, 0, 0, 0, 0, 0, 4, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 4, 0,
    0, 0, 8, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -12,
    0, 0, 0, 0, 0, 0, 0, -7,
    0, 0, -7, 0, -21, -11, 0, 1,
    0, -4, 0, 0, -7, 0, -4, 0,
    -14, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -5, 2, -7, -4, -14, -6,
    -4, -6, 0, -18, -6, 0, -5, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, -7, -11, -7, 0,
    0, -21, -4, 0, 0, 0, 0, 0,
    -5, 0, 0, -14, 0, 0, -4, -17,
    0, -11, -11, -7, -14, -7, -11, 0,
    0, -5, -14, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, -7, -7, 0,
    0, 0, -7, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -21, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, 0, 0, -56, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -14, -56, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -35, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, -11, 0, -4,
    0, 0, 0, 0, 4, -4, 0, 0,
    0, -4, -7, -11, 0, -14, -14, 0,
    -18, 0, -14, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -21, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    -18, 0, -7, -7, -11, -14, -14, -7,
    0, 0, -11, 0, -11, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, -11,
    0, -4, 0, 0, 0, -32, 4, -4,
    0, 0, 0, -4, -7, -11, 0, -14,
    -14, 0, -18, 0, -14, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, 0, 0, -18, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -25, -18, -18, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -11, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, 0, 0, 0, -5,
    0, -7, -7, -4, -5, 0, -7, 0,
    0, 0, -11, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, -7, 0, 0,
    0, 0, 0, 0, 0, 0, -7, -7,
    -5, -6, -4, -7, 0, 0, -7, 0,
    -5, 0, 0, 0, 0, 0, 0, -18,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -11, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, -7,
    0, 0, -21, -32, -11, -32, 0, -7,
    -6, -7, -28, 0, -7, 0, -7, -7,
    -14, 0, 0, 0, -19, -7, 0, -32,
    0, -7, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -19, -32, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -14, 0, -2, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    -4, 0, -7, -7, -7, -7, 0, -7,
    0, 0, -7, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -4, -4, -6, 0, -4, 0, 0, -7,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -18, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -11, 0, 0, 0, 0, -14,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, -11,
    0, -7, -7, -7, 0, -4, -7, 0,
    0, -7, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -11, 0, 0,
    0, 0, 0, -7, -14, 0, -14, -14,
    -14, 0, -14, -14, 0, 0, -11, 0,
    -14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -14, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, -18, 0, 0, -3,
    -7, -18, -14, 0, -18, 0, -8, -7,
    0, -7, -7, -4, -11, -18, -7, -7,
    0, -14, -4, -25, 1, -7, 1, -8,
    0, -7, -7, -17, -5, -20, -20, -7,
    -15, -4, -20, -14, 0, 1, -8, -7,
    0, 0, 0, 0, 0, -4, 0, 0,
    -7, 0, -7, 0, 0, 0, 0, -4,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, -7, 0, 0, 0, 0, 0, 0,
    -7, 0, -7, -7, -6, -11, 0, -7,
    0, -25, -7, 0, -6, 0, 0, 0,
    0, 0, -7, 0, 0, -7, 0, -7,
    -11, -8, 0, 0, 0, 0, 0, -4,
    0, -8, 0, 0, 0, 0, -7, -8,
    0, 0, 0, -8, 0, -7, -1, -7,
    -7, -8, -8, -7, -7, 0, -28, -11,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    -4, -21, 0, 0, 0, -6, -4, 0,
    0, 0, 0, -4, -6, 0, -31, 0,
    -6, -2, 0, 0, 0, 0, -7, -2,
    0, 0, 0, 0, -4, -12, -7, 0,
    0, 4, 0, 0, 0, 0, 0, -11,
    0, -11, -18, -13, 0, 0, 0, 0,
    0, 0, 0, -13, 0, 0, 0, 0,
    -21, -13, 0, 0, 4, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -35, -21, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -7, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -7, 0,
    -7, 0, -7, 0, 0, 0, 0, 0,
    0, 0, -7, 0, 0, 0, 0, -7,
    -7, 0, 0, 0, -7, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, -14, -7,
    0, -18, 0, 4, -18, 4, 0, -14,
    0, 0, 0, -7, -11, 0, -14, -14,
    0, 0, 0, 0, 0, -14, -4, -11,
    0, -11, -13, -5, 0, -5, -5, -4,
    -4, 0, -5, -21, 0, 0, -11, -4,
    -14, 0, 0, 0, -7, 0, -49, -35,
    0, -32, 0, 0, -5, 0, -7, -7,
    -7, -11, -21, -11, -7, 0, 0, 0,
    -25, 0, -5, 0, -11, 0, -5, -9,
    -35, -7, -21, -21, -4, -29, -7, -21,
    0, 0, 0, -11, -4, 0, 0, 0,
    0, -4, -4, -7, 0, -21, 0, -21,
    0, -4, 0, 0, 0, 0, 0, -7,
    -4, -4, 0, 0, 0, 0, -18, -4,
    0, -42, 0, -4, 0, -4, 0, -3,
    -3, -11, -7, -7, -3, 0, -42, -18,
    -42, -11, 0, 0, 0, 0, 0, -7,
    0, 0, -7, 0, -21, -11, 0, 1,
    0, -4, 0, 0, -7, 0, -4, 0,
    -14, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -5, 0, -7, -4, -14, -6,
    -4, -6, 0, -18, -6, 0, -5, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, -11, 0, -2, 0, -11, 0, 0,
    0, -2, 0, -7, 0, -2, -1, -7,
    0, -7, -7, -4, -11, 0, -7, 0,
    0, 0, -7, -4, 0, 0, 0, 0,
    0, -7, 0, 0, -11, 0, -11, -11,
    0, 0, 0, 0, 0, 0, -7, 0,
    0, 0, -7, 0, 0, -7, 0, 0,
    -7, 0, 0, -4, -2, 0, -7, -7,
    -7, -7, 0, -7, 0, 0, -7, -7,
    -7, 0, 0, 0, 0, -4, 0, 0,
    0, -11, -18, -14, -21, -8, 0, 0,
    -14, 0, -4, 0, -4, -8, -11, -11,
    0, 0, -16, -8, 0, -32, 7, -8,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -16, -32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    -6, 0, -4, 0, 0, 0, 0, -7,
    0, 0, 0, -18, -14, -18, -28, -7,
    -7, 0, -14, 0, -7, 0, -9, -4,
    0, -14, -7, 0, -15, -7, 0, -25,
    0, -7, -5, 0, 0, -4, -4, 0,
    0, 0, -4, 0, 0, -15, -25, 0,
    4, 0, 0, 0, -7, 0, -7, 0,
    0, -18, 0, 0, -12, -7, -7, -14,
    0, -9, 0, -7, -6, 0, -14, -4,
    -7, -8, -12, 0, -11, 0, -12, -12,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, -8, -11, 0, 0, 0, 0,
    0, -7, 0, -7, 0, -18, -18, -18,
    -28, -12, -11, -7, -25, 0, -8, 0,
    -10, -6, -21, 0, 0, -7, -20, -12,
    0, -39, 0, -12, -7, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, -20,
    -39, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, -14, 0, -11, -7, 0,
    -4, -14, 0, 0, 0, 0, -7, 0,
    -18, -4, 0, -4, -7, 0, -12, 0,
    -7, -1, 0, 0, 0, 0, 0, 3,
    -4, 0, 0, 0, -4, -12, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -11, 0, 0, -67, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -11, -67, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -18, 0, 0, 0, 0, 0, 0, 0,
    -18, 0, 0, 0, 0, 0, -18, 0,
    0, 0, -18, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, -18, 0, 0, -3, -7, -18,
    -14, 0, -18, 0, -8, -7, 0, -7,
    -7, -4, -11, -18, -7, -7, 0, -14,
    -4, -25, 1, -7, 1, -8, 0, -7,
    -7, -17, -5, -23, -23, -7, -15, -4,
    -23, -14, 0, 1, -8, -7, 0, 0,
    0, 0, -4, -4, -7, 0, -21, 0,
    -21, 0, -4, 0, 0, 0, 0, 0,
    -7, -4, -4, 0, 0, 0, 0, -21,
    -4, 0, -42, 0, -4, 0, -4, 0,
    -3, -3, -11, -7, -7, -3, 0, -42,
    -18, -42, -11, 0, 0, 0, 0, -4,
    0, 0, 0, -11, -18, -14, -21, -4,
    0, 0, -14, 0, -4, 0, -4, -4,
    -11, -11, 0, 0, -13, -4, 0, -32,
    7, -7, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -13, -32, 0,
    0, 0, 0, 0, -7, 0, -7, 0,
    -18, -18, -18, -28, -12, -11, -7, -25,
    0, -8, 0, -10, -6, -21, 0, 0,
    -7, -21, -12, 0, -39, 0, -12, -7,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, -21, -39, 0
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
const lv_font_t ui_font_Font_22 = {
#else
lv_font_t ui_font_Font_22 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 24,          /*The maximum line height required by the font*/
    .base_line = 3,             /*Baseline measured from the bottom of the line*/
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



#endif /*#if UI_FONT_FONT_22*/

