/*
 * The MIT License (MIT)
 *
 * Copyright (c) 2026 KokoSoft
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#ifndef _BIRBMESH_ONE_H_
#define _BIRBMESH_ONE_H_

#define _PINNUM(port, pin)		((port)*32 + (pin))

#define UICR_REGOUT0_VALUE UICR_REGOUT0_VOUT_3V3

//--------------------------------------------------------------------+
// Board Pins
//--------------------------------------------------------------------+
#define EXTVCC_EN_PIN			_PINNUM(0, 13)
#define EXTVCC_STATE_ON			1

#define CHARGER_PIN				_PINNUM(1, 6)
#define CHARGER_STATE_ENABLED	0

#define GPS_EN_PIN				_PINNUM(0, 24)
#define GPS_STATE_ON			1

#define RADIO_EN_PIN			_PINNUM(0, 17)
#define RADIO_STATE_ENABLED		1

#define RADIO_RESET_PIN			_PINNUM(0, 9)
#define RADIO_STATE_RESET		0

/*------------------------------------------------------------------*/
/* LED
 *------------------------------------------------------------------*/
#define LEDS_NUMBER				1
#define LED_PRIMARY_PIN			_PINNUM(0, 15) // Blue
#define LED_STATE_ON			1

/*------------------------------------------------------------------*/
/* BUTTON
 *------------------------------------------------------------------*/
#define BUTTONS_NUMBER			2
#define BUTTON_1				_PINNUM(1, 0)  // user button
#define BUTTON_2				_PINNUM(1, 0)
#define BUTTON_PULL				NRF_GPIO_PIN_PULLUP

//--------------------------------------------------------------------+
// BLE OTA
//--------------------------------------------------------------------+
#define BLEDIS_MANUFACTURER		"KokoSoft"
#define BLEDIS_MODEL			"BirbMesh-One"

//--------------------------------------------------------------------+
// USB
//--------------------------------------------------------------------+
#define USB_DESC_VID			0x239A
#define USB_DESC_UF2_PID		0x00B3
#define USB_DESC_CDC_ONLY_PID	0x00B3

#define UF2_PRODUCT_NAME		"BirbMesh-One"
#define UF2_VOLUME_LABEL		"BIRBMESH"
#define UF2_BOARD_ID			"nRF52840-BirbMesh-One"
#define UF2_INDEX_URL			"https://github.com/KokoSoft/BirbMesh-One"

#endif // _BIRBMESH_ONE_H_
