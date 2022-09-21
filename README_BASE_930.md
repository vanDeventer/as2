# IMU over SPI
Here, we make use of the Sparkfun 9DOF [IMU](https://www.sparkfun.com/products/15335) over SPI.
It is an ICM-20948 sensor chip, which is low power and measures acceleration, rotation rates (gyro), magnetometer [all in 3 dimensions] as well as temperature.
It is quite an advanced little chip.

On power up, its sensors are off and need to be turned on.

The code is also setup to use the [STM32CubeMonitor](https://www.st.com/en/development-tools/stm32cubemonitor.html) to plot in realtime the X acceleration signal versus time (probeX).