#ifndef TEST_ASSERTIONS_HPP
#define TEST_ASSERTIONS_HPP

#include "mbed.h"

bool assertOn(int pinNumber);
bool assertOff(int pinNumber);
bool assertToggling(int pinNumber);

#ifdef MBED
const PinName& PIN_DISPLAY_MOSI = p5;
const PinName& PIN_DISPLAY_MISO = p6;
const PinName& PIN_DISPLAY_CLOCK = p7;
const PinName& PIN_DISPLAY_CHAR_1_CS = p8;

const PinName& CAN_MPPT_RD = p9;
const PinName& CAN_MPPT_TD = p10;

const PinName& PIN_DISPLAY_CHAR_3_CS = p11;
const PinName& PIN_DISPLAY_CHAR_2_CS = p12;

const PinName& MPPT_MODE_SWITCH = p13;
const PinName& PIN_DEADMAN_INPUT = p14;
const PinName& PIN_REGEN_INPUT = p15;
const PinName& PIN_CURRENT_INPUT = p16;

const PinName& PIN_CAR_DIRECTION_INPUT = p17;
const PinName& PIN_LIGHTS_HAZARDS_INPUT = p18;
const PinName& PIN_LIGHTS_RIGHT_BLINKER_INPUT = p19;
const PinName& PIN_LIGHTS_LEFT_BLINKER_INPUT = p20;
const PinName& PIN_LIGHTS_BRAKE_INPUT = p21;

const PinName& PIN_LIGHTS_BRAKE_OUT = p22;
const PinName& PIN_LIGHTS_LEFT_BLINKER_OUT = p23;
const PinName& PIN_LIGHTS_RIGHT_BLINKER_OUT = p24;

const PinName& RESET_IN = p25;

const PinName& PIN_RADIO_UART_RX = p27;
const PinName& PIN_RADIO_UART_TX = p28;

const PinName& CAN_TD = p29;
const PinName& CAN_RD = p30;

   // These are the USB pins 31 and 32
const PinName& ARRAY_ON_INPUT = P0_29;
const PinName& HIGH_VOLTAGE_INPUT = P0_30;

static const PinName pinNameArray[] =
{
    PIN_DISPLAY_MOSI,
    PIN_DISPLAY_MISO,
    PIN_DISPLAY_CLOCK,
    PIN_DISPLAY_CHAR_1_CS,
    CAN_MPPT_RD,
    CAN_MPPT_TD,
    PIN_DISPLAY_CHAR_3_CS,
    PIN_DISPLAY_CHAR_2_CS,
    MPPT_MODE_SWITCH,
    PIN_DEADMAN_INPUT,
    PIN_REGEN_INPUT,
    PIN_CURRENT_INPUT,
    PIN_CAR_DIRECTION_INPUT,
    PIN_LIGHTS_HAZARDS_INPUT,
    PIN_LIGHTS_RIGHT_BLINKER_INPUT,
    PIN_LIGHTS_LEFT_BLINKER_INPUT,
    PIN_LIGHTS_BRAKE_INPUT,
    PIN_LIGHTS_BRAKE_OUT,
    PIN_LIGHTS_LEFT_BLINKER_OUT,
    PIN_LIGHTS_RIGHT_BLINKER_OUT,
    RESET_IN,
    PIN_RADIO_UART_RX,
    PIN_RADIO_UART_TX,
    CAN_TD,
    CAN_RD,
    ARRAY_ON_INPUT,
    HIGH_VOLTAGE_INPUT
};
#endif

#endif // TEST_ASSERTIONS_HPP
