# Learning about Microcontrollers in Automotive Systems (E0009E)
This repository is made up of different branches that reflect the use of different peripherals on a STM32L476RG microcontroller

You can find additional material and information at:
- STM32 MCU [Wiki](https://wiki.st.com/stm32mcu)
## Branch order
To make the most of this repository, the student might want to study each branch (mostly main.c) in the following order:
- GPIO
	- [blinky](https://github.com/vanDeventer/as2/tree/blinky), which flash an LED
	- [dualBlinky](https://github.com/vanDeventer/as2/tree/dualBlinky). which flashes two lEDs out of synch
	- [blueBotton](https://github.com/vanDeventer/as2/tree/blueButton), which uses the blue button to turn on the onboard green LED
	- [blockingLED](https://github.com/vanDeventer/as2/tree/blockingLED), where a flashing LED blocks the turning on or off of a second LED
	- NonblockingLED, or the use of **External Interrupts** for real time response.
- UART
	- helloWorld, which displays ```Hello World``` on the hosting computer with Putty.
	- blockingEcho, which waits and returns what is sent (or typed).
	- nonBlockingEcho, which uses an **Internal Interrupt** to inform that a new character has been received on UART.
	- buttonMemu
	- keyMenu
- ADC
	- adc
- I2C
	- tmp102
	- imuI2cXaccel
	- i2Cslave
	- i2cLcd
- SPI
	- imuSpiXaccel
	- SPIslave
- Timer/Counters
	- breathingLED
	- pwmServo
	- inputCapture
	- rpm555
- CAN
	- CANlooback
	- CANvel