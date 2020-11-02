#ifndef BOARD_H
#define BOARD_H

#include "../../pins.h"

#define OSC_FREQ 16
#define USBDEVICESTRING "GameKit"
#define USBMFGSTRING "OhStem"
#define BOARD_FLASH_SECTORS 8
#define BOARD_FLASH_SIZE (512 * 1024)
//#define BOARD_ID "GAMEKIT"

#ifdef DEFINE_CONFIGDATA
__attribute__((section(".config"))) __attribute__((used)) //
const uint32_t configData[] = {
    /* CF2 START */
    513675505, 539130489, // magic
    51, 100,  // used entries, total entries
    //1, 0x2e, // PIN_ACCELEROMETER_INT = PC14
    //2, 0x16, // PIN_ACCELEROMETER_SCL = PIN_D6
    //3, 0x17, // PIN_ACCELEROMETER_SDA = PIN_D7
    4, 0x15, // PIN_BTN_A = PB05
    5, 0x14, // PIN_BTN_B = PB04
    //9, 0x11, // PIN_FLASH_CS = PB_1
    //13, 0x10, // PIN_LED = PB0
    //14, 0x10, // PIN_LIGHT PB0
    24, 0x16, // PIN_SCL
    25, 0x17, // PIN_SDA
    26, 0x10, // PIN_SPEAKER_AMP = PB00
    27, 0x25, // TEMPERATURE = PC5
    32, 0x05, // PIN_DISPLAY_SCK = PA05
    //33, 0x1e, // PIN_DISPLAY_MISO = PA14
    34, 0x07, // PIN_DISPLAY_MOSI = PA07
    35, 0x1c, // PIN_DISPLAY_CS = PB12
    36, 0x04, // PIN_DISPLAY_DC = PA04
    37, 0xa0, // DISPLAY_WIDTH = 160
    38, 0x80, // DISPLAY_HEIGHT = 128
    //39, 0x40, // DISPLAY_CFG0 = 0x40
    39, 0x00000090 , // DISPLAY_CFG0 = 0x40
    //40, 0x603, // DISPLAY_CFG1 = 0x603
    40, 0x000e14ff, // DISPLAY_CFG1 = 0x603
    41, 0x16, // DISPLAY_CFG2 = 0x16
    43, 0x01, // PIN_DISPLAY_RST = PA01
    44, 0x03, // PIN_DISPLAY_BL = PA03
    //45, 0x1, // PIN_SERVO_1 = PA01
    //46, 0x0, // PIN_SERVO_2 = PA00
    47, 0x11, // PIN_BTN_LEFT = PB01
    48, 0x0F, // PIN_BTN_RIGHT = PA15
    49, 0x06, // PIN_BTN_UP = PA_6
    50, 0x0A, // PIN_BTN_DOWN = PA10
    51, 0x00, // PIN_BTN_MENU = PA0
    //55, 0x15, // PIN_LED1 = PC08 PB5
    59, 255, // speaker volume
    60, 0x9, // PIN_JACK_TX = PA09
    //61, 0x6, // PIN_JACK_SENSE = PA06
    //62, 0x4, // PIN_JACK_HPEN = PA04
    // 63, 0x18, // PIN_JACK_BZEN = PA10 PB8
    64, 0x13, // PIN_JACK_PWREN = PB13
    65, 0x08, // PIN_JACK_SND = PA08
    // 66, 0x28, // PIN_JACK_BUSLED = PC08
    // 67, 0x29, // PIN_JACK_COMMLED = PC09
    //70, 0x68, // ACCELEROMETER_TYPE = MPU6050
    //103, 0x10, // PIN_A3 PB0
    100, 0x00, // PIN_A0 PA0
    104, 0x20, // PIN_A4 PC0
    154, 0x15, // PIN_D4 PB5  LED act
    159, 0x27, // PIN_D9 PC7
    152, 0x0A, // PIN_D2 PA10
    101, 0x01, // PIN_A1 PA1
    102, 0x04, // PIN_A2 PA4
    // U6 tx 
    105, 0x20, // PIN_A5 PC0
    153, 0x26, // PIN_D3 PC6
    150, 0x03, // PIN_D0 PA3
    151, 0x02, // PIN_D1 PA2
    // external spi
    23, 0x2A, // PIN_SCK PC10
    18, 0x2B, // PIN_MISO PC11
    19, 0x2C, // PIN_MOSI PC12
    163, 0x0F, // PIN_SS, PIN_D13 PA_15
    165, 0x28, // PIN_SS, PIN_D15 PC8, SD slot in spi mode

    204, 0x80000, // FLASH_BYTES = 0x80000
    205, 0x18000, // RAM_BYTES = 0x18000
    //208, 0x16e42d61, // BOOTLOADER_BOARD_ID = 0x16e42d61
    208, 0x77c8b2ac, // BOOTLOADER_BOARD_ID = 0x77c8b2ac
    209, 0x57755a57, // UF2_FAMILY = STM32F401
    210, 0x10, // PINS_PORT_SIZE = PA_16

    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    /* CF2 END */
};

#endif

#endif /* BOARD_H */
