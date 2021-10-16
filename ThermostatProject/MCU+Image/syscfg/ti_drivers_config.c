/*
 *  ======== ti_drivers_config.c ========
 *  Configured TI-Drivers module definitions
 *
 *  DO NOT EDIT - This file is generated for the CC3220S_LAUNCHXL
 *  by the SysConfig tool.
 */

#include <stddef.h>
#include <stdint.h>

#ifndef DeviceFamily_CC3220
#define DeviceFamily_CC3220
#endif

#include <ti/devices/DeviceFamily.h>

#include "ti_drivers_config.h"

/*
 *  =============================== GPIO ===============================
 */

#include <ti/drivers/GPIO.h>
#include <ti/drivers/gpio/GPIOCC32XX.h>

#define CONFIG_GPIO_COUNT 3

/*
 *  ======== gpioPinConfigs ========
 *  Array of Pin configurations
 */
GPIO_PinConfig gpioPinConfigs[] = {
    /* CONFIG_GPIO_BUTTON_0 : LaunchPad User Button SW2 (Left) */
    GPIOCC32XX_GPIO_13 | GPIO_DO_NOT_CONFIG,
    /* CONFIG_GPIO_BUTTON_1 : LaunchPad User Button SW3 (Right) */
    GPIOCC32XX_GPIO_22 | GPIO_DO_NOT_CONFIG,
    /* CONFIG_GPIO_LED_0 : LaunchPad LED D10 (Red) */
    GPIOCC32XX_GPIO_09 | GPIO_CFG_OUT_STD | GPIO_CFG_OUT_STR_MED | GPIO_CFG_OUT_LOW,
};

/*
 *  ======== gpioCallbackFunctions ========
 *  Array of callback function pointers
 *
 *  NOTE: Unused callback entries can be omitted from the callbacks array to
 *  reduce memory usage by enabling callback table optimization
 *  (GPIO.optimizeCallbackTableSize = true)
 */
GPIO_CallbackFxn gpioCallbackFunctions[] = {
    /* CONFIG_GPIO_BUTTON_0 : LaunchPad User Button SW2 (Left) */
    NULL,
    /* CONFIG_GPIO_BUTTON_1 : LaunchPad User Button SW3 (Right) */
    NULL,
    /* CONFIG_GPIO_LED_0 : LaunchPad LED D10 (Red) */
    NULL,
};

const uint_least8_t CONFIG_GPIO_BUTTON_0_CONST = CONFIG_GPIO_BUTTON_0;
const uint_least8_t CONFIG_GPIO_BUTTON_1_CONST = CONFIG_GPIO_BUTTON_1;
const uint_least8_t CONFIG_GPIO_LED_0_CONST = CONFIG_GPIO_LED_0;

/*
 *  ======== GPIOCC32XX_config ========
 */
const GPIOCC32XX_Config GPIOCC32XX_config = {
    .pinConfigs = (GPIO_PinConfig *)gpioPinConfigs,
    .callbacks = (GPIO_CallbackFxn *)gpioCallbackFunctions,
    .numberOfPinConfigs = 3,
    .numberOfCallbacks = 3,
    .intPriority = (~0)
};

/*
 *  =============================== I2C ===============================
 */

#include <ti/drivers/I2C.h>
#include <ti/drivers/i2c/I2CCC32XX.h>
#include <ti/devices/cc32xx/inc/hw_ints.h>
#include <ti/devices/cc32xx/inc/hw_memmap.h>

#define CONFIG_I2C_COUNT 1

/*
 *  ======== i2cCC32XXObjects ========
 */
I2CCC32XX_Object i2cCC32XXObjects[CONFIG_I2C_COUNT];

/*
 *  ======== i2cCC32XXHWAttrs ========
 */
const I2CCC32XX_HWAttrsV1 i2cCC32XXHWAttrs[CONFIG_I2C_COUNT] = {
    /* CONFIG_I2C_0 */
    /* LaunchPad I2C */
    {
        .baseAddr = I2CA0_BASE,
        .intNum = INT_I2CA0,
        .intPriority = (~0),
        .sclTimeout = 0x0,
        .clkPin  = I2CCC32XX_PIN_01_I2C_SCL,
        .dataPin = I2CCC32XX_PIN_02_I2C_SDA
    },
};

/*
 *  ======== I2C_config ========
 */
const I2C_Config I2C_config[CONFIG_I2C_COUNT] = {
    /* CONFIG_I2C_0 */
    /* LaunchPad I2C */
    {
        .object = &i2cCC32XXObjects[CONFIG_I2C_0],
        .hwAttrs = &i2cCC32XXHWAttrs[CONFIG_I2C_0]
    },
};

const uint_least8_t CONFIG_I2C_0_CONST = CONFIG_I2C_0;
const uint_least8_t I2C_count = CONFIG_I2C_COUNT;

/*
 *  =============================== Power ===============================
 */
#include <ti/drivers/Power.h>
#include <ti/drivers/power/PowerCC32XX.h>
#include <ti/devices/cc32xx/driverlib/prcm.h>

extern void PowerCC32XX_initPolicy(void);
extern void PowerCC32XX_sleepPolicy(void);
PowerCC32XX_ParkInfo parkInfo[];
/*
 *  This structure defines the configuration for the Power Manager.
 */
const PowerCC32XX_ConfigV1 PowerCC32XX_config = {
    .policyInitFxn             = PowerCC32XX_initPolicy,
    .policyFxn                 = PowerCC32XX_sleepPolicy,
    .enterLPDSHookFxn          = NULL,
    .resumeLPDSHookFxn         = NULL,
    .enablePolicy              = false,
    .enableGPIOWakeupLPDS      = true,
    .enableGPIOWakeupShutdown  = true,
    .enableNetworkWakeupLPDS   = true,
    .wakeupGPIOSourceLPDS      = PRCM_LPDS_GPIO13,
    .wakeupGPIOTypeLPDS        = PRCM_LPDS_FALL_EDGE,
    .wakeupGPIOFxnLPDS         = NULL,
    .wakeupGPIOFxnLPDSArg      = 0,
    .wakeupGPIOSourceShutdown  = PRCM_HIB_GPIO13,
    .wakeupGPIOTypeShutdown    = PRCM_HIB_RISE_EDGE,
    .ramRetentionMaskLPDS      = PRCM_SRAM_COL_1|PRCM_SRAM_COL_2|PRCM_SRAM_COL_3|PRCM_SRAM_COL_4,
    .latencyForLPDS            = 20000,
    .keepDebugActiveDuringLPDS = false,
    .ioRetentionShutdown       = PRCM_IO_RET_GRP_0|PRCM_IO_RET_GRP_1|PRCM_IO_RET_GRP_2|PRCM_IO_RET_GRP_3,
    .pinParkDefs               = parkInfo,
    .numPins                   = 31
};

/*
 *  =============================== Timer ===============================
 */

#include <ti/drivers/Timer.h>
#include <ti/devices/cc32xx/inc/hw_memmap.h>
#include <ti/devices/cc32xx/inc/hw_ints.h>
#include <ti/drivers/timer/TimerCC32XX.h>

#define CONFIG_TIMER_COUNT 1

/*
 *  ======== timerCC32XXObjects ========
 */
TimerCC32XX_Object timerCC32XXObjects[CONFIG_TIMER_COUNT];

/*
 *  ======== timerCC32XXHWAttrs ========
 */
const TimerCC32XX_HWAttrs timerCC32XXHWAttrs[CONFIG_TIMER_COUNT] = {
    /* CONFIG_TIMER_0 */
    {
        .baseAddress = TIMERA0_BASE,
        .subTimer    = TimerCC32XX_timer32,
        .intNum      = INT_TIMERA0A,
        .intPriority = (~0)
    },
};

/*
 *  ======== Timer_config ========
 */
const Timer_Config Timer_config[CONFIG_TIMER_COUNT] = {
    /* CONFIG_TIMER_0 */
    {
        .object      = &timerCC32XXObjects[CONFIG_TIMER_0],
        .hwAttrs     = &timerCC32XXHWAttrs[CONFIG_TIMER_0]
    },
};

const uint_least8_t CONFIG_TIMER_0_CONST = CONFIG_TIMER_0;
const uint_least8_t Timer_count = CONFIG_TIMER_COUNT;

/*
 *  =============================== UART ===============================
 */

#include <ti/drivers/UART.h>
#include <ti/devices/cc32xx/inc/hw_ints.h>
#include <ti/devices/cc32xx/inc/hw_memmap.h>
#include <ti/drivers/uart/UARTCC32XX.h>

#define CONFIG_UART_COUNT 1

#define UART0_BASE UARTA0_BASE
#define UART1_BASE UARTA1_BASE
#define INT_UART0  INT_UARTA0
#define INT_UART1  INT_UARTA1


static unsigned char uartCC32XXRingBuffer0[32];
UARTCC32XX_Object uartCC32XXObjects0;

static const UARTCC32XX_HWAttrsV1 uartCC32XXHWAttrs0 = {
    .baseAddr           = UART0_BASE,
    .intNum             = INT_UART0,
    .intPriority        = (~0),
    .flowControl        = UARTCC32XX_FLOWCTRL_NONE,
    .ringBufPtr         = uartCC32XXRingBuffer0,
    .ringBufSize        = sizeof(uartCC32XXRingBuffer0),
    .rxPin              = UARTCC32XX_PIN_57_UART0_RX,
    .txPin              = UARTCC32XX_PIN_55_UART0_TX,
    .ctsPin             = UARTCC32XX_PIN_UNASSIGNED,
    .rtsPin             = UARTCC32XX_PIN_UNASSIGNED,
    .errorFxn           = NULL
  };

const UART_Config UART_config[CONFIG_UART_COUNT] = {
    {   /* CONFIG_UART_0 */
        .fxnTablePtr = &UARTCC32XX_fxnTable,
        .object      = &uartCC32XXObjects0,
        .hwAttrs     = &uartCC32XXHWAttrs0
    },
};

const uint_least8_t CONFIG_UART_0_CONST = CONFIG_UART_0;
const uint_least8_t UART_count = CONFIG_UART_COUNT;

#include <ti/drivers/power/PowerCC32XX.h>

/*
 * This table defines the parking state to be set for each parkable pin
 * during LPDS. (Device resources must be parked during LPDS to achieve maximum
 * power savings.)  If the pin should be left unparked, specify the state
 * PowerCC32XX_DONT_PARK.  For example, for a UART TX pin, the device
 * will automatically park the pin in a high state during transition to LPDS,
 * so the Power Manager does not need to explictly park the pin.  So the
 * corresponding entries in this table should indicate PowerCC32XX_DONT_PARK.
 */
PowerCC32XX_ParkInfo parkInfo[] = {
/*        PIN                    PARK STATE              Pin Alias
   -----------------  ------------------------------     ---------------*/

  {PowerCC32XX_PIN01, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP10 */
  {PowerCC32XX_PIN02, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP11 */
  {PowerCC32XX_PIN03, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP12 */
  {PowerCC32XX_PIN04, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP13 */
  {PowerCC32XX_PIN05, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP14 */
  {PowerCC32XX_PIN06, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP15 */
  {PowerCC32XX_PIN07, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP16 */
  {PowerCC32XX_PIN08, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP17 */
  {PowerCC32XX_PIN13, PowerCC32XX_WEAK_PULL_DOWN_STD},
  {PowerCC32XX_PIN15, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP22 */
  {PowerCC32XX_PIN16, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TDI */
  {PowerCC32XX_PIN17, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TDO */
  {PowerCC32XX_PIN18, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP28 */
  {PowerCC32XX_PIN19, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TCK */
  {PowerCC32XX_PIN20, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* TMS */
  {PowerCC32XX_PIN21, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* SOP2 */
  {PowerCC32XX_PIN29, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP26 */
  {PowerCC32XX_PIN30, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP27 */
  {PowerCC32XX_PIN45, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP31 */
  {PowerCC32XX_PIN50, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP00 */
  {PowerCC32XX_PIN52, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP32 */
  {PowerCC32XX_PIN53, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP30 */
  {PowerCC32XX_PIN55, PowerCC32XX_WEAK_PULL_UP_STD},   /* GP01 */
  {PowerCC32XX_PIN57, PowerCC32XX_WEAK_PULL_UP_STD},   /* GP02 */
  {PowerCC32XX_PIN58, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP03 */
  {PowerCC32XX_PIN59, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP04 */
  {PowerCC32XX_PIN60, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP05 */
  {PowerCC32XX_PIN61, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP06 */
  {PowerCC32XX_PIN62, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP07 */
  {PowerCC32XX_PIN63, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP08 */
  {PowerCC32XX_PIN64, PowerCC32XX_WEAK_PULL_DOWN_STD},   /* GP09 */
};

#include <ti/drivers/Board.h>

/*
 *  ======== Board_initHook ========
 *  Perform any board-specific initialization needed at startup.  This
 *  function is declared weak to allow applications to override it if needed.
 */
void __attribute__((weak)) Board_initHook(void)
{
}

/*
 *  ======== Board_init ========
 *  Perform any initialization needed before using any board APIs
 */
void Board_init(void)
{
    /* ==== /ti/drivers/Power initialization ==== */
    PRCMCC3200MCUInit();
    Power_init();

    Board_initHook();
}

