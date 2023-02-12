/*
 * Author: J. Bajic, 2022.
 */

#include "board_hw/board_hw.h"
#include <string.h>


void BOARD_HW_Init(void)
{
    disableInterrupts();

    SYSCLK_Config(120000000);
    SYSTICK_Init(1000);
    LEDs_Init();
    SERIAL_Init(115200);
    DISPLAY_Init();
    TSC2006_Init();

    enableInterrupts();
}
