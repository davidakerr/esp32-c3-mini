// This file was generated by SquareLine Studio
// SquareLine Studio version: SquareLine Studio 1.2.3
// LVGL version: 8.3.3
// Project name: C3_Watch

#include "ui.h"

#ifndef LV_ATTRIBUTE_MEM_ALIGN
#define LV_ATTRIBUTE_MEM_ALIGN
#endif

// IMAGE DATA: assets\unmute.png
const LV_ATTRIBUTE_MEM_ALIGN uint8_t ui_img_unmute_png_data[] = {
0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x5F,0xFF,0xFF,0xB8,0xFF,0xFF,0xE4,0xFF,0xFF,0xD3,0xFF,0xFF,0x8E,0xFF,0xFF,0x21,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x04,0xFF,0xFF,0xA2,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE5,0xFF,0xFF,0x33,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x65,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xBD,0xFF,0xFF,0x72,0xFF,0xFF,0x8E,0xFF,0xFF,0xF4,0xFF,0xFF,0xFF,0xFF,0xFF,0xD1,0xFF,0xFF,0x08,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x01,0xFF,0xFF,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xB1,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x45,0xFF,0xFF,0xFA,0xFF,0xFF,0xFF,0xFF,0xFF,0x41,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0A,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0x5A,0xFF,0xFF,0x00,0xFF,0xFF,0x05,0xFF,0xFF,0x33,0xFF,0xFF,0x3B,0xFF,0xFF,0xE6,0xFF,0xFF,0xFF,0xFF,0xFF,0x63,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0C,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0x4E,0xFF,0xFF,0x00,0xFF,0xFF,0x39,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x63,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0C,0xFF,0xFF,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x09,0xFF,0xFF,0x46,0xFF,0xFF,0x52,0xFF,0xFF,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0x63,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0C,0xFF,0xFF,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0A,0xFF,0xFF,0x12,0xFF,0xFF,0xD6,0xFF,0xFF,0xFF,0xFF,0xFF,0x63,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0D,0xFF,0xFF,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x36,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x63,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x38,0xFF,0xFF,0x68,0xFF,0xFF,0x0B,0xFF,0xFF,0x09,0xFF,0xFF,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x13,0xFF,0xFF,0x74,0xFF,0xFF,0x80,0xFF,0xFF,0xE9,0xFF,0xFF,0xFF,0xFF,0xFF,0x63,0xFF,0xFF,0x00,0xFF,0xFF,0x43,0xFF,0xFF,0x67,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xDA,0xFF,0xFF,0xFF,0xFF,0xFF,0x57,
    0xFF,0xFF,0x00,0xFF,0xFF,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0x50,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xD2,0xFF,0xFF,0xFF,0xFF,0xFF,0x5F,0xFF,0xFF,0x00,0xFF,0xFF,0xE8,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0x61,0xFF,0xFF,0x00,0xFF,0xFF,0xE2,0xFF,0xFF,0xFF,0xFF,0xFF,0x4F,0xFF,0xFF,0x00,0xFF,0xFF,0x2D,0xFF,0xFF,0xDD,0xFF,0xFF,0xE6,0xFF,0xFF,0xFB,0xFF,0xFF,0xFF,0xFF,0xFF,0x5F,0xFF,0xFF,0x00,0xFF,0xFF,0xEC,0xFF,0xFF,0xF3,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0x61,0xFF,0xFF,0x00,0xFF,0xFF,0xE3,
    0xFF,0xFF,0xFF,0xFF,0xFF,0x4F,0xFF,0xFF,0x00,0xFF,0xFF,0x1B,0xFF,0xFF,0x9F,0xFF,0xFF,0xA7,0xFF,0xFF,0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0x61,0xFF,0xFF,0x00,0xFF,0xFF,0xEA,0xFF,0xFF,0xF3,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0xC5,0xFF,0xFF,0xFF,0xFF,0xFF,0x7F,0xFF,0xFF,0x00,0xFF,0xFF,0xD5,0xFF,0xFF,0xFF,0xFF,0xFF,0x85,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x12,0xFF,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0x4D,0xFF,0xFF,0x09,0xFF,0xFF,0xF5,0xFF,0xFF,0xF1,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x97,0xFF,0xFF,0xFF,0xFF,0xFF,0xBB,0xFF,0xFF,0x00,0xFF,0xFF,0x96,0xFF,0xFF,0xFF,0xFF,0xFF,0xF1,
    0xFF,0xFF,0x60,0xFF,0xFF,0x17,0xFF,0xFF,0x2E,0xFF,0xFF,0xBE,0xFF,0xFF,0xFF,0xFF,0xFF,0xF5,0xFF,0xFF,0x13,0xFF,0xFF,0x38,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x4A,0xFF,0xFF,0xFF,0xFF,0xFF,0xF9,0xFF,0xFF,0x2D,0xFF,0xFF,0x16,0xFF,0xFF,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x6E,0xFF,0xFF,0x00,0xFF,0xFF,0xA4,0xFF,0xFF,0xFF,0xFF,0xFF,0xD3,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x07,0xFF,0xFF,0xD5,0xFF,0xFF,0xFF,0xFF,0xFF,0xCB,0xFF,0xFF,0x07,0xFF,0xFF,0x22,0xFF,0xFF,0xBF,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,
    0xFF,0xFF,0xFF,0xFF,0xFF,0xE5,0xFF,0xFF,0x70,0xFF,0xFF,0x00,0xFF,0xFF,0x53,0xFF,0xFF,0xFE,0xFF,0xFF,0xFF,0xFF,0xFF,0x71,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x44,0xFF,0xFF,0xFC,0xFF,0xFF,0xFF,0xFF,0xFF,0xB9,0xFF,0xFF,0x12,0xFF,0xFF,0x00,0xFF,0xFF,0x23,0xFF,0xFF,0x44,0xFF,0xFF,0x38,0xFF,0xFF,0x06,0xFF,0xFF,0x00,0xFF,0xFF,0x57,0xFF,0xFF,0xF2,0xFF,0xFF,0xFF,0xFF,0xFF,0xC4,0xFF,0xFF,0x07,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x6F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0x79,0xFF,0xFF,0x32,0xFF,0xFF,0x19,0xFF,0xFF,0x22,0xFF,0xFF,0x51,
    0xFF,0xFF,0xAB,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xFF,0xFF,0x25,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x5E,0xFF,0xFF,0xED,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0xFD,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xFF,0xFF,0x24,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x24,0xFF,0xFF,0x88,0xFF,0xFF,0xD3,0xFF,0xFF,0xF9,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xBF,0xFF,0xFF,0x66,
    0xFF,0xFF,0x07,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x72,0xFF,0xFF,0xFF,0xFF,0xFF,0xD4,0xFF,0xFF,0x10,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x0B,0xFF,0xFF,0x30,0xFF,0xFF,0x2F,0xFF,0xFF,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xD5,0xFF,0xFF,0x2C,0xFF,0xFF,0x30,0xFF,0xFF,0x23,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x03,0xFF,0xFF,0xBA,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0x40,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x04,0xFF,0xFF,0xBF,0xFF,0xFF,0xEF,0xFF,0xFF,0xEF,0xFF,0xFF,0xEE,0xFF,0xFF,0xED,0xFF,0xFF,0xED,0xFF,0xFF,0xEF,0xFF,0xFF,0xEF,0xFF,0xFF,0xEF,0xFF,0xFF,0x48,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,
    0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,0xFF,0xFF,0x00,};
const lv_img_dsc_t ui_img_unmute_png = {
   .header.always_zero = 0,
   .header.w = 31,
   .header.h = 25,
   .data_size = sizeof(ui_img_unmute_png_data),
   .header.cf = LV_IMG_CF_TRUE_COLOR_ALPHA,
   .data = ui_img_unmute_png_data};

