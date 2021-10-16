/*
 * Copyright (c) 2015-2020, Texas Instruments Incorporated
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * *  Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * *  Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * *  Neither the name of Texas Instruments Incorporated nor the names of
 *    its contributors may be used to endorse or promote products derived
 *    from this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO,
 * THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR
 * PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR
 * CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL,
 * EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO,
 * PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;
 * OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR
 * OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 *  ======== uartecho.c ========
 */
#include <stdint.h>
#include <stddef.h>

/* Driver Header files */
#include <ti/drivers/GPIO.h>
#include <ti/drivers/UART.h>

/* Driver configuration */
#include "ti_drivers_config.h"

/*
 *  ======== mainThread ========
 */
void *mainThread(void *arg0)
{
    char        input;
    const char  echoPrompt[] = "Echoing characters:\r\n";
    UART_Handle uart;
    UART_Params uartParams;

    /* Call driver init functions */
    GPIO_init();
    UART_init();

    /* Configure the LED pin */
    GPIO_setConfig(CONFIG_GPIO_LED_0, GPIO_CFG_OUT_STD | GPIO_CFG_OUT_LOW);

    /* Create a UART with data processing off. */
    UART_Params_init(&uartParams);
    uartParams.writeDataMode = UART_DATA_BINARY;
    uartParams.readDataMode = UART_DATA_BINARY;
    uartParams.readReturnMode = UART_RETURN_FULL;
    uartParams.baudRate = 115200;

    uart = UART_open(CONFIG_UART_0, &uartParams);

    if (uart == NULL) {
        /* UART_open() failed */
        while (1);
    }

    /* Turn on user LED to indicate successful initialization */
    GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_ON);

    UART_write(uart, echoPrompt, sizeof(echoPrompt));

    enum LED_States {LED0_Start, NorF, F2, LED0_on, LED0_off} LED_State;    // Enumerate all LED states (declare integral constants)

    /* Loop forever echoing. This loop uses a single char input, receives one character at a time
     * and turns the red LED (LED_0) on and off when 'on' and 'off' are typed into the terminal.
     * This is done using the switch/case state machine below.
     */
    while(1) {
        UART_read(uart, &input, 1);         // Read input with each loop

        switch(LED_State) {                 // State transitions
            case LED0_Start:                // Starting case, looking for input == 'o'
                if (input == 'o') {
                    LED_State = NorF;       // 'o' found, transitioning to NorF case
                }
                break;
            case NorF:                      // NorF case, looking for either input == 'n' or 'f'
                if (input == 'n') {
                    LED_State = LED0_on;    // 'n' found, transitioning to LED0_on, which will activate LED
                }
                else if (input == 'f') {
                    LED_State = F2;         // 'f' found, transitioning to F2 for another input 'f'
                }
                break;
            case F2:                        // F2 case, looking for second 'f' in off
                if (input == 'f') {
                    LED_State = LED0_off;   // Second 'f' found, transitioning to LED0_off, which will deactivate LED
                }
                break;
            default:
                LED_State = LED0_Start;     // Default state transitions to start
                break;
        }

        switch(LED_State) {                 // State actions
            case LED0_on:
                GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_ON);  // LED0 ON
                LED_State = LED0_Start;                             // Transition state to start
                break;

            case LED0_off:
                GPIO_write(CONFIG_GPIO_LED_0, CONFIG_GPIO_LED_OFF); // LED0 OFF
                LED_State = LED0_Start;                             // Transition state to start
                break;
         }
        UART_write(uart, &input, 1);        // Write input with each loop
    }
}
