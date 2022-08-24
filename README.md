# Learning about Microcontrollers in Automotive Systems (E0009E)
This repository is made up of different branches that reflect the use of different peripherals on a STM32L476RG microcontroller

You can find additional material and information at:
- STM32 MCU [Wiki](https://wiki.st.com/stm32mcu)
- [Online Training](https://www.st.com/content/st_com/en/support/learning/stm32-education/stm32-online-training/stm32l4-online-training.html)
## Branch order
To make the most of this repository, the student might want to study each branch (mostly main.c) in the following order:
- GPIO
	- [blinky](https://github.com/vanDeventer/as2/tree/blinky), which flash an LED
	- [dualBlinky](https://github.com/vanDeventer/as2/tree/dualBlinky). which flashes two LEDs out of synch
	- [blueBotton](https://github.com/vanDeventer/as2/tree/blueButton), which uses the blue button to turn on the onboard green LED
	- [blockingLED](https://github.com/vanDeventer/as2/tree/blockingLED), where a flashing LED blocks the turning on or off of a second LED
	- [nonblockingLED](https://github.com/vanDeventer/as2/tree/nonBlockingLED), or the use of **External Interrupts** for real time response.
- UART
	- [helloWorld](https://github.com/vanDeventer/as2/tree/helloWorld), which displays ```Automotive Systems 2``` on the hosting computer with Putty
	- [blockingEcho](https://github.com/vanDeventer/as2/tree/blockingEcho), which waits and returns what is sent (or typed).
	- [nonBlockingEcho](https://github.com/vanDeventer/as2/tree/nonBlockingEcho), which uses an **Internal Interrupt** to inform that a new character has been received on UART
	- buttonMemu
	- keyMenu
- ADC
	- [adc](https://github.com/vanDeventer/as2/tree/adc) transform the analog signal from A0 to a 12 bit number
- I2C
	- [tmp102](https://github.com/vanDeventer/as2/tree/tmp102) reads the temperature of a TMP102 sensor over the I2C bus
	- [imuI2cXaccel](https://github.com/vanDeventer/as2/tree/imuI2cXaccel) obtains the accelerometer value from an IMU in the X direction
	- i2Cslave
	- [i2cLcd](https://github.com/vanDeventer/as2/tree/i2cLcd) displays "Automotive Systems 2" on the qwiic 128x32 OLED display 
- SPI
	- [imuSpiXaccel](https://github.com/oskwin/as2/tree/imuSpiXaccel) obtains the accelerometer value from an IMU in the X direction
	- SPIslave
- Timer/Counters
	- [breathingLED](https://github.com/vanDeventer/as2/tree/breathingLED) the green LED gets brighter and dimmer cyclicly
	- [pwmServo](https://github.com/vanDeventer/as2/tree/pwmServo) controls the position of an RC steering servo
	- [inputCapture](https://github.com/vanDeventer/as2/tree/inputCapture) measures the time between events (rising edges)
	- rpm555
- CAN
	- [CANloopback](https://github.com/vanDeventer/as2/tree/CANVel) teaches how to transmit frames and filter incoming messages
	- [CANvel](https://github.com/vanDeventer/as2/tree/CANVel) display in a terminal window the vehicle speed (over the diagnostic port)
- Error handling
- Real Time Operating System (RTOS)
	- [rtos](https://github.com/vanDeventer/as2/tree/rtos) has two threads that toggle the board's LED at different rates
