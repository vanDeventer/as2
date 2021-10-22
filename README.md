# Vehicle speed from CAN bus over the diagnostic port
This implementation of the code requests the speed of the car from the engine controller every half second and displays the velocity over UART on a connected laptop.

A CAN transceiver is required and it is not on the Nucleo board.

A good explanation can be found on CSS Electronics's [web page](https://www.csselectronics.com/pages/obd2-explained-simple-intro) where they explain each of the bytes sent and received (see § Raw OBD2 frame details).

The setup of the chip are similar to that of the CANloopback branch, except that it is in **Normal** mode rather than Loopback
