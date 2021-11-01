# Temperature with I2C

This is the code from the Digi-Key [web page](https://www.digikey.se/en/maker/projects/getting-started-with-stm32-i2c-example/ba8c2bfef2024654b5dd10012425fa23) and video presented by Shawn Hymel: Getting Started With STM32 and Nucleo Part 2: How to Use I2C to Read Temperature Sensor TMP102.

It sets up a UART communication and a I2C communication to read temperature using a Texas Instrument Tmp102.

The figure bellow shows the Device Manager to see on which COM port is the Nucleo connected to and the setup in Putty.

![Putty](Putty.png)

All Qwiic cables have the following color scheme and arrangement:
- Black = GND
- Red = 3.3V
- Blue = SDA
- Yellow = SCL