# Breathing LED
The point of this branch is to start playing with timers and counters to form pulse trains of varying width (or, pulse width modulation PWM).

We use the on-board green LED to brighten it and then dim it, before repeating the process again.
That is the on-pulse gets wider and wider before shrinking it again.

The green LED is associated with Timer 2. The clock frequency is 80 MHz, which we reduce down to 1 MHz. With a saw tooth pattern of 1000 counts, we toggle the LED when CCR1 is reached.

![breathingLED](tim2Setup.png)