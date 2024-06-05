/*******************************************************************************
 * Size: 24 px
 * Bpp: 1
 * Opts: --bpp 1 --size 24 --font /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/Staatliches-Regular.ttf -o /Users/minindupasan/Documents/Nerdtronics/Gauge V2.0/assets/Fonts/ui_font_Font_24.c --format lvgl -r 0x20-0x7f --no-compress --no-prefilter
 ******************************************************************************/

#include "ui.h"

#ifndef UI_FONT_FONT_24
#define UI_FONT_FONT_24 1
#endif

#if UI_FONT_FONT_24

/*-----------------
 *    BITMAPS
 *----------------*/

/*Store the image of the glyphs*/
static LV_ATTRIBUTE_LARGE_CONST const uint8_t glyph_bitmap[] = {
    /* U+0020 " " */
    0x0,

    /* U+0021 "!" */
    0xff, 0xff, 0xff, 0xff, 0xb0, 0x3f, 0xe0,

    /* U+0022 "\"" */
    0xef, 0xdf, 0xbf, 0x7e, 0xe0,

    /* U+0023 "#" */
    0x33, 0xc, 0xc3, 0x33, 0xff, 0xff, 0xcc, 0xc3,
    0x33, 0xff, 0xff, 0xcc, 0xc3, 0x30, 0xcc,

    /* U+0024 "$" */
    0x18, 0x3c, 0x7e, 0xe7, 0xe7, 0xe7, 0xf7, 0xf8,
    0x7e, 0x3f, 0x1f, 0xe7, 0xe7, 0xe7, 0x7e, 0x3c,
    0x18,

    /* U+0025 "%" */
    0x78, 0x39, 0xf8, 0x73, 0x31, 0xc6, 0x63, 0x8c,
    0xce, 0x19, 0x98, 0x3f, 0x70, 0x3c, 0xc0, 0x3,
    0x80, 0xe, 0x78, 0x1d, 0xf8, 0x73, 0x30, 0xe6,
    0x63, 0x8c, 0xc7, 0x19, 0x9c, 0x3f, 0x30, 0x3c,

    /* U+0026 "&" */
    0x3f, 0x7, 0xf0, 0xff, 0xe, 0x0, 0xe0, 0xe,
    0x0, 0xff, 0xf7, 0xff, 0x7f, 0xff, 0x38, 0xe3,
    0x8e, 0x38, 0xe3, 0x8f, 0x38, 0x7f, 0x87, 0xf8,
    0x1f, 0x80,

    /* U+0027 "'" */
    0xff, 0xfe,

    /* U+0028 "(" */
    0x1d, 0xf7, 0xfc, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0xc7, 0xdf, 0x1c,

    /* U+0029 ")" */
    0xe3, 0xef, 0x8f, 0x1c, 0x71, 0xc7, 0x1c, 0x71,
    0xc7, 0x1c, 0xff, 0xbe, 0xe0,

    /* U+002A "*" */
    0x18, 0x5a, 0x7e, 0x3c, 0x7e, 0x5a, 0x18,

    /* U+002B "+" */
    0xc, 0x6, 0x3, 0x1, 0x8f, 0xff, 0xfc, 0x30,
    0x18, 0xc, 0x6, 0x3, 0x0,

    /* U+002C "," */
    0xff, 0xb7, 0x80,

    /* U+002D "-" */
    0xff, 0xfe,

    /* U+002E "." */
    0xff, 0x80,

    /* U+002F "/" */
    0x19, 0xce, 0x73, 0x98, 0xce, 0x73, 0x9c, 0xc6,
    0x73, 0x9c, 0xc0,

    /* U+0030 "0" */
    0x1e, 0x1f, 0xe7, 0xfb, 0xcf, 0xe1, 0xf8, 0x7e,
    0x1f, 0x87, 0xe1, 0xf8, 0x7e, 0x1f, 0x87, 0xe1,
    0xfc, 0xf7, 0xf9, 0xfe, 0x1e, 0x0,

    /* U+0031 "1" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+0032 "2" */
    0x1c, 0x3f, 0x9f, 0xde, 0xfe, 0x3f, 0x1c, 0x1e,
    0xe, 0xf, 0xf, 0xf, 0x7, 0x7, 0x87, 0x83,
    0xff, 0xff, 0xff, 0x80,

    /* U+0033 "3" */
    0x1c, 0x3f, 0xbf, 0xdc, 0xfe, 0x3f, 0x1c, 0xe,
    0x1e, 0xf, 0x7, 0x80, 0xfc, 0x7e, 0x3f, 0x1f,
    0xfc, 0xfe, 0x1e, 0x0,

    /* U+0034 "4" */
    0x7, 0x3, 0xc0, 0xf0, 0x7c, 0x1f, 0x7, 0xc3,
    0xf0, 0xdc, 0x77, 0x19, 0xce, 0x73, 0xff, 0xff,
    0xff, 0xf0, 0x70, 0x1c, 0x7, 0x0,

    /* U+0035 "5" */
    0xff, 0x7f, 0xbf, 0xdc, 0xe, 0x7, 0x3, 0xf9,
    0xfe, 0xff, 0x71, 0xc0, 0xe0, 0x7e, 0x3f, 0x1d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0036 "6" */
    0x1c, 0x3f, 0x9f, 0xdc, 0x7e, 0x3f, 0x3, 0xf9,
    0xfe, 0xff, 0x73, 0xf8, 0xfc, 0x7e, 0x3f, 0x1d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0037 "7" */
    0xff, 0xff, 0xff, 0xe0, 0x70, 0x38, 0x38, 0x1c,
    0xe, 0xe, 0x7, 0x3, 0x83, 0x81, 0xc0, 0xe0,
    0xe0, 0x70, 0x38, 0x0,

    /* U+0038 "8" */
    0x3e, 0x3f, 0xbf, 0xfc, 0x7e, 0x3f, 0x1d, 0xfc,
    0xfe, 0x7f, 0x73, 0xf8, 0xfc, 0x7e, 0x3f, 0x1d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0039 "9" */
    0x3c, 0x3f, 0x9f, 0xdc, 0xfe, 0x3f, 0x1f, 0x8f,
    0xc7, 0x7f, 0xbf, 0xcf, 0xe0, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+003A ":" */
    0xff, 0x80, 0x7, 0xfc,

    /* U+003B ";" */
    0xff, 0x80, 0x7, 0xfd, 0xbc,

    /* U+003C "<" */
    0x6, 0xf, 0x1c, 0x38, 0xf0, 0xe0, 0x70, 0x38,
    0x1e, 0xf, 0x2,

    /* U+003D "=" */
    0xff, 0xff, 0xc0, 0x0, 0xf, 0xff, 0xfc,

    /* U+003E ">" */
    0x40, 0xf0, 0x78, 0x1c, 0xe, 0x7, 0xe, 0x3c,
    0x78, 0xe0, 0x40,

    /* U+003F "?" */
    0x1c, 0x3f, 0x9f, 0xde, 0xfe, 0x3f, 0x1f, 0x9e,
    0xe, 0xf, 0xf, 0x7, 0x3, 0x81, 0xc0, 0x0,
    0x70, 0x38, 0x1c, 0x0,

    /* U+0040 "@" */
    0x1f, 0x7, 0xfc, 0x7f, 0xcf, 0x1e, 0xe0, 0xee,
    0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xee, 0xef,
    0xee, 0x7c, 0xe3, 0x8e, 0x0, 0x7f, 0xf7, 0xff,
    0x1f, 0xf0,

    /* U+0041 "A" */
    0x1e, 0x7, 0x81, 0xe0, 0xf8, 0x3f, 0xf, 0xc3,
    0xf0, 0xfc, 0x33, 0x1c, 0xc7, 0x39, 0xce, 0x7f,
    0x9f, 0xe7, 0xfb, 0x86, 0xe1, 0xc0,

    /* U+0042 "B" */
    0xfe, 0x3f, 0xef, 0xfb, 0x8f, 0xe1, 0xf8, 0x7e,
    0x3f, 0xfe, 0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1,
    0xf8, 0xff, 0xfb, 0xfc, 0xfe, 0x0,

    /* U+0043 "C" */
    0x3e, 0x3f, 0x9f, 0xdc, 0xfe, 0x3f, 0x1f, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0044 "D" */
    0xfc, 0x7f, 0xbf, 0xdc, 0xfe, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x3f,
    0xfd, 0xfe, 0xfc, 0x0,

    /* U+0045 "E" */
    0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,
    0xff,

    /* U+0046 "F" */
    0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0,

    /* U+0047 "G" */
    0x3c, 0x3f, 0x9f, 0xde, 0xfe, 0x3f, 0x1f, 0x81,
    0xc0, 0xef, 0xf7, 0xfb, 0xfc, 0x7e, 0x3f, 0x1d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0048 "H" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xff, 0xff, 0xff, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8f, 0xc7, 0xe3, 0x80,

    /* U+0049 "I" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+004A "J" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0x81, 0xc0, 0xfc, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1e, 0x0,

    /* U+004B "K" */
    0xe3, 0xb8, 0xee, 0x73, 0x9c, 0xee, 0x3f, 0xf,
    0xc3, 0xf0, 0xfc, 0x3f, 0x8e, 0xe3, 0x9c, 0xe7,
    0x38, 0xee, 0x3b, 0x8f, 0xe1, 0xc0,

    /* U+004C "L" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,
    0xff,

    /* U+004D "M" */
    0xf1, 0xfe, 0x3f, 0xef, 0xff, 0xff, 0xff, 0xdd,
    0xfb, 0xbf, 0x27, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xf, 0xc1, 0xf8, 0x3f, 0x7, 0xe0, 0xe0,

    /* U+004E "N" */
    0xe3, 0xf1, 0xf8, 0xfe, 0x7f, 0x3f, 0xdf, 0xef,
    0xf7, 0xff, 0xf7, 0xfb, 0xfd, 0xfe, 0x7f, 0x3f,
    0x8f, 0xc7, 0xe3, 0x80,

    /* U+004F "O" */
    0x3e, 0x3f, 0x9f, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0050 "P" */
    0xfe, 0x3f, 0xef, 0xfb, 0x8f, 0xe1, 0xf8, 0x7e,
    0x1f, 0x8f, 0xff, 0xbf, 0xcf, 0xe3, 0x80, 0xe0,
    0x38, 0xe, 0x3, 0x80, 0xe0, 0x0,

    /* U+0051 "Q" */
    0x3c, 0x1f, 0xc7, 0xf3, 0x8e, 0xe3, 0xb8, 0xee,
    0x3b, 0x8e, 0xe3, 0xb8, 0xee, 0x3b, 0x8e, 0xe3,
    0xb9, 0xe7, 0xf1, 0xfe, 0x3f, 0xc0, 0x60,

    /* U+0052 "R" */
    0xfe, 0x3f, 0xef, 0xfb, 0x8f, 0xe1, 0xf8, 0x7e,
    0x3f, 0xfe, 0xff, 0xbf, 0xee, 0x3f, 0x87, 0xe1,
    0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xc0,

    /* U+0053 "S" */
    0x3e, 0x3f, 0xbf, 0xde, 0x7e, 0x3f, 0x1f, 0xce,
    0xf0, 0x3e, 0xf, 0x81, 0xfc, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1e, 0x0,

    /* U+0054 "T" */
    0xff, 0xff, 0xff, 0xe3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0x0,

    /* U+0055 "U" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0056 "V" */
    0xe1, 0xd8, 0x77, 0x19, 0xce, 0x73, 0x9c, 0xe7,
    0x38, 0xce, 0x3b, 0xf, 0xc3, 0xf0, 0xfc, 0x1f,
    0x7, 0x81, 0xe0, 0x78, 0x1e, 0x0,

    /* U+0057 "W" */
    0xe3, 0x8f, 0xc7, 0x19, 0x8e, 0x73, 0x9c, 0xe7,
    0x39, 0xce, 0xf3, 0x9d, 0xf7, 0x3b, 0xec, 0x37,
    0xd8, 0x6d, 0xf0, 0xfb, 0xe1, 0xf7, 0xc3, 0xef,
    0x87, 0xde, 0x7, 0xbc, 0xe, 0x78, 0x1c, 0x70,

    /* U+0058 "X" */
    0xe3, 0xb1, 0xdc, 0xce, 0xe3, 0x71, 0xf0, 0xf8,
    0x3c, 0x1e, 0x1f, 0xf, 0x86, 0xe3, 0x73, 0xb9,
    0xcc, 0xc7, 0xe3, 0x80,

    /* U+0059 "Y" */
    0xe3, 0xf1, 0xd8, 0xce, 0xe7, 0x71, 0xb0, 0xd8,
    0x7c, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0x0,

    /* U+005A "Z" */
    0xff, 0xff, 0xff, 0xe0, 0xf0, 0x70, 0x78, 0x38,
    0x3c, 0x1c, 0x1c, 0xe, 0xe, 0x7, 0x7, 0x3,
    0xff, 0xff, 0xff, 0x80,

    /* U+005B "[" */
    0xff, 0xff, 0xf8, 0xe3, 0x8e, 0x38, 0xe3, 0x8e,
    0x38, 0xe3, 0x8f, 0xff, 0xfc,

    /* U+005C "\\" */
    0xe3, 0x8e, 0x38, 0x61, 0x87, 0x1c, 0x71, 0xc3,
    0xe, 0x38, 0xe3, 0x86, 0x18,

    /* U+005D "]" */
    0xff, 0xff, 0xf8, 0x70, 0xe1, 0xc3, 0x87, 0xe,
    0x1c, 0x38, 0x70, 0xe1, 0xff, 0xff, 0xfe,

    /* U+005E "^" */
    0x8, 0x1c, 0x3c, 0x3e, 0x67, 0x63, 0x0,

    /* U+005F "_" */
    0xff, 0xff, 0xff, 0xff, 0x80,

    /* U+0060 "`" */
    0xe3, 0x9c, 0x70,

    /* U+0061 "a" */
    0x1e, 0x7, 0x81, 0xe0, 0xf8, 0x3f, 0xf, 0xc3,
    0xf0, 0xfc, 0x33, 0x1c, 0xc7, 0x39, 0xce, 0x7f,
    0x9f, 0xe7, 0xfb, 0x86, 0xe1, 0xc0,

    /* U+0062 "b" */
    0xfe, 0x3f, 0xef, 0xfb, 0x8f, 0xe1, 0xf8, 0x7e,
    0x3f, 0xfe, 0xff, 0x3f, 0xee, 0x3f, 0x87, 0xe1,
    0xf8, 0xff, 0xfb, 0xfc, 0xfe, 0x0,

    /* U+0063 "c" */
    0x3e, 0x3f, 0x9f, 0xdc, 0xfe, 0x3f, 0x1f, 0x81,
    0xc0, 0xe0, 0x70, 0x38, 0x1c, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0064 "d" */
    0xfc, 0x7f, 0xbf, 0xdc, 0xfe, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x3f,
    0xfd, 0xfe, 0xfc, 0x0,

    /* U+0065 "e" */
    0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,
    0xff,

    /* U+0066 "f" */
    0xff, 0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xff,
    0xff, 0xff, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0,

    /* U+0067 "g" */
    0x3c, 0x3f, 0x9f, 0xde, 0xfe, 0x3f, 0x1f, 0x81,
    0xc0, 0xef, 0xf7, 0xfb, 0xfc, 0x7e, 0x3f, 0x1d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0068 "h" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xff, 0xff, 0xff, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f,
    0x8f, 0xc7, 0xe3, 0x80,

    /* U+0069 "i" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+006A "j" */
    0x3, 0x81, 0xc0, 0xe0, 0x70, 0x38, 0x1c, 0xe,
    0x7, 0x3, 0x81, 0xc0, 0xfc, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1e, 0x0,

    /* U+006B "k" */
    0xe3, 0xb8, 0xee, 0x73, 0x9c, 0xee, 0x3f, 0xf,
    0xc3, 0xf0, 0xfc, 0x3f, 0x8e, 0xe3, 0x9c, 0xe7,
    0x38, 0xee, 0x3b, 0x8f, 0xe1, 0xc0,

    /* U+006C "l" */
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0,
    0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xe0, 0xff, 0xff,
    0xff,

    /* U+006D "m" */
    0xf1, 0xfe, 0x3f, 0xef, 0xff, 0xff, 0xff, 0xdd,
    0xfb, 0xbf, 0x27, 0xe0, 0xfc, 0x1f, 0x83, 0xf0,
    0x7e, 0xf, 0xc1, 0xf8, 0x3f, 0x7, 0xe0, 0xe0,

    /* U+006E "n" */
    0xe3, 0xf1, 0xf8, 0xfe, 0x7f, 0x3f, 0xdf, 0xef,
    0xf7, 0xff, 0xf7, 0xfb, 0xfd, 0xfe, 0x7f, 0x3f,
    0x8f, 0xc7, 0xe3, 0x80,

    /* U+006F "o" */
    0x3e, 0x3f, 0x9f, 0xdc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0070 "p" */
    0xfe, 0x3f, 0xef, 0xfb, 0x8f, 0xe1, 0xf8, 0x7e,
    0x1f, 0x8f, 0xff, 0xbf, 0xcf, 0xe3, 0x80, 0xe0,
    0x38, 0xe, 0x3, 0x80, 0xe0, 0x0,

    /* U+0071 "q" */
    0x3c, 0x1f, 0xc7, 0xf3, 0x8e, 0xe3, 0xb8, 0xee,
    0x3b, 0x8e, 0xe3, 0xb8, 0xee, 0x3b, 0x8e, 0xe3,
    0xb9, 0xe7, 0xf1, 0xfe, 0x3f, 0xc0, 0x60,

    /* U+0072 "r" */
    0xfe, 0x3f, 0xef, 0xfb, 0x8f, 0xe1, 0xf8, 0x7e,
    0x3f, 0xfe, 0xff, 0xbf, 0xee, 0x3f, 0x87, 0xe1,
    0xf8, 0x7e, 0x1f, 0x87, 0xe1, 0xc0,

    /* U+0073 "s" */
    0x3e, 0x3f, 0xbf, 0xde, 0x7e, 0x3f, 0x1f, 0xce,
    0xf0, 0x3e, 0xf, 0x81, 0xfc, 0x7e, 0x3f, 0x3d,
    0xfc, 0xfe, 0x1e, 0x0,

    /* U+0074 "t" */
    0xff, 0xff, 0xff, 0xe3, 0x81, 0xc0, 0xe0, 0x70,
    0x38, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0x0,

    /* U+0075 "u" */
    0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0x1f, 0x8f,
    0xc7, 0xe3, 0xf1, 0xf8, 0xfc, 0x7e, 0x3f, 0xbd,
    0xfc, 0xfe, 0x1c, 0x0,

    /* U+0076 "v" */
    0xe1, 0xd8, 0x77, 0x19, 0xce, 0x73, 0x9c, 0xe7,
    0x38, 0xce, 0x3b, 0xf, 0xc3, 0xf0, 0xfc, 0x1f,
    0x7, 0x81, 0xe0, 0x78, 0x1e, 0x0,

    /* U+0077 "w" */
    0xe3, 0x8f, 0xc7, 0x19, 0x8e, 0x73, 0x9c, 0xe7,
    0x39, 0xce, 0xf3, 0x9d, 0xf7, 0x3b, 0xec, 0x37,
    0xd8, 0x6d, 0xf0, 0xfb, 0xe1, 0xf7, 0xc3, 0xef,
    0x87, 0xde, 0x7, 0xbc, 0xe, 0x78, 0x1c, 0x70,

    /* U+0078 "x" */
    0xe3, 0xb1, 0xdc, 0xce, 0xe3, 0x71, 0xf0, 0xf8,
    0x3c, 0x1e, 0x1f, 0xf, 0x86, 0xe3, 0x73, 0xb9,
    0xcc, 0xc7, 0xe3, 0x80,

    /* U+0079 "y" */
    0xe3, 0xf1, 0xd8, 0xce, 0xe7, 0x71, 0xb0, 0xd8,
    0x7c, 0x1c, 0xe, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x70, 0x38, 0x1c, 0x0,

    /* U+007A "z" */
    0xff, 0xff, 0xff, 0xe0, 0xf0, 0x70, 0x78, 0x38,
    0x3c, 0x1c, 0x1c, 0xe, 0xe, 0x7, 0x7, 0x3,
    0xff, 0xff, 0xff, 0x80,

    /* U+007B "{" */
    0x1f, 0x8f, 0xc7, 0xe3, 0x81, 0xc0, 0xe0, 0x71,
    0xf8, 0xfc, 0x7e, 0x7, 0x3, 0x81, 0xc0, 0xe0,
    0x7e, 0x3f, 0x1f, 0x80,

    /* U+007C "|" */
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xe0,

    /* U+007D "}" */
    0xfe, 0x7f, 0x3f, 0x81, 0xc0, 0xe0, 0x70, 0x38,
    0x1f, 0xf, 0x87, 0xc3, 0x81, 0xc0, 0xe0, 0x73,
    0xf9, 0xfc, 0xfe, 0x0,

    /* U+007E "~" */
    0x79, 0xff, 0xf1, 0xc0
};


/*---------------------
 *  GLYPH DESCRIPTION
 *--------------------*/

static const lv_font_fmt_txt_glyph_dsc_t glyph_dsc[] = {
    {.bitmap_index = 0, .adv_w = 0, .box_w = 0, .box_h = 0, .ofs_x = 0, .ofs_y = 0} /* id = 0 reserved */,
    {.bitmap_index = 0, .adv_w = 57, .box_w = 1, .box_h = 1, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1, .adv_w = 78, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 8, .adv_w = 150, .box_w = 7, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 13, .adv_w = 182, .box_w = 10, .box_h = 12, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 28, .adv_w = 144, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 45, .adv_w = 260, .box_w = 15, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 77, .adv_w = 191, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 103, .adv_w = 81, .box_w = 3, .box_h = 5, .ofs_x = 1, .ofs_y = 12},
    {.bitmap_index = 105, .adv_w = 125, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 118, .adv_w = 125, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 131, .adv_w = 135, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 138, .adv_w = 170, .box_w = 9, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 151, .adv_w = 78, .box_w = 3, .box_h = 6, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 154, .adv_w = 116, .box_w = 5, .box_h = 3, .ofs_x = 1, .ofs_y = 7},
    {.bitmap_index = 156, .adv_w = 78, .box_w = 3, .box_h = 3, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 158, .adv_w = 115, .box_w = 5, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 169, .adv_w = 191, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 191, .adv_w = 81, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 198, .adv_w = 169, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 218, .adv_w = 169, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 238, .adv_w = 173, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 260, .adv_w = 166, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 280, .adv_w = 175, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 300, .adv_w = 170, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 320, .adv_w = 172, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 340, .adv_w = 172, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 360, .adv_w = 78, .box_w = 3, .box_h = 10, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 364, .adv_w = 78, .box_w = 3, .box_h = 13, .ofs_x = 1, .ofs_y = -3},
    {.bitmap_index = 369, .adv_w = 164, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 380, .adv_w = 170, .box_w = 9, .box_h = 6, .ofs_x = 1, .ofs_y = 5},
    {.bitmap_index = 387, .adv_w = 164, .box_w = 8, .box_h = 11, .ofs_x = 1, .ofs_y = 3},
    {.bitmap_index = 398, .adv_w = 167, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 418, .adv_w = 208, .box_w = 12, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 444, .adv_w = 164, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 466, .adv_w = 178, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 488, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 508, .adv_w = 181, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 528, .adv_w = 161, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 545, .adv_w = 162, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 562, .adv_w = 173, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 582, .adv_w = 182, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 602, .adv_w = 81, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 609, .adv_w = 167, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 629, .adv_w = 180, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 651, .adv_w = 152, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 668, .adv_w = 206, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 692, .adv_w = 178, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 712, .adv_w = 175, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 732, .adv_w = 175, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 754, .adv_w = 179, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 777, .adv_w = 185, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 799, .adv_w = 167, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 819, .adv_w = 154, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 839, .adv_w = 177, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 859, .adv_w = 166, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 881, .adv_w = 242, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 913, .adv_w = 155, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 933, .adv_w = 154, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 953, .adv_w = 159, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 973, .adv_w = 128, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 986, .adv_w = 116, .box_w = 6, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 999, .adv_w = 128, .box_w = 7, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1014, .adv_w = 141, .box_w = 8, .box_h = 7, .ofs_x = 0, .ofs_y = 10},
    {.bitmap_index = 1021, .adv_w = 210, .box_w = 11, .box_h = 3, .ofs_x = 1, .ofs_y = -2},
    {.bitmap_index = 1026, .adv_w = 109, .box_w = 5, .box_h = 4, .ofs_x = 1, .ofs_y = 18},
    {.bitmap_index = 1029, .adv_w = 164, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1051, .adv_w = 178, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1073, .adv_w = 174, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1093, .adv_w = 181, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1113, .adv_w = 161, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1130, .adv_w = 162, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1147, .adv_w = 173, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1167, .adv_w = 182, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1187, .adv_w = 81, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1194, .adv_w = 167, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1214, .adv_w = 180, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1236, .adv_w = 152, .box_w = 8, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1253, .adv_w = 206, .box_w = 11, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1277, .adv_w = 178, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1297, .adv_w = 175, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1317, .adv_w = 179, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1339, .adv_w = 179, .box_w = 10, .box_h = 18, .ofs_x = 1, .ofs_y = -1},
    {.bitmap_index = 1362, .adv_w = 185, .box_w = 10, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1384, .adv_w = 167, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1404, .adv_w = 154, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1424, .adv_w = 177, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1444, .adv_w = 166, .box_w = 10, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1466, .adv_w = 242, .box_w = 15, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1498, .adv_w = 155, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1518, .adv_w = 154, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1538, .adv_w = 159, .box_w = 9, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1558, .adv_w = 156, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1578, .adv_w = 76, .box_w = 3, .box_h = 17, .ofs_x = 1, .ofs_y = 0},
    {.bitmap_index = 1585, .adv_w = 156, .box_w = 9, .box_h = 17, .ofs_x = 0, .ofs_y = 0},
    {.bitmap_index = 1605, .adv_w = 182, .box_w = 9, .box_h = 3, .ofs_x = 1, .ofs_y = 7}
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
    0, 9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 4, 0, 4, 0,
    0, 0, 9, 0, 4, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -13, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -13,
    0, 0, 0, 0, 0, 0, 0, -8,
    0, 0, -8, 0, -23, -12, 0, 1,
    0, -4, 0, 0, -8, 0, -4, 0,
    -15, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -5, 2, -8, -5, -15, -6,
    -4, -7, 0, -19, -7, 0, -6, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, -8, -12, -8, 0,
    0, -23, -4, 0, 0, 0, 0, 0,
    -6, 0, 0, -15, 0, 0, -4, -19,
    0, -12, -12, -8, -15, -8, -12, 0,
    0, -6, -15, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, -8, -8, 0,
    0, 0, -8, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -15, 0, 0, -61, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -15, -61, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -38, 0, 0, 0, 0, 0, 0, -7,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -7, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, -12, 0, -4,
    0, 0, 0, 0, 4, -4, 0, 0,
    0, -4, -8, -12, 0, -15, -15, 0,
    -19, 0, -15, 0, 0, 4, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -23, 0, 0, 0, 0, 0,
    0, -12, 0, 0, 0, 0, 0, 0,
    -19, 0, -8, -8, -12, -15, -15, -8,
    0, 0, -12, 0, -12, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -4, 0, 0, 0, 0, 0, -12,
    0, -4, 0, 0, 0, -35, 4, -4,
    0, 0, 0, -4, -8, -12, 0, -15,
    -15, 0, -19, 0, -15, 0, 0, 4,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -19, 0, 0, -19, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -27, -19, -19, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -12, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, -5,
    0, -8, -8, -4, -6, 0, -8, 0,
    0, 0, -12, -4, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, -8, 0, 0,
    0, 0, 0, 0, 0, 0, -8, -8,
    -6, -7, -4, -8, 0, 0, -8, 0,
    -6, 0, 0, 0, 0, 0, 0, -19,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -12, 0, 0, 0, 0,
    0, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -4, 0, 0, 0, -8,
    0, 0, -23, -35, -12, -35, 0, -8,
    -6, -8, -30, 0, -8, 0, -8, -8,
    -15, 0, 0, 0, -20, -8, 0, -35,
    0, -8, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -20, -35, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -15, 0, -2, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    -4, 0, -8, -8, -8, -8, 0, -8,
    0, 0, -8, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, 0, 0, 0, 0, 0, -4,
    -4, -4, -6, 0, -4, 0, 0, -8,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, -19, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -12, 0, 0, 0, 0, -15,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, 0, -12,
    0, -8, -8, -8, 0, -4, -8, 0,
    0, -8, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -12, 0, 0,
    0, 0, 0, -8, -15, 0, -15, -15,
    -15, 0, -15, -15, 0, 0, -12, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -19, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -15, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, -19, 0, 0, -3,
    -8, -19, -16, 0, -19, 0, -9, -8,
    0, -8, -8, -4, -12, -19, -8, -8,
    0, -15, -4, -27, 1, -8, 1, -9,
    0, -8, -8, -18, -5, -22, -22, -8,
    -17, -4, -22, -15, 0, 1, -9, -8,
    0, 0, 0, 0, 0, -4, 0, 0,
    -8, 0, -8, 0, 0, 0, 0, -4,
    0, 0, -4, 0, 0, 0, 0, 0,
    0, -8, 0, 0, 0, 0, 0, 0,
    -8, 0, -8, -8, -7, -12, 0, -8,
    0, -27, -8, 0, -7, 0, 0, 0,
    0, 0, -8, 0, 0, -8, 0, -8,
    -12, -9, 0, 0, 0, 0, 0, -4,
    0, -9, 0, 0, 0, 0, -8, -9,
    0, 0, 0, -9, 0, -8, -1, -8,
    -8, -9, -8, -8, -8, 0, -31, -12,
    0, -9, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -6, 0,
    -4, -23, 0, 0, 0, -7, -4, 0,
    0, 0, 0, -4, -6, 0, -34, 0,
    -6, -2, 0, 0, 0, 0, -8, -2,
    0, 0, 0, 0, -4, -13, -8, 0,
    0, 4, 0, 0, 0, 0, 0, -12,
    0, -12, -19, -14, 0, 0, 0, 0,
    0, 0, 0, -14, 0, 0, 0, 0,
    -23, -14, 0, 0, 4, -14, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -38, -23, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -8, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, -8, 0,
    -8, 0, -8, 0, 0, 0, 0, 0,
    0, 0, -8, 0, 0, 0, 0, -8,
    -8, 0, 0, 0, -8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -8, 0, 0, 0, 0, 0, -15, -8,
    0, -19, 0, 4, -19, 4, 0, -15,
    0, 0, 0, -8, -12, 0, -15, -15,
    0, 0, 0, 0, 0, -15, -4, -12,
    0, -12, -15, -6, 0, -5, -5, -4,
    -4, 0, -5, -23, 0, 0, -12, -4,
    -15, 0, 0, 0, -8, 0, -54, -38,
    0, -35, 0, 0, -5, 0, -8, -8,
    -8, -12, -23, -12, -8, 0, 0, 0,
    -27, 0, -5, 0, -12, 0, -5, -10,
    -38, -8, -23, -23, -4, -31, -8, -23,
    0, 0, 0, -12, -4, 0, 0, 0,
    0, -4, -4, -8, 0, -23, 0, -23,
    0, -4, 0, 0, 0, 0, 0, -8,
    -4, -4, 0, 0, 0, 0, -19, -4,
    0, -46, 0, -4, 0, -4, 0, -3,
    -3, -12, -8, -8, -3, 0, -46, -19,
    -46, -12, 0, 0, 0, 0, 0, -8,
    0, 0, -8, 0, -23, -12, 0, 1,
    0, -4, 0, 0, -8, 0, -4, 0,
    -15, 0, 0, -1, 0, 0, 0, 0,
    0, 0, -5, 0, -8, -5, -15, -6,
    -4, -7, 0, -19, -7, 0, -6, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -2, 0, 0, 0, 0,
    0, -12, 0, -2, 0, -12, 0, 0,
    0, -2, 0, -8, 0, -2, -1, -8,
    0, -8, -8, -4, -12, 0, -8, 0,
    0, 0, -8, -4, 0, 0, 0, 0,
    0, -8, 0, 0, -12, 0, -12, -12,
    0, 0, 0, 0, 0, 0, -8, 0,
    0, 0, -8, 0, 0, -8, 0, 0,
    -8, 0, 0, -4, -2, 0, -8, -8,
    -8, -8, 0, -8, 0, 0, -8, -8,
    -8, 0, 0, 0, 0, -4, 0, 0,
    0, -12, -19, -15, -23, -8, 0, 0,
    -15, 0, -4, 0, -4, -8, -12, -12,
    0, 0, -18, -8, 0, -35, 8, -8,
    -2, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, -18, -35, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, -6,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, -4, 0, 0, 0, 0, 0,
    -6, 0, -4, 0, 0, 0, 0, -8,
    0, 0, 0, -19, -15, -19, -31, -8,
    -8, 0, -15, 0, -8, 0, -10, -4,
    0, -15, -8, 0, -16, -8, 0, -28,
    0, -8, -5, 0, 0, -4, -4, 0,
    0, 0, -4, 0, 0, -16, -28, 0,
    4, 0, 0, 0, -8, 0, -8, 0,
    0, -19, 0, 0, -13, -8, -8, -15,
    0, -10, 0, -8, -7, 0, -15, -4,
    -8, -9, -13, 0, -12, 0, -13, -13,
    0, -4, 0, 0, 0, 0, 0, 0,
    0, 0, -9, -12, 0, 0, 0, 0,
    0, -8, 0, -8, 0, -19, -19, -19,
    -31, -13, -12, -8, -27, 0, -9, 0,
    -10, -6, -23, 0, 0, -8, -22, -13,
    0, -42, 0, -13, -8, 0, 0, 0,
    0, 0, 0, 1, 0, 0, 0, -22,
    -42, 0, 0, 0, 0, 0, -4, 0,
    0, 0, 0, -15, 0, -12, -8, 0,
    -4, -15, 0, 0, 0, 0, -8, 0,
    -19, -4, 0, -4, -8, 0, -13, 0,
    -8, -1, 0, 0, 0, 0, 0, 3,
    -4, 0, 0, 0, -4, -13, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -12, 0, 0, -73, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, -12, -73, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    -19, 0, 0, 0, 0, 0, 0, 0,
    -19, 0, 0, 0, 0, 0, -19, 0,
    0, 0, -19, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0,
    0, 4, -19, 0, 0, -3, -8, -19,
    -16, 0, -19, 0, -9, -8, 0, -8,
    -8, -4, -12, -19, -8, -8, 0, -15,
    -4, -27, 1, -8, 1, -9, 0, -8,
    -8, -18, -5, -25, -25, -8, -17, -4,
    -25, -15, 0, 1, -9, -8, 0, 0,
    0, 0, -4, -4, -8, 0, -23, 0,
    -23, 0, -4, 0, 0, 0, 0, 0,
    -8, -4, -4, 0, 0, 0, 0, -23,
    -4, 0, -46, 0, -4, 0, -4, 0,
    -3, -3, -12, -8, -8, -3, 0, -46,
    -19, -46, -12, 0, 0, 0, 0, -4,
    0, 0, 0, -12, -19, -15, -23, -4,
    0, 0, -15, 0, -4, 0, -4, -4,
    -12, -12, 0, 0, -14, -4, 0, -35,
    8, -8, -2, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, -14, -35, 0,
    0, 0, 0, 0, -8, 0, -8, 0,
    -19, -19, -19, -31, -13, -12, -8, -27,
    0, -9, 0, -10, -6, -23, 0, 0,
    -8, -23, -13, 0, -42, 0, -13, -8,
    0, 0, 0, 0, 0, 0, 1, 0,
    0, 0, -23, -42, 0
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
const lv_font_t ui_font_Font_24 = {
#else
lv_font_t ui_font_Font_24 = {
#endif
    .get_glyph_dsc = lv_font_get_glyph_dsc_fmt_txt,    /*Function pointer to get glyph's data*/
    .get_glyph_bitmap = lv_font_get_bitmap_fmt_txt,    /*Function pointer to get glyph's bitmap*/
    .line_height = 25,          /*The maximum line height required by the font*/
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



#endif /*#if UI_FONT_FONT_24*/

