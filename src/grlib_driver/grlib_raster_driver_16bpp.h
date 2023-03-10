//*****************************************************************************
//
// grlib_raster_driver_16bpp.h - Prototypes for the raster-mode LCD controller
//   Stellaris Graphics Library driver.  This driver supports 16bpp, RGB565
//   display buffers.
//
// Copyright (c) 2013-2020 Texas Instruments Incorporated.  All rights reserved.
// Software License Agreement
// 
//   Redistribution and use in source and binary forms, with or without
//   modification, are permitted provided that the following conditions
//   are met:
// 
//   Redistributions of source code must retain the above copyright
//   notice, this list of conditions and the following disclaimer.
// 
//   Redistributions in binary form must reproduce the above copyright
//   notice, this list of conditions and the following disclaimer in the
//   documentation and/or other materials provided with the  
//   distribution.
// 
//   Neither the name of Texas Instruments Incorporated nor the names of
//   its contributors may be used to endorse or promote products derived
//   from this software without specific prior written permission.
// 
// THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
// "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
// LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
// A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
// OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
// SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
// LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
// DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
// THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
// (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
// OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
// 
// This is part of revision 2.2.0.295 of the Tiva Graphics Library.
//
//*****************************************************************************

#ifndef __GRLIB_RASTER_DRIVER_16BPP_H__
#define __GRLIB_RASTER_DRIVER_16BPP_H__

#include <stdint.h>
#include <stdbool.h>
#include "grlib/grlib.h"
//*****************************************************************************
//
// Prototypes for the globals exported by this driver.
//
//*****************************************************************************

#define RASTER_WIDTH    800
#define RASTER_HEIGHT   480
#define USE_EPI_WORKAROUND
//#define DISPLAY_ROTATE_180
extern void GrRaster16BppDriverInit(uint32_t *pui32FrameBuffer);

extern tDisplay g_sGrRaster16BppDriver;

#endif // __GRLIB_RASTER_DRIVER_16BPP_H__
