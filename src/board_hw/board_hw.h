/*
 * Author: J. Bajic, 2022.
 */

#ifndef BOARD_HW_BOARD_HW_H_
#define BOARD_HW_BOARD_HW_H_

#include "board_hw/sys/sys_clk.h"
#include "board_hw/common/ssi1.h"
#include "board_hw/touch/TSC2006.h"
#include "board_hw/display/display.h"
#include "board_hw/misc/rgb_led.h"
#include "board_hw/comm/serial.h"

void BOARD_HW_Init(void);

#endif /* BOARD_HW_BOARD_HW_H_ */
