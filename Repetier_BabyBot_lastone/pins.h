#ifndef PINS_H
#define PINS_H

/*
The board assignment defines the capabilities of the motherboard and the used pins.
Each board definition follows the following scheme:

CPU_ARCH
  ARCH_AVR for AVR based boards
  ARCH_ARM for all arm based boards

STEPPER_CURRENT_CONTROL
  CURRENT_CONTROL_MANUAL  1  // mechanical poti, default if not defined
  CURRENT_CONTROL_DIGIPOT 2  // Use a digipot like RAMBO does
  CURRENT_CONTROL_LTC2600 3  // Use LTC2600 like Foltyn 3D Master

*/

#define ARCH_AVR 1
#define ARCH_ARM 2

#define CURRENT_CONTROL_MANUAL  1  // mechanical poti, default if not defined
#define CURRENT_CONTROL_DIGIPOT 2  // Use a digipot like RAMBO does
#define CURRENT_CONTROL_LTC2600 3  // Use LTC2600 like Foltyn 3D Master

/***************************************************************************************
    OpenHardware.co.za FrontPrint Controller 1.0
****************************************************************************************/
#if MOTHERBOARD == 73
#define KNOWN_BOARD 1

//#if !defined(AVR_ATmega644P) && !defined(AVR_ATmega644) && !defined(AVR_ATmega1284P)
//#error Oops! Make sure you have 'Gen7' selected from the 'Tools -> Boards' menu.
//#endif

//x axis pins
#define ORIG_X_STEP_PIN 29
#define ORIG_X_DIR_PIN 28
#define ORIG_X_ENABLE_PIN 25
#define ORIG_X_MIN_PIN 0
#define ORIG_X_MAX_PIN -1

//y axis pins
#define ORIG_Y_STEP_PIN 27
#define ORIG_Y_DIR_PIN 26
#define ORIG_Y_ENABLE_PIN 25
#define ORIG_Y_MIN_PIN -1
#define ORIG_Y_MAX_PIN 1

//z axis pins
#define ORIG_Z_STEP_PIN 23
#define ORIG_Z_DIR_PIN 22
#define ORIG_Z_ENABLE_PIN 25
#define ORIG_Z_MIN_PIN 2
#define ORIG_Z_MAX_PIN -1

//First extruder pins
#define ORIG_E0_STEP_PIN 19
#define ORIG_E0_DIR_PIN 18
#define ORIG_E0_ENABLE_PIN 25
#define TEMP_0_PIN 1
#define HEATER_0_PIN 4

//Second Extruder pins
#define ORIG_E1_STEP_PIN 20
#define ORIG_E1_DIR_PIN 18
#define ORIG_E1_ENABLE_PIN 25

#define TEMP_2_PIN 7
#define HEATER_2_PIN 13

//Heated Bed Pins
#define HEATER_1_PIN 3
#define TEMP_1_PIN 0

//SD Card Pins
#define SDPOWER -1
#define SDSS 14
#define SCK_PIN 7
#define MISO_PIN 6
#define MOSI_PIN 5

#define ORIG_FAN_PIN 21 //FAN and ATX Power Supply Control Pins
#define PS_ON_PIN -1

#define LED_PIN -1
#define SDSUPPORT true  // sd card reader on board
#define SDCARDDETECT -1

#define E0_PINS ORIG_E0_STEP_PIN,ORIG_E0_DIR_PIN,ORIG_E0_ENABLE_PIN,
#define E1_PINS ORIG_E1_STEP_PIN,ORIG_E1_DIR_PIN,ORIG_E1_ENABLE_PIN,
#endif

#ifndef CPU_ARCH  // Set default architecture
#define CPU_ARCH ARCH_AVR
#endif

#ifndef SDSSORIG
#define SDSSORIG -1
#endif

#ifndef STEPPER_CURRENT_CONTROL // Set default stepper current control if not set yet.
#define STEPPER_CURRENT_CONTROL  CURRENT_CONTROL_MANUAL
#endif

#ifndef FAN_BOARD_PIN
#define FAN_BOARD_PIN -1
#endif

#if NUM_EXTRUDER==1
#define E1_PINS
#endif

#if NUM_EXTRUDER<3
#define E2_PINS
#endif

#ifndef HEATER_PINS_INVERTED
#define HEATER_PINS_INVERTED 0
#endif

// Original pin assignmats to be used in configuration tool
#define X_STEP_PIN ORIG_X_STEP_PIN
#define X_DIR_PIN ORIG_X_DIR_PIN
#define X_ENABLE_PIN ORIG_X_ENABLE_PIN
#define X_MIN_PIN ORIG_X_MIN_PIN
#define X_MAX_PIN ORIG_X_MAX_PIN

#define Y_STEP_PIN ORIG_Y_STEP_PIN
#define Y_DIR_PIN ORIG_Y_DIR_PIN
#define Y_ENABLE_PIN ORIG_Y_ENABLE_PIN
#define Y_MIN_PIN ORIG_Y_MIN_PIN
#define Y_MAX_PIN ORIG_Y_MAX_PIN

#define Z_STEP_PIN ORIG_Z_STEP_PIN
#define Z_DIR_PIN ORIG_Z_DIR_PIN
#define Z_ENABLE_PIN ORIG_Z_ENABLE_PIN
#define Z_MIN_PIN ORIG_Z_MIN_PIN
#define Z_MAX_PIN ORIG_Z_MAX_PIN

#define E0_STEP_PIN ORIG_E0_STEP_PIN
#define E0_DIR_PIN ORIG_E0_DIR_PIN
#define E0_ENABLE_PIN ORIG_E0_ENABLE_PIN

#define E1_STEP_PIN ORIG_E1_STEP_PIN
#define E1_DIR_PIN ORIG_E1_DIR_PIN
#define E1_ENABLE_PIN ORIG_E1_ENABLE_PIN

#define E2_STEP_PIN ORIG_E2_STEP_PIN
#define E2_DIR_PIN ORIG_E2_DIR_PIN
#define E2_ENABLE_PIN ORIG_E2_ENABLE_PIN

#define E3_STEP_PIN ORIG_E3_STEP_PIN
#define E3_DIR_PIN ORIG_E3_DIR_PIN
#define E3_ENABLE_PIN ORIG_E3_ENABLE_PIN

#define E4_STEP_PIN ORIG_E4_STEP_PIN
#define E4_DIR_PIN ORIG_E4_DIR_PIN
#define E4_ENABLE_PIN ORIG_E4_ENABLE_PIN

#define E5_STEP_PIN ORIG_E5_STEP_PIN
#define E5_DIR_PIN ORIG_E5_DIR_PIN
#define E5_ENABLE_PIN ORIG_E5_ENABLE_PIN

#define FAN_PIN ORIG_FAN_PIN
#define FAN2_PIN ORIG_FAN2_PIN


#define SENSITIVE_PINS {0, 1, ORIG_X_STEP_PIN, ORIG_X_DIR_PIN, ORIG_X_ENABLE_PIN, ORIG_X_MIN_PIN, ORIG_X_MAX_PIN, \
        ORIG_Y_STEP_PIN, ORIG_Y_DIR_PIN, ORIG_Y_ENABLE_PIN, ORIG_Y_MIN_PIN, ORIG_Y_MAX_PIN, ORIG_Z_STEP_PIN,\
        ORIG_Z_DIR_PIN, ORIG_Z_ENABLE_PIN, ORIG_Z_MIN_PIN, ORIG_Z_MAX_PIN, LED_PIN, PS_ON_PIN, \
        HEATER_0_PIN, HEATER_1_PIN, ORIG_FAN_PIN, E0_PINS E1_PINS E2_PINS TEMP_0_PIN, TEMP_1_PIN,SDSS }
#endif

