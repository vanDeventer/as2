# Menus with a push button

The idea is to be able to change sequentially through a list of states with the use of a push button or a joysick (usually 5 buttons in a joystick).

In our simulation, we go through the different gears of an automatic car, i.e., Park, Reverse, Neutral, and Drive. One could add Drive low...

This is done with an enumeration of the states, which in reality have the value 0, 1, 2, 3. To see that you should use a breakpoint in the interrupt service routine to see the value of "gear".

One could add a second enumeration, for the gear number to shift up and down in the drive mode with two extra buttons to illustrate the paddles on your steering wheel.

You will need to use a terminal emulator connected to the correct com port to dispaly the selected gear.
