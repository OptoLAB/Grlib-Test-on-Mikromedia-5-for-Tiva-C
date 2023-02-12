/*
 * images.c
 *
 *  Created on: Jan 9, 2023
 *      Author: Jovan
 */

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"

const unsigned char ti_logo[] =
{
    IMAGE_FMT_4BPP_COMP,
    80, 0,
    75, 0,

    15,
    0x00, 0x00, 0x00,
    0x02, 0x02, 0x0f,
    0x06, 0x05, 0x27,
    0x09, 0x07, 0x3b,
    0x0c, 0x09, 0x4c,
    0x0d, 0x0a, 0x56,
    0x10, 0x0c, 0x68,
    0x13, 0x0f, 0x7a,
    0x15, 0x10, 0x89,
    0x17, 0x11, 0x95,
    0x19, 0x14, 0xa5,
    0x1c, 0x16, 0xb6,
    0x1e, 0x18, 0xc7,
    0x22, 0x1a, 0xdc,
    0x22, 0x1b, 0xe3,
    0x24, 0x1c, 0xed,

    0xfc, 0x07, 0x07, 0x07, 0x07, 0x07, 0x03, 0x04, 0xfe, 0x13, 0xee, 0xee,
    0xee, 0xe9, 0xef, 0xd1, 0x07, 0x07, 0xc2, 0x77, 0x29, 0x04, 0xff, 0xff,
    0xff, 0xe9, 0xff, 0x3c, 0xff, 0xd1, 0x07, 0x07, 0x77, 0x29, 0x04, 0xff,
    0x23, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xd1, 0x07, 0x07, 0xc2, 0x77, 0x29,
    0x04, 0xff, 0xff, 0xff, 0xe9, 0xff, 0x2e, 0xff, 0xd1, 0x05, 0x01, 0x07,
    0xbf, 0x32, 0x04, 0x11, 0xff, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xd1, 0x02,
    0x0e, 0x6f, 0xdc, 0xdc, 0xf7, 0x07, 0xbf, 0x32, 0x04, 0x11, 0xff, 0xff,
    0xff, 0xe9, 0xff, 0xff, 0xd1, 0x02, 0x0e, 0xaf, 0xff, 0xff, 0xf5, 0x07,
    0xbf, 0x32, 0x04, 0x11, 0xff, 0xff, 0xff, 0xe9, 0xff, 0xff, 0xd1, 0x02,
    0x0e, 0xdf, 0xff, 0xff, 0xf2, 0x07, 0xbf, 0x32, 0x04, 0x11, 0xff, 0xff,
    0xff, 0xe9, 0xff, 0xff, 0xd1, 0x01, 0x73, 0x01, 0xc5, 0x07, 0xa7, 0x00,
    0x04, 0x29, 0x11, 0xae, 0x04, 0x03, 0x99, 0xa0, 0x07, 0xbf, 0x72, 0x04,
    0xc5, 0x29, 0x11, 0xff, 0xff, 0xd1, 0x01, 0x08, 0x99, 0x76, 0x70, 0x07,
    0xbf, 0x72, 0x04, 0x29, 0x11, 0xff, 0x20, 0xff, 0xd1, 0x01, 0x07, 0xcb,
    0xbb, 0xbc, 0x40, 0xe1, 0x07, 0xbf, 0x72, 0x04, 0xff, 0xff, 0xff, 0xe9,
    0x1e, 0xff, 0xff, 0xd1, 0x07, 0x07, 0x77, 0x29, 0x04, 0x11, 0xff, 0xff,
    0xff, 0xe9, 0xff, 0xff, 0xd1, 0x07, 0xe1, 0x07, 0x77, 0x29, 0x04, 0xff,
    0xff, 0xff, 0xe9, 0x00, 0xff, 0xff, 0xe6, 0x45, 0x63, 0x00, 0x26, 0x55,
    0x2b, 0x55, 0x64, 0xda, 0x55, 0xe9, 0x51, 0x04, 0xd4, 0x03, 0x00, 0x00,
    0x04, 0xff, 0xff, 0xff, 0xe9, 0xd2, 0x03, 0xf7, 0x00, 0x6f, 0xff, 0xff,
    0xf9, 0xda, 0x62, 0x63, 0xf2, 0x04, 0xd4, 0x00, 0x00, 0x04, 0x54, 0x22,
    0x00, 0xf3, 0x00, 0x9f, 0xff, 0xff, 0xf6, 0x00, 0x8f, 0xb1, 0x74, 0xf2,
    0x04, 0xd4, 0x00, 0x00, 0x04, 0x54, 0x8e, 0x22, 0xd1, 0x00, 0xcf, 0x0a,
    0xd9, 0x62, 0xf2, 0xc6, 0x04, 0xd4, 0x00, 0x00, 0x04, 0x54, 0x22, 0xc0,
    0x45, 0x01, 0x01, 0xd1, 0x01, 0xef, 0x74, 0xf2, 0x04, 0x8c, 0xd4, 0x00,
    0x00, 0x04, 0x54, 0x22, 0x90, 0x03, 0xb6, 0x01, 0xb0, 0xda, 0x62, 0xf2,
    0x04, 0xd4, 0x00, 0x32, 0x00, 0x04, 0x4d, 0x11, 0x60, 0x06, 0x01, 0x90,
    0xd8, 0xda, 0x62, 0xf2, 0x04, 0xd4, 0x00, 0x00, 0x04, 0xcb, 0x4d, 0x11,
    0x30, 0x09, 0x01, 0x50, 0xda, 0x62, 0x62, 0xf2, 0x04, 0xd4, 0x00, 0x00,
    0x04, 0x4d, 0xff, 0x0b, 0xff, 0xfe, 0x10, 0x0c, 0x01, 0x30, 0xda, 0x62,
    0x62, 0xf2, 0x04, 0xd4, 0x00, 0x00, 0x04, 0x4d, 0xda, 0x00, 0xaa, 0xb9,
    0x00, 0x1e, 0xff, 0xff, 0xfe, 0x10, 0x0b, 0x1a, 0xba, 0xaa, 0xdf, 0x62,
    0xf2, 0x04, 0xd4, 0x1a, 0x00, 0x00, 0x04, 0x62, 0x41, 0x80, 0x49, 0x2f,
    0x12, 0xff, 0xff, 0xfb, 0x11, 0x01, 0xef, 0x62, 0xf3, 0xc6, 0x04, 0xd4,
    0x00, 0x00, 0x04, 0x62, 0x41, 0x60, 0x85, 0x49, 0x6f, 0xff, 0xff, 0xf8,
    0x6f, 0xf4, 0x04, 0xc4, 0xd4, 0x5e, 0xff, 0xff, 0x30, 0x49, 0x9f, 0xff,
    0x2b, 0xff, 0xf6, 0x11, 0x06, 0x6b, 0xf7, 0x04, 0xd4, 0x11, 0x00, 0x00,
    0x04, 0x5b, 0xff, 0xfe, 0x10, 0x49, 0x0a, 0xbf, 0xff, 0xff, 0xf3, 0x11,
    0x09, 0x6b, 0xfc, 0x86, 0x02, 0x05, 0x55, 0x55, 0x55, 0xe9, 0xd1, 0x38,
    0x90, 0x5b, 0xff, 0xfb, 0x01, 0x01, 0xef, 0xff, 0xff, 0x55, 0xd1, 0x11,
    0x0c, 0x6c, 0x40, 0x69, 0x0d, 0x14, 0xd5, 0x7c, 0x4a, 0xf9, 0x01, 0x03,
    0x01, 0xb0, 0x19, 0x56, 0x1f, 0x1c, 0xc0, 0x69, 0x09, 0x06, 0xc6, 0xf6,
    0xaa, 0x01, 0x06, 0x01, 0x80, 0x19, 0x3f, 0x1c, 0xfa, 0xb0, 0x69, 0x05,
    0x06, 0xc6, 0xf4, 0x02, 0x22, 0x00, 0x41, 0x08, 0x01, 0x50, 0x01, 0x22,
    0x20, 0x7f, 0x1d, 0x06, 0xb4, 0x00, 0x00, 0x00, 0xcf, 0x05, 0x6d, 0xff,
    0x04, 0xfe, 0xff, 0xfe, 0x10, 0x0b, 0x01, 0x20, 0x0c, 0x81, 0x3f, 0xff,
    0xf9, 0x00, 0x00, 0x00, 0x5f, 0x8f, 0x80, 0x46, 0xfc, 0x00, 0x1f, 0xff,
    0xff, 0xfe, 0x10, 0x40, 0x1e, 0x3f, 0xff, 0xf9, 0x00, 0x00, 0x00, 0x08,
    0xc0, 0x8f, 0x46, 0xfa, 0x00, 0x3f, 0xff, 0xff, 0xfb, 0xc0, 0xda, 0x2e,
    0xf9, 0x00, 0x00, 0x00, 0x00, 0x9f, 0xc0, 0x87, 0x3d, 0xf6, 0x00, 0x5f,
    0xff, 0xff, 0xf8, 0x20, 0x00, 0x6f, 0x47, 0xff, 0xf9, 0x00, 0x00, 0x00,
    0x30, 0x00, 0x08, 0x87, 0x3d, 0xf3, 0x00, 0x9f, 0xff, 0x30, 0xff, 0xf6,
    0xda, 0x36, 0xf9, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x6f, 0x7f, 0x34,
    0xf1, 0x00, 0xcf, 0x18, 0xff, 0xff, 0xf3, 0xda, 0x3e, 0xf9, 0x00, 0x00,
    0x0c, 0x00, 0x00, 0x00, 0x05, 0x7f, 0x34, 0xc0, 0x01, 0x0c, 0xef, 0xff,
    0xff, 0xd0, 0xda, 0x3e, 0xf9, 0x00, 0x2c, 0x00, 0x00, 0xe9, 0x6f, 0x77,
    0x2b, 0x90, 0x02, 0x90, 0x01, 0xb0, 0x03, 0x5f, 0xff, 0xff, 0xf9, 0x00,
    0x2c, 0x00, 0x00, 0xe9, 0x09, 0x6f, 0x23, 0x60, 0x06, 0xb0, 0x01, 0x80,
    0xda, 0x46, 0xf9, 0x00, 0x00, 0x00, 0x99, 0xe9, 0x01, 0xdf, 0x67, 0x1a,
    0x30, 0x09, 0x01, 0x61, 0x50, 0xda, 0x4e, 0xf9, 0x00, 0x00, 0x00, 0xe9,
    0x31, 0x00, 0x7f, 0x67, 0x19, 0xfe, 0x10, 0x0b, 0x01, 0x61, 0x20, 0xda,
    0x4e, 0xf9, 0x00, 0x00, 0x00, 0xe9, 0x30, 0x00, 0x2f, 0x67, 0x19, 0xfc,
    0x00, 0x1e, 0xff, 0x08, 0xff, 0xfd, 0x10, 0x0c, 0x67, 0xff, 0xff, 0xf9,
    0x13, 0x00, 0x00, 0x00, 0xe9, 0x00, 0x0a, 0x67, 0x5b, 0x00, 0x3f, 0xee,
    0xee, 0xfb, 0x00, 0x05, 0xee, 0xed, 0x84, 0x6f, 0xf9, 0x00, 0x00, 0x00,
    0xe9, 0x00, 0x05, 0xc0, 0x77, 0x29, 0xf6, 0x00, 0x11, 0x11, 0x11, 0x11,
    0x08, 0x00, 0x00, 0x01, 0x04, 0x57, 0xf9, 0x00, 0x00, 0x44, 0x00, 0xe9,
    0x00, 0x00, 0xcf, 0x6f, 0xff, 0xff, 0x52, 0xf2, 0x5e, 0x06, 0x5e, 0xc8,
    0x42, 0x6e, 0x6f, 0x85, 0x6a, 0xfc, 0x42, 0x25, 0xdf, 0x29, 0xe1, 0x5e,
    0x42, 0x0a, 0x5a, 0xff, 0xff, 0xfd, 0x72, 0x7e, 0x00, 0x21, 0x00, 0x0c,
    0x6a, 0x90, 0x00, 0x00, 0x1c, 0x29, 0x63, 0xc0, 0x5f, 0x5a, 0xff, 0xfc,
    0x40, 0x86, 0x41, 0x50, 0x02, 0x01, 0xf8, 0x01, 0x01, 0xef, 0xff, 0xff,
    0x51, 0xc0, 0x46, 0x1e, 0x59, 0xff, 0xfb, 0x20, 0x8e, 0x84, 0x4b, 0x3f,
    0xff, 0xff, 0x90, 0x02, 0x5f, 0xff, 0x20, 0xff, 0xe1, 0x3e, 0x4f, 0xff,
    0xff, 0xff, 0xfd, 0x62, 0x30, 0x96, 0x54, 0x01, 0x6b, 0xb5, 0x0b, 0x0b,
    0x10, 0xff, 0xff, 0xf6, 0x36, 0x7f, 0xff, 0xff, 0xff, 0x74, 0x70, 0x9e,
    0x5e, 0x1d, 0x03, 0x27, 0x00, 0x00, 0x0e, 0x9f, 0xff, 0xff, 0xd2, 0x07,
    0xbf, 0x1d, 0xbf, 0x00, 0xff, 0xff, 0xfd, 0x96, 0x54, 0x33, 0x33, 0x33,
    0x03, 0x33, 0x32, 0xcf, 0xff, 0xfc, 0x10, 0x07, 0xbf, 0x86, 0x75, 0x4f,
    0xff, 0xff, 0xff, 0xe9, 0xd4, 0xb0, 0xee, 0x07, 0x07, 0x76, 0x0b, 0x02,
    0xe2, 0xc1, 0xfc, 0xee, 0x07, 0x07, 0x77, 0x05, 0x01, 0xe9, 0xd3, 0xe1,
    0xe0, 0x07, 0x07, 0x77, 0x00, 0xcf, 0xff, 0xff, 0xff, 0xdc, 0xe9, 0xd2,
    0x40, 0x07, 0x07, 0x77, 0x00, 0x6f, 0x1b, 0xff, 0xff, 0xff, 0xe9, 0xd1,
    0xf9, 0x07, 0x07, 0x81, 0x77, 0x00, 0x00, 0x1d, 0xff, 0xff, 0xff, 0xe9,
    0xb8, 0xd1, 0xf2, 0x07, 0x07, 0x77, 0x00, 0x00, 0x06, 0x1b, 0xff, 0xff,
    0xff, 0xe9, 0xd1, 0x90, 0x07, 0x07, 0x80, 0x77, 0x00, 0x00, 0x01, 0xdf,
    0xff, 0xff, 0xff, 0x8f, 0xe9, 0xff, 0xff, 0x40, 0x07, 0x07, 0x77, 0x29,
    0x08, 0x6f, 0xff, 0xff, 0xff, 0xe9, 0xff, 0xfe, 0x10, 0xf0, 0x07, 0x07,
    0x77, 0x29, 0x0c, 0xff, 0xff, 0xff, 0x9e, 0xe9, 0xff, 0xfb, 0x07, 0x07,
    0x77, 0x2a, 0x03, 0x13, 0xff, 0xff, 0xff, 0xe9, 0xff, 0xfb, 0x07, 0x07,
    0xc2, 0x77, 0x2b, 0x8f, 0xff, 0xff, 0xff, 0xe9, 0xfb, 0xf0, 0x07, 0x07,
    0x77, 0x2b, 0x0a, 0xff, 0xff, 0xff, 0xbc, 0xe9, 0xfc, 0x07, 0x07, 0x77,
    0x2c, 0xcf, 0xff, 0x03, 0xff, 0xff, 0xff, 0xff, 0xfd, 0x10, 0x07, 0x07,
    0xc2, 0x77, 0x2b, 0x0c, 0xff, 0xff, 0xff, 0xe9, 0x30, 0xf0, 0x07, 0x07,
    0x77, 0x2c, 0xaf, 0xff, 0xff, 0xff, 0x1e, 0xff, 0xff, 0x60, 0x07, 0x07,
    0x77, 0x2c, 0x05, 0x03, 0xff, 0xff, 0xff, 0xff, 0xff, 0xc0, 0x07, 0x07,
    0xc0, 0x77, 0x2d, 0x18, 0xff, 0xff, 0xff, 0xff, 0xf2, 0xf0, 0x07, 0x07,
    0x77, 0x2e, 0x14, 0x79, 0xa9, 0x86, 0x7f, 0x20, 0x07, 0x07, 0x77, 0x2f,
    0x07, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07,
};

const uint8_t btn100x50[] =
{
    IMAGE_FMT_8BPP_COMP,
    100, 0,
    50, 0,

    139,
    0x00, 0x00, 0x00,
    0x08, 0x08, 0x08,
    0x0a, 0x0a, 0x0a,
    0x0f, 0x0f, 0x0f,
    0x13, 0x13, 0x13,
    0x17, 0x17, 0x17,
    0x23, 0x23, 0x23,
    0x26, 0x26, 0x26,
    0x29, 0x29, 0x29,
    0x32, 0x32, 0x32,
    0x3b, 0x3b, 0x3b,
    0x3e, 0x3e, 0x3e,
    0x40, 0x40, 0x40,
    0x44, 0x44, 0x44,
    0x45, 0x45, 0x45,
    0x4d, 0x4d, 0x4d,
    0x55, 0x55, 0x55,
    0x57, 0x57, 0x57,
    0x59, 0x59, 0x59,
    0x5a, 0x5a, 0x5a,
    0x5e, 0x5e, 0x5e,
    0x67, 0x67, 0x67,
    0x6d, 0x6d, 0x6d,
    0x70, 0x70, 0x70,
    0x75, 0x75, 0x75,
    0x77, 0x77, 0x77,
    0x78, 0x78, 0x78,
    0x7a, 0x7a, 0x7a,
    0x7c, 0x7c, 0x7c,
    0x7e, 0x7e, 0x7e,
    0x81, 0x81, 0x81,
    0x83, 0x83, 0x83,
    0x84, 0x84, 0x84,
    0x85, 0x85, 0x85,
    0x89, 0x89, 0x89,
    0x8a, 0x8a, 0x8a,
    0x8b, 0x8b, 0x8b,
    0x8c, 0x8c, 0x8c,
    0x8d, 0x8d, 0x8d,
    0x91, 0x91, 0x91,
    0x93, 0x93, 0x93,
    0x95, 0x95, 0x95,
    0x96, 0x96, 0x96,
    0x99, 0x99, 0x99,
    0x9a, 0x9a, 0x9a,
    0x9b, 0x9b, 0x9b,
    0x9c, 0x9c, 0x9c,
    0x9d, 0x9d, 0x9d,
    0x9e, 0x9e, 0x9e,
    0x9f, 0x9f, 0x9f,
    0xa0, 0xa0, 0xa0,
    0xa1, 0xa1, 0xa1,
    0xa3, 0xa3, 0xa3,
    0xa4, 0xa4, 0xa4,
    0xa5, 0xa5, 0xa5,
    0xa6, 0xa6, 0xa6,
    0xa7, 0xa7, 0xa7,
    0xa8, 0xa8, 0xa8,
    0xa9, 0xa9, 0xa9,
    0xaa, 0xaa, 0xaa,
    0xab, 0xab, 0xab,
    0xac, 0xac, 0xac,
    0xad, 0xad, 0xad,
    0xae, 0xae, 0xae,
    0xb0, 0xb0, 0xb0,
    0xb1, 0xb1, 0xb1,
    0xb2, 0xb2, 0xb2,
    0xb4, 0xb4, 0xb4,
    0xb5, 0xb5, 0xb5,
    0xb6, 0xb6, 0xb6,
    0xb7, 0xb7, 0xb7,
    0xb8, 0xb8, 0xb8,
    0xba, 0xba, 0xba,
    0xbb, 0xbb, 0xbb,
    0xbc, 0xbc, 0xbc,
    0xbd, 0xbd, 0xbd,
    0xbe, 0xbe, 0xbe,
    0xbf, 0xbf, 0xbf,
    0xc0, 0xc0, 0xc0,
    0xc1, 0xc1, 0xc1,
    0xc2, 0xc2, 0xc2,
    0xc3, 0xc3, 0xc3,
    0xc4, 0xc4, 0xc4,
    0xc5, 0xc5, 0xc5,
    0xc6, 0xc6, 0xc6,
    0xc7, 0xc7, 0xc7,
    0xc8, 0xc8, 0xc8,
    0xc9, 0xc9, 0xc9,
    0xca, 0xca, 0xca,
    0xcb, 0xcb, 0xcb,
    0xcc, 0xcc, 0xcc,
    0xcd, 0xcd, 0xcd,
    0xce, 0xce, 0xce,
    0xcf, 0xcf, 0xcf,
    0xd0, 0xd0, 0xd0,
    0xd1, 0xd1, 0xd1,
    0xd2, 0xd2, 0xd2,
    0xd3, 0xd3, 0xd3,
    0xd4, 0xd4, 0xd4,
    0xd5, 0xd5, 0xd5,
    0xd6, 0xd6, 0xd6,
    0xd7, 0xd7, 0xd7,
    0xd8, 0xd8, 0xd8,
    0xd9, 0xd9, 0xd9,
    0xda, 0xda, 0xda,
    0xdb, 0xdb, 0xdb,
    0xdc, 0xdc, 0xdc,
    0xdd, 0xdd, 0xdd,
    0xde, 0xde, 0xde,
    0xdf, 0xdf, 0xdf,
    0xe0, 0xe0, 0xe0,
    0xe1, 0xe1, 0xe1,
    0xe2, 0xe2, 0xe2,
    0xe3, 0xe3, 0xe3,
    0xe4, 0xe4, 0xe4,
    0xe5, 0xe5, 0xe5,
    0xe6, 0xe6, 0xe6,
    0xe7, 0xe7, 0xe7,
    0xe8, 0xe8, 0xe8,
    0xe9, 0xe9, 0xe9,
    0xea, 0xea, 0xea,
    0xeb, 0xeb, 0xeb,
    0xec, 0xec, 0xec,
    0xed, 0xed, 0xed,
    0xee, 0xee, 0xee,
    0xef, 0xef, 0xef,
    0xf0, 0xf0, 0xf0,
    0xf1, 0xf1, 0xf1,
    0xf2, 0xf2, 0xf2,
    0xf3, 0xf3, 0xf3,
    0xf4, 0xf4, 0xf4,
    0xf5, 0xf5, 0xf5,
    0xf6, 0xf6, 0xf6,
    0xf7, 0xf7, 0xf7,
    0xf8, 0xf8, 0xf8,
    0xf9, 0xf9, 0xf9,
    0xfa, 0xfa, 0xfa,
    0xfb, 0xfb, 0xfb,
    0xfd, 0xfd, 0xfd,
    0xff, 0xff, 0xff,

    0x81, 0x03, 0x07, 0x3d, 0x7b, 0x8b, 0x8b, 0x8b, 0xe9, 0xff, 0xd4, 0xa7,
    0x5f, 0x17, 0x07, 0x07, 0x07, 0x07, 0x81, 0x07, 0x6f, 0x3d, 0x08, 0x00,
    0x00, 0x00, 0xe9, 0xbf, 0xd1, 0x3c, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07,
    0xf0, 0x07, 0x07, 0x07, 0x06, 0x70, 0x2f, 0x00, 0x00, 0x4f, 0x00, 0xe9,
    0x0d, 0x61, 0x07, 0x07, 0x77, 0x2f, 0xfc, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x05, 0x85, 0x7f, 0x00, 0x74, 0x71, 0x3b, 0x0b, 0x00, 0x00, 0x00, 0x00,
    0x41, 0x5e, 0x06, 0x8a, 0x89, 0x88, 0x88, 0x88, 0xe9, 0xff, 0xd4, 0xa7,
    0x5f, 0x17, 0x07, 0x07, 0x07, 0x07, 0x00, 0x87, 0x85, 0x82, 0x7d, 0x7a,
    0x7a, 0x78, 0x70, 0x00, 0x59, 0x2d, 0x00, 0x00, 0x00, 0x3c, 0x8b, 0x8b,
    0x40, 0x8b, 0xe9, 0x8a, 0x86, 0x80, 0x7b, 0x78, 0x76, 0x3f, 0x76, 0x76,
    0xe9, 0xd4, 0xa7, 0x5f, 0x17, 0x07, 0xe0, 0x07, 0x07, 0x07, 0x75, 0x74,
    0x72, 0x72, 0x73, 0x00, 0x73, 0x71, 0x6b, 0x66, 0x54, 0x16, 0x00, 0x07,
    0x10, 0x8b, 0x8b, 0x8b, 0xe9, 0x86, 0x7f, 0x78, 0x74, 0x03, 0x6e, 0x6a,
    0x68, 0x67, 0x67, 0x67, 0xe9, 0xd4, 0xfe, 0xa7, 0x5f, 0x17, 0x07, 0x07,
    0x07, 0x07, 0x68, 0x00, 0x69, 0x6b, 0x6c, 0x6c, 0x6a, 0x69, 0x63, 0x59,
    0x00, 0x35, 0x05, 0x3c, 0x8b, 0x8b, 0x8b, 0x8b, 0x8b, 0x00, 0x84, 0x7c,
    0x74, 0x6d, 0x68, 0x66, 0x63, 0x62, 0x3f, 0x62, 0x62, 0xe9, 0xd4, 0xa7,
    0x5f, 0x17, 0x07, 0xe0, 0x07, 0x07, 0x07, 0x62, 0x62, 0x63, 0x65, 0x66,
    0x00, 0x67, 0x67, 0x65, 0x61, 0x5a, 0x48, 0x12, 0x70, 0x00, 0x8b, 0x8b,
    0x8b, 0x8b, 0x84, 0x7b, 0x72, 0x6b, 0x3f, 0x66, 0x63, 0x07, 0xbf, 0x77,
    0x2f, 0x07, 0x07, 0xe0, 0x07, 0x07, 0x07, 0x63, 0x64, 0x64, 0x63, 0x60,
    0x00, 0x57, 0x48, 0x1e, 0x7e, 0x8a, 0x8b, 0x8b, 0x86, 0x07, 0x7d, 0x73,
    0x6b, 0x65, 0x63, 0x07, 0xbf, 0x77, 0xfc, 0x2f, 0x07, 0x07, 0x07, 0x07,
    0x07, 0x62, 0x62, 0x00, 0x63, 0x63, 0x62, 0x5e, 0x56, 0x49, 0x2e, 0x84,
    0x00, 0x81, 0x8b, 0x8a, 0x81, 0x76, 0x6c, 0x66, 0x63, 0xff, 0x07, 0xbf,
    0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0xc0, 0x07, 0x03, 0x61, 0x5d, 0x56,
    0x4b, 0x35, 0x80, 0x01, 0x79, 0x8a, 0x85, 0x7c, 0x71, 0x68, 0x63, 0x07,
    0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x04, 0x61,
    0x5e, 0x57, 0x4a, 0x2d, 0x7d, 0x75, 0x07, 0x86, 0x80, 0x77, 0x6c, 0x65,
    0x07, 0x07, 0x77, 0xfe, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x5f,
    0x00, 0x56, 0x45, 0x28, 0x7d, 0x73, 0x83, 0x7c, 0x72, 0x3f, 0x69, 0x63,
    0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x06, 0x5f,
    0x54, 0x41, 0x26, 0x03, 0x7d, 0x73, 0x82, 0x7b, 0x70, 0x67, 0x07, 0x07,
    0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x5e, 0x52,
    0x3f, 0x25, 0x7d, 0x73, 0x82, 0x7a, 0x3f, 0x70, 0x66, 0x07, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24,
    0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07, 0xff, 0x77, 0x2f,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d,
    0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07,
    0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73,
    0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07, 0xff, 0x77, 0x2f, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a,
    0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07,
    0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f,
    0x66, 0x07, 0x07, 0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66,
    0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e,
    0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07,
    0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x5e, 0x51,
    0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24,
    0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07, 0xff, 0x77, 0x2f,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d,
    0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07,
    0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73,
    0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07, 0xff, 0x77, 0x2f, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a,
    0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07,
    0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f,
    0x66, 0x07, 0x07, 0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66,
    0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e,
    0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07,
    0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x5e, 0x51,
    0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24,
    0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07, 0xff, 0x77, 0x2f,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d,
    0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07,
    0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73,
    0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07, 0xff, 0x77, 0x2f, 0x07, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a,
    0x3f, 0x6f, 0x66, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07,
    0x07, 0x07, 0x5e, 0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f,
    0x66, 0x07, 0x07, 0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x00, 0x5e, 0x51, 0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x66,
    0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07, 0x5e,
    0x51, 0x3e, 0x24, 0x03, 0x7d, 0x73, 0x82, 0x7a, 0x6f, 0x66, 0x07, 0x07,
    0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x07, 0x00, 0x5e, 0x51,
    0x3e, 0x24, 0x7d, 0x73, 0x82, 0x7a, 0x3f, 0x6f, 0x65, 0x07, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x07, 0x5d, 0x51, 0x3e, 0x24,
    0x03, 0x7d, 0x73, 0x81, 0x77, 0x6d, 0x65, 0x07, 0x07, 0xff, 0x77, 0x2f,
    0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x00, 0x61, 0x5b, 0x4e, 0x3d, 0x24,
    0x7c, 0x72, 0x7d, 0x1f, 0x73, 0x6a, 0x65, 0x07, 0x07, 0x77, 0x2f, 0x07,
    0xf8, 0x07, 0x07, 0x07, 0x07, 0x06, 0x5f, 0x57, 0x49, 0x00, 0x3a, 0x23,
    0x6e, 0x70, 0x76, 0x6c, 0x67, 0x65, 0x7f, 0x63, 0x07, 0x07, 0x77, 0x2f,
    0x07, 0x07, 0x07, 0xe0, 0x07, 0x07, 0x04, 0x61, 0x5c, 0x51, 0x44, 0x34,
    0x01, 0x1d, 0x52, 0x6b, 0x6a, 0x67, 0x66, 0x65, 0x07, 0xff, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x04, 0x61, 0x5e, 0x57, 0x4c,
    0x3e, 0x2b, 0x15, 0x00, 0x2a, 0x64, 0x60, 0x63, 0x64, 0x62, 0x60, 0x61,
    0x7f, 0x61, 0x07, 0xbf, 0x77, 0x2f, 0x07, 0x07, 0x07, 0xc0, 0x07, 0x07,
    0x62, 0x62, 0x61, 0x5f, 0x59, 0x4f, 0x00, 0x44, 0x37, 0x26, 0x0d, 0x06,
    0x47, 0x4b, 0x5f, 0x03, 0x5e, 0x5c, 0x5e, 0x5e, 0x5f, 0x61, 0x07, 0xbf,
    0xfe, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x61, 0x00, 0x5e, 0x59,
    0x50, 0x46, 0x3b, 0x2b, 0x1a, 0x02, 0x00, 0x00, 0x1e, 0x43, 0x51, 0x54,
    0x57, 0x58, 0x59, 0x0f, 0x5b, 0x5d, 0x5f, 0x61, 0x07, 0xbf, 0x77, 0x2f,
    0xf8, 0x07, 0x07, 0x07, 0x07, 0x03, 0x61, 0x5e, 0x5c, 0x00, 0x56, 0x4e,
    0x46, 0x3c, 0x2f, 0x22, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x20, 0x31, 0x48,
    0x4d, 0x4f, 0x52, 0x00, 0x53, 0x55, 0x57, 0x5a, 0x5c, 0x5d, 0x5d, 0x5d,
    0xff, 0xe9, 0xd4, 0xa7, 0x5f, 0x17, 0x07, 0x07, 0x07, 0x80, 0x06, 0x5c,
    0x5c, 0x59, 0x55, 0x4f, 0x49, 0x42, 0x00, 0x39, 0x2d, 0x24, 0x11, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x09, 0x18, 0x31, 0x3e, 0x44, 0x45, 0x47, 0x49,
    0x03, 0x4c, 0x4e, 0x4c, 0x4b, 0x4b, 0x4b, 0xe9, 0xd4, 0xfe, 0xa7, 0x5f,
    0x17, 0x07, 0x07, 0x07, 0x07, 0x4a, 0x00, 0x49, 0x46, 0x40, 0x39, 0x33,
    0x29, 0x21, 0x10, 0x08, 0x04, 0x00, 0x00, 0x00, 0xe9, 0x0f, 0x1b, 0x2c,
    0x00, 0x32, 0x36, 0x3b, 0x3c, 0x38, 0x34, 0x32, 0x32, 0x1f, 0x31, 0x31,
    0x31, 0xe9, 0xd4, 0xa7, 0x5f, 0x17, 0xf0, 0x07, 0x07, 0x07, 0x05, 0x32,
    0x32, 0x30, 0x2c, 0x01, 0x27, 0x20, 0x17, 0x0c, 0x00, 0x00, 0x00, 0xe9,
    0x80, 0xd1, 0x03, 0x0a, 0x14, 0x1d, 0x22, 0x1f, 0x1c, 0x0f, 0x19, 0x18,
    0x18, 0x18, 0xe9, 0xd4, 0xa7, 0x5f, 0xfc, 0x17, 0x07, 0x07, 0x07, 0x07,
    0x01, 0x16, 0x13, 0x00, 0x0a, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
};

const uint8_t btn100x50_pressed[] =
{
    IMAGE_FMT_8BPP_COMP,
    100, 0,
    50, 0,

    145,
    0x00, 0x00, 0x00,
    0x05, 0x05, 0x05,
    0x07, 0x07, 0x07,
    0x0a, 0x0a, 0x0a,
    0x0d, 0x0d, 0x0d,
    0x0f, 0x0f, 0x0f,
    0x18, 0x18, 0x18,
    0x19, 0x19, 0x19,
    0x1b, 0x1b, 0x1b,
    0x23, 0x23, 0x23,
    0x2b, 0x2b, 0x2b,
    0x2c, 0x2c, 0x2c,
    0x2f, 0x2f, 0x2f,
    0x30, 0x30, 0x30,
    0x32, 0x32, 0x32,
    0x33, 0x33, 0x33,
    0x38, 0x38, 0x38,
    0x3f, 0x3f, 0x3f,
    0x40, 0x40, 0x40,
    0x41, 0x41, 0x41,
    0x43, 0x43, 0x43,
    0x46, 0x46, 0x46,
    0x4c, 0x4c, 0x4c,
    0x50, 0x50, 0x50,
    0x52, 0x52, 0x52,
    0x53, 0x53, 0x53,
    0x57, 0x57, 0x57,
    0x58, 0x58, 0x58,
    0x59, 0x59, 0x59,
    0x5b, 0x5b, 0x5b,
    0x5c, 0x5c, 0x5c,
    0x5e, 0x5e, 0x5e,
    0x5f, 0x5f, 0x5f,
    0x60, 0x60, 0x60,
    0x62, 0x62, 0x62,
    0x63, 0x63, 0x63,
    0x66, 0x66, 0x66,
    0x67, 0x67, 0x67,
    0x68, 0x68, 0x68,
    0x69, 0x69, 0x69,
    0x6c, 0x6c, 0x6c,
    0x6d, 0x6d, 0x6d,
    0x6f, 0x6f, 0x6f,
    0x72, 0x72, 0x72,
    0x73, 0x73, 0x73,
    0x74, 0x74, 0x74,
    0x75, 0x75, 0x75,
    0x76, 0x76, 0x76,
    0x77, 0x77, 0x77,
    0x78, 0x78, 0x78,
    0x79, 0x79, 0x79,
    0x7a, 0x7a, 0x7a,
    0x7b, 0x7b, 0x7b,
    0x7c, 0x7c, 0x7c,
    0x7d, 0x7d, 0x7d,
    0x7e, 0x7e, 0x7e,
    0x7f, 0x7f, 0x7f,
    0x80, 0x80, 0x80,
    0x81, 0x81, 0x81,
    0x82, 0x82, 0x82,
    0x83, 0x83, 0x83,
    0x84, 0x84, 0x84,
    0x85, 0x85, 0x85,
    0x86, 0x86, 0x86,
    0x87, 0x87, 0x87,
    0x88, 0x88, 0x88,
    0x89, 0x89, 0x89,
    0x8b, 0x8b, 0x8b,
    0x8c, 0x8c, 0x8c,
    0x8d, 0x8d, 0x8d,
    0x8e, 0x8e, 0x8e,
    0x8f, 0x8f, 0x8f,
    0x90, 0x90, 0x90,
    0x91, 0x91, 0x91,
    0x92, 0x92, 0x92,
    0x93, 0x93, 0x93,
    0x94, 0x94, 0x94,
    0x95, 0x95, 0x95,
    0x96, 0x96, 0x96,
    0x97, 0x97, 0x97,
    0x98, 0x98, 0x98,
    0x99, 0x99, 0x99,
    0x9a, 0x9a, 0x9a,
    0x9b, 0x9b, 0x9b,
    0x9c, 0x9c, 0x9c,
    0x9d, 0x9d, 0x9d,
    0x9e, 0x9e, 0x9e,
    0x9f, 0x9f, 0x9f,
    0xa0, 0xa0, 0xa0,
    0xa1, 0xa1, 0xa1,
    0xa2, 0xa2, 0xa2,
    0xa3, 0xa3, 0xa3,
    0xa4, 0xa4, 0xa4,
    0xa5, 0xa5, 0xa5,
    0xa6, 0xa6, 0xa6,
    0xa7, 0xa7, 0xa7,
    0xa8, 0xa8, 0xa8,
    0xa9, 0xa9, 0xa9,
    0xaa, 0xaa, 0xaa,
    0xab, 0xab, 0xab,
    0xac, 0xac, 0xac,
    0xad, 0xad, 0xad,
    0xae, 0xae, 0xae,
    0xaf, 0xaf, 0xaf,
    0xb0, 0xb0, 0xb0,
    0xb1, 0xb1, 0xb1,
    0xb2, 0xb2, 0xb2,
    0xb3, 0xb3, 0xb3,
    0xb4, 0xb4, 0xb4,
    0xb5, 0xb5, 0xb5,
    0xb6, 0xb6, 0xb6,
    0xb7, 0xb7, 0xb7,
    0xb8, 0xb8, 0xb8,
    0xb9, 0xb9, 0xb9,
    0xba, 0xba, 0xba,
    0xbb, 0xbb, 0xbb,
    0xbc, 0xbc, 0xbc,
    0xbd, 0xbd, 0xbd,
    0xbe, 0xbe, 0xbe,
    0xbf, 0xbf, 0xbf,
    0xc0, 0xc0, 0xc0,
    0xc2, 0xc2, 0xc2,
    0xc3, 0xc3, 0xc3,
    0xc4, 0xc4, 0xc4,
    0xc5, 0xc5, 0xc5,
    0xc6, 0xc6, 0xc6,
    0xc7, 0xc7, 0xc7,
    0xc8, 0xc8, 0xc8,
    0xc9, 0xc9, 0xc9,
    0xca, 0xca, 0xca,
    0xcb, 0xcb, 0xcb,
    0xcc, 0xcc, 0xcc,
    0xcd, 0xcd, 0xcd,
    0xce, 0xce, 0xce,
    0xcf, 0xcf, 0xcf,
    0xd0, 0xd0, 0xd0,
    0xd2, 0xd2, 0xd2,
    0xd3, 0xd3, 0xd3,
    0xd4, 0xd4, 0xd4,
    0xd6, 0xd6, 0xd6,
    0xd9, 0xd9, 0xd9,
    0xda, 0xda, 0xda,
    0xdc, 0xdc, 0xdc,
    0xdd, 0xdd, 0xdd,
    0xde, 0xde, 0xde,
    0xdf, 0xdf, 0xdf,

    0x80, 0x03, 0x01, 0x0a, 0x14, 0x18, 0x1a, 0x1b, 0x1a, 0x3f, 0x1a, 0x1a,
    0xe9, 0xd4, 0xa7, 0x5f, 0x17, 0x07, 0xe0, 0x07, 0x07, 0x07, 0x1a, 0x1c,
    0x1e, 0x22, 0x24, 0x01, 0x1f, 0x15, 0x0a, 0x03, 0x00, 0x00, 0x00, 0xe9,
    0x80, 0xd1, 0x0c, 0x19, 0x23, 0x28, 0x2c, 0x2f, 0x30, 0x3f, 0x30, 0x30,
    0xe9, 0xd4, 0xa7, 0x5f, 0x17, 0x07, 0xe0, 0x07, 0x07, 0x07, 0x30, 0x31,
    0x33, 0x36, 0x39, 0x00, 0x38, 0x34, 0x31, 0x2c, 0x1d, 0x10, 0x00, 0x00,
    0x40, 0x00, 0xe9, 0x04, 0x11, 0x23, 0x2a, 0x31, 0x36, 0x01, 0x3c, 0x41,
    0x43, 0x44, 0x45, 0x45, 0x45, 0xe9, 0xff, 0xd4, 0xa7, 0x5f, 0x17, 0x07,
    0x07, 0x07, 0x07, 0x00, 0x46, 0x47, 0x46, 0x43, 0x42, 0x41, 0x40, 0x3a,
    0x00, 0x2f, 0x1a, 0x09, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x25, 0x2d,
    0x36, 0x3e, 0x43, 0x48, 0x4c, 0x50, 0x0f, 0x51, 0x52, 0x52, 0x52, 0xe9,
    0xd4, 0xa7, 0x5f, 0xf8, 0x17, 0x07, 0x07, 0x07, 0x07, 0x52, 0x50, 0x4e,
    0x00, 0x4c, 0x4b, 0x4a, 0x48, 0x46, 0x43, 0x2f, 0x22, 0x00, 0x00, 0x00,
    0x00, 0x0f, 0x24, 0x2e, 0x39, 0x41, 0x00, 0x47, 0x4d, 0x51, 0x53, 0x55,
    0x56, 0x56, 0x56, 0xff, 0xe9, 0xd4, 0xa7, 0x5f, 0x17, 0x07, 0x07, 0x07,
    0x80, 0x07, 0x56, 0x56, 0x55, 0x54, 0x52, 0x51, 0x4f, 0x00, 0x4f, 0x4e,
    0x4b, 0x49, 0x3f, 0x20, 0x00, 0x02, 0x00, 0x1c, 0x2b, 0x38, 0x42, 0x49,
    0x4f, 0x53, 0x55, 0xff, 0x07, 0xbf, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07,
    0x80, 0x07, 0x55, 0x54, 0x53, 0x53, 0x52, 0x53, 0x54, 0x00, 0x45, 0x42,
    0x06, 0x0e, 0x27, 0x35, 0x40, 0x48, 0x3f, 0x4f, 0x54, 0x07, 0xbf, 0x77,
    0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x02, 0x55, 0x55, 0x56, 0x57,
    0x00, 0x57, 0x54, 0x58, 0x29, 0x16, 0x2b, 0x3a, 0x45, 0x3f, 0x4e, 0x53,
    0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x05, 0x58,
    0x59, 0x5a, 0x5c, 0x00, 0x5d, 0x4a, 0x1f, 0x32, 0x40, 0x49, 0x52, 0x55,
    0xff, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0xc0, 0x07, 0x04,
    0x57, 0x58, 0x5a, 0x5e, 0x65, 0x60, 0x03, 0x5f, 0x24, 0x37, 0x44, 0x4e,
    0x54, 0x07, 0x07, 0xff, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06,
    0x00, 0x58, 0x5c, 0x63, 0x6a, 0x62, 0x69, 0x26, 0x39, 0x1f, 0x47, 0x51,
    0x55, 0x07, 0x07, 0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x06,
    0x58, 0x5e, 0x66, 0x01, 0x6d, 0x63, 0x6a, 0x26, 0x3a, 0x49, 0x52, 0x07,
    0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x07, 0x58,
    0x5f, 0x68, 0x6d, 0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x49, 0x53, 0x07, 0x07,
    0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x59, 0x60, 0x68,
    0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07, 0xff, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x07, 0x59, 0x60, 0x68, 0x6e,
    0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07, 0x77, 0x2f, 0x07,
    0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x59, 0x60, 0x68, 0x01, 0x6e, 0x63,
    0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07, 0xff, 0x07, 0x77, 0x2f, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x80, 0x07, 0x59, 0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26,
    0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07, 0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x59, 0x60, 0x68, 0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a,
    0x4a, 0x53, 0x07, 0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x80, 0x07, 0x59, 0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a,
    0x53, 0x07, 0x07, 0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x59, 0x60, 0x68, 0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07,
    0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x07, 0x59,
    0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07,
    0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x59, 0x60, 0x68,
    0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07, 0xff, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x07, 0x59, 0x60, 0x68, 0x6e,
    0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07, 0x77, 0x2f, 0x07,
    0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x59, 0x60, 0x68, 0x01, 0x6e, 0x63,
    0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07, 0xff, 0x07, 0x77, 0x2f, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x80, 0x07, 0x59, 0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26,
    0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07, 0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x59, 0x60, 0x68, 0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a,
    0x4a, 0x53, 0x07, 0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x80, 0x07, 0x59, 0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a,
    0x53, 0x07, 0x07, 0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x59, 0x60, 0x68, 0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07,
    0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x07, 0x59,
    0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07,
    0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x59, 0x60, 0x68,
    0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07, 0xff, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x07, 0x59, 0x60, 0x68, 0x6e,
    0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07, 0x77, 0x2f, 0x07,
    0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x59, 0x60, 0x68, 0x01, 0x6e, 0x63,
    0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07, 0xff, 0x07, 0x77, 0x2f, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x80, 0x07, 0x59, 0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26,
    0x1f, 0x3a, 0x4a, 0x53, 0x07, 0x07, 0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07,
    0x07, 0x07, 0x07, 0x59, 0x60, 0x68, 0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a,
    0x4a, 0x53, 0x07, 0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x80, 0x07, 0x59, 0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26, 0x1f, 0x3a, 0x4a,
    0x53, 0x07, 0x07, 0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07,
    0x59, 0x60, 0x68, 0x01, 0x6e, 0x63, 0x6a, 0x26, 0x3a, 0x4a, 0x53, 0x07,
    0xff, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x07, 0x59,
    0x60, 0x68, 0x6e, 0x63, 0x6a, 0x26, 0x1f, 0x3b, 0x4a, 0x53, 0x07, 0x07,
    0x77, 0x2f, 0x07, 0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x59, 0x61, 0x68,
    0x01, 0x6e, 0x63, 0x6a, 0x27, 0x3d, 0x4b, 0x54, 0x07, 0xff, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0x07, 0x07, 0x07, 0x80, 0x06, 0x57, 0x5b, 0x62, 0x6a,
    0x6e, 0x63, 0x6a, 0x0f, 0x29, 0x41, 0x4d, 0x53, 0x07, 0x07, 0x77, 0x2f,
    0xfc, 0x07, 0x07, 0x07, 0x07, 0x07, 0x06, 0x58, 0x5e, 0x00, 0x65, 0x6c,
    0x70, 0x64, 0x6a, 0x2d, 0x44, 0x4e, 0x3f, 0x53, 0x55, 0x07, 0x07, 0x77,
    0x2f, 0x07, 0x07, 0xf0, 0x07, 0x07, 0x07, 0x04, 0x57, 0x5a, 0x61, 0x69,
    0x00, 0x70, 0x75, 0x67, 0x6c, 0x33, 0x45, 0x4d, 0x52, 0x7f, 0x55, 0x07,
    0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0xe0, 0x07, 0x07, 0x04, 0x59, 0x5e,
    0x65, 0x6d, 0x75, 0x00, 0x7b, 0x6d, 0x6f, 0x2d, 0x44, 0x4d, 0x53, 0x56,
    0x7f, 0x57, 0x07, 0x07, 0x77, 0x2f, 0x07, 0x07, 0x07, 0xe0, 0x07, 0x07,
    0x02, 0x58, 0x5d, 0x63, 0x6a, 0x71, 0x00, 0x79, 0x81, 0x75, 0x6b, 0x21,
    0x43, 0x4e, 0x54, 0x0f, 0x57, 0x58, 0x58, 0x57, 0x07, 0xbf, 0x77, 0x2f,
    0xf8, 0x07, 0x07, 0x07, 0x07, 0x07, 0x57, 0x59, 0x5d, 0x00, 0x62, 0x69,
    0x70, 0x77, 0x7d, 0x88, 0x7e, 0x61, 0x00, 0x13, 0x43, 0x50, 0x55, 0x58,
    0x5a, 0x5a, 0x59, 0x3f, 0x58, 0x57, 0x07, 0xbf, 0x77, 0x2f, 0x07, 0x07,
    0xe0, 0x07, 0x07, 0x03, 0x57, 0x59, 0x5b, 0x5f, 0x63, 0x00, 0x69, 0x6f,
    0x76, 0x7d, 0x85, 0x88, 0x85, 0x36, 0x00, 0x05, 0x33, 0x4f, 0x57, 0x5b,
    0x5c, 0x5e, 0x5e, 0x07, 0x5d, 0x5b, 0x5a, 0x5a, 0x5a, 0xe9, 0xd4, 0xa7,
    0xfc, 0x5f, 0x17, 0x07, 0x07, 0x07, 0x07, 0x5a, 0x5b, 0x00, 0x5c, 0x5f,
    0x63, 0x67, 0x6c, 0x71, 0x77, 0x7d, 0x00, 0x85, 0x8d, 0x8a, 0x7a, 0x07,
    0x00, 0x17, 0x4c, 0x00, 0x59, 0x5d, 0x61, 0x63, 0x63, 0x62, 0x62, 0x63,
    0x0f, 0x64, 0x65, 0x65, 0x65, 0xe9, 0xd4, 0xa7, 0x5f, 0xf8, 0x17, 0x07,
    0x07, 0x07, 0x07, 0x66, 0x69, 0x6d, 0x00, 0x71, 0x75, 0x79, 0x7f, 0x87,
    0x8c, 0x8d, 0x8b, 0x00, 0x37, 0x00, 0x00, 0x00, 0x2c, 0x50, 0x61, 0x67,
    0x00, 0x68, 0x68, 0x6a, 0x6d, 0x70, 0x72, 0x72, 0x72, 0xff, 0xe9, 0xd4,
    0xa7, 0x5f, 0x17, 0x07, 0x07, 0x07, 0x80, 0x07, 0x72, 0x73, 0x74, 0x77,
    0x7a, 0x7f, 0x83, 0x00, 0x89, 0x8f, 0x91, 0x8e, 0x52, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x0b, 0x37, 0x61, 0x64, 0x6c, 0x70, 0x77, 0x07, 0x7a, 0x7c,
    0x7d, 0x7d, 0x7d, 0xe9, 0xd4, 0xa7, 0xfc, 0x5f, 0x17, 0x07, 0x07, 0x07,
    0x07, 0x7d, 0x7e, 0x00, 0x7f, 0x81, 0x85, 0x8a, 0x8e, 0x90, 0x91, 0x8f,
    0x04, 0x55, 0x0d, 0x00, 0x00, 0x00, 0xe9, 0x2d, 0x60, 0x01, 0x78, 0x7b,
    0x7e, 0x7f, 0x80, 0x80, 0x80, 0xe9, 0xff, 0xd4, 0xa7, 0x5f, 0x17, 0x07,
    0x07, 0x07, 0x07, 0x80, 0x02, 0x83, 0x86, 0x8a, 0x8d, 0x8e, 0x7e, 0x37,
    0x18, 0x00, 0x00, 0x00, 0xe9, 0xd1, 0x08, 0x37, 0x60, 0x07, 0x77, 0x82,
    0x83, 0x83, 0x83, 0xe9, 0xd4, 0xa7, 0xfe, 0x5f, 0x17, 0x07, 0x07, 0x07,
    0x07, 0x02, 0x84, 0x00, 0x85, 0x7d, 0x69, 0x37, 0x07, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00,
};