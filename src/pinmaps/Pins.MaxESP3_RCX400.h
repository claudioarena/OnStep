// -------------------------------------------------------------------------------------------------
// Pin map for OnStep MaxESP Version 3.x (ESP32S)

#if defined(ESP32)

//Alternative SDA/SCL, if needed
#define SDA_PIN              32
#define SCL_PIN              25

//Serial B
#define SERIAL_B_RX          39
#define SERIAL_B_TX          18

// The multi-purpose pins (Aux3..Aux8 can be analog pwm/dac if supported)
#define Aux2                  4     // ESP8266 RST control, or MISO for Axis1&2, or Axis4 EN support
#define Aux3                 32     // Home SW for Axis1
#define Aux4                 25     // Home SW for Axis2
#define Aux7                 04     // Limit SW, PPS, etc.
#define Aux8                 27     // OneWire, Status LED, Status2 LED, Reticle LED, Tone, etc.
#define Aux9                 25
// Misc. pins
#ifndef OneWirePin
#define OneWirePin       Aux9     // Default Pin for OneWire bus
#endif
#define AddonBootModePin     Axis2_DIR     // ESP8266 GPIO0 (Dir2)
#define AddonResetPin        14     // ESP8266 RST

// The PEC index sense is a logic level input, resets the PEC index on rising edge then waits for 60 seconds before allowing another reset
#define PecPin               36
#define AnalogPecPin         A0     // PEC Sense, analog or digital (GPIO36)

// The status LED is a two wire jumper with a 10k resistor in series to limit the current to the LED
#define LEDnegPin          Aux8     // Drain
#define LEDneg2Pin         OFF     // Drain
#define ReticlePin         Aux8     // Drain

// For a piezo buzzer
#ifndef TonePin
#define TonePin          Aux8     // Tone
#endif

// The PPS pin is a 3.3V logic input, OnStep measures time between rising edges and adjusts the internal sidereal clock frequency
#define PpsPin             Aux7     // PPS time source, GPS for example

#define LimitPin           0     // The limit switch sense is a logic level input normally pull high (2k resistor,) shorted to ground it stops gotos/tracking

// Axis1 RA/Azm step/dir driver
#define Axis1_EN            12     // Enable
#define Axis1_M0            16     // Microstep Mode 0 or SPI MOSI
#define Axis1_M1            OFF     // Microstep Mode 1 or SPI SCK
#define Axis1_M2            OFF     // Microstep Mode 2 or SPI CS
#define Axis1_M3            OFF     // SPI MISO/Fault
#define Axis1_STEP          23     // Step
#define Axis1_DIR            2     // Dir //2
#define Axis1_DECAY	        OFF     // Decay mode
#define Axis1_HOME         OFF     // Sense home position

// Axis2 Dec/Alt step/dir driver
#define Axis2_EN         SHARED     // Enable pin control shared with Axis1
#define Axis2_M0            26     // Microstep Mode 0 or SPI MOSI
#define Axis2_M1            OFF     // Microstep Mode 1 or SPI SCK
#define Axis2_M2            OFF     // Microstep Mode 2 or SPI CS
#define Axis2_M3            OFF     // SPI MISO/Fault
#define Axis2_STEP           21     // Step
#define Axis2_DIR            17     // Dir
#define Axis2_DECAY	        OFF     // Decay mode
#define Axis2_HOME         OFF     // Sense home position

// For rotator stepper driver
#define Axis3_EN            OFF     // No enable pin control (always enabled)
#define Axis3_STEP            2     // Step
#define Axis3_DIR            15     // Dir

// For focuser1 stepper driver
#define Axis4_EN            OFF   // Enable pin on Aux2 but can be turned OFF during validation
#define Axis4_STEP           22     // Step
#define Axis4_DIR            13     // Dir

// For focuser2 stepper driver
#define Axis5_EN            OFF     // No enable pin control (always enabled)
#define Axis5_STEP            2     // Step
#define Axis5_DIR            15     // Dir

// ST4 interface
#define ST4RAw               35     // ST4 RA- West
#define ST4DEs                9     // ST4 DE- South
#define ST4DEn               33     // ST4 DE+ North
#define ST4RAe               34     // ST4 RA+ East

#else
#error "Wrong processor for this configuration!"

#endif
