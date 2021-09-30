# Digital signal input
The point of this branch is to use a digital input.
In this case we are using the blue button on the as an input and turn on the green LED on the development board when the button is pushed.

![Blue button and green LED](blueButton.png)

One could have used the output of an astable 555 timer.

If one chooses to use a push button on a breadboard, one need to consider [switch debouncing] to avoid the surprise that the microcontroller might have reacted to many on-off cycles when one really has pressed or released the button once.
When looking at the user manual UM1724, revision 13, page 64, the blue switch has a low pass filter.
R29 = 100 & C15 = 100 nF.

One can also look at a [guide](https://my.eng.utah.edu/~cs5780/debouncing.pdf) to debouncing, the [Embedded Artistry](https://embeddedartistry.com/blog/2018/06/04/demystifying-microcontroller-gpio-settings/) or the [STM32 Wiki documentation](https://wiki.st.com/stm32mcu/wiki/GPIO_feature_overview).
