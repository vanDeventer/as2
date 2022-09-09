# Real time clock, RTC

The point of this branch is to make use of the systems on chip (SOC)'s real time clock and low speed oscillator (X2 on the Nucleo board).

It just displays the time since restart on a connected serial terminal.

You can change the start time in the .ioc file or you could code a function that changes to a setting mode that reads your input from the keyboard.

In your Canvas room is a "how to" document that shows you how to use alarms and if necessary to put the chip to sleep.
This document shows you how to setup your .ioc gui chip view.

In the [ST community site](https://community.st.com/s/feed/0D53W00001mh2BdSAI), you can find an interesting discussion on setting the clock with details of [strol](https://www.tutorialspoint.com/c_standard_library/c_function_strtol.htm) with base 16.