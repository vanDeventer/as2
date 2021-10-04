# Waiting to receive a character from a laptop
In this branch we wait to receive over UART (Rx) a character from the laptop's keyboard, which we then echo back by transmitting with UART (Tx) to be displayed in Putty.
The LED toggles only when a new character is received.

There are two points with this branch:
- receiving with UART
- demonstration of a blocking behavior.