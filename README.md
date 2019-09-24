# MPCNC Grbl_ESP32 Controller

![MPCNC Controller Image](https://github.com/bdring/Grbl_ESP32_MPCNC_Controller/blob/master/images/v1p2p1_pcba.jpg)



This is a CNC controller specially designed to address the needs of the [MPCNC (Mostly Printed CNC) CNC Router](https://www.v1engineering.com/specifications/).

### Features

- ESP32 Microcontroller:
  - Very Fast: Dual core 32 bit, 240 MHz
  - Large Flash Memory
  - Wifi:
  - Bluetooth:
- Grbl_ESP32 Firmware:
  - Compatible with most existing Grbl gcode sender software.
  - Web User Interface
  - Multiple Interfaces
    - USB Serial:
    - Web User Interface:
    - Telnet:
    - Bluetooth:
    - SD Card:
- (5) Stepper Motor Drivers: On for each motor in the MPCNC design. Motors are ganging in firmware and have an auto squaring feature executed during homing.
- Limit Switch Connectors: 
- Control Pins:
- Spindle Control:
- Fan Power: 
- Micro SD card: 

### Getting One

They are available at the following links or you can source it yourself.

- [Tindie](https://www.tindie.com/products/33366583/grbl_esp32-mpcnc-cnc-controller/)

### Usage Instructions

[See the wiki](https://github.com/bdring/Grbl_ESP32_MPCNC_Controller/wiki)

### License

Creative Commons Attribution - ShareAlike 4.0 International

There are no commercial restrictions on using this design, but you must attribute the design to Bart Dring or @buildlog. You must also publish any changes or improvements to the design with the same open source license.  

### Version History

- Version 1.1 Original upload
- Version 1.2
  - Removed R/C filters on limit switches. This was not working for everyone. A firmware debouncing feature was added.
  - Made GPIO2 and output. Some dev modules have trouble with this as an input. Shuffled a few pins to accomodate this change. 
- Version 1.2.1
  - Changed orientation of relay for better layout
  - Removed pull down resistor on spindle PWM circuit (it was never installed previously)
  - Note: This uses the same cpu_map ans V1.2

### Source Files

- [Firmware](https://github.com/bdring/Grbl_Esp32)
- [DipTrace Source](https://github.com/bdring/Grbl_ESP32_MPCNC_Controller/tree/master/source)
- [Gerber Files](https://github.com/bdring/Grbl_ESP32_MPCNC_Controller/tree/master/gerbers)
- [Schematic](https://github.com/bdring/Grbl_ESP32_MPCNC_Controller/blob/master/gerbers/schematic.pdf)

### Donation

This project requires a lot of work and often expensive items for testing. Please consider a safe, secure and highly appreciated donation via the PayPal link below.

[![](https://www.paypalobjects.com/en_US/i/btn/btn_donateCC_LG.gif)](https://www.paypal.com/cgi-bin/webscr?cmd=_s-xclick&hosted_button_id=TKNJ9Z775VXB2)
