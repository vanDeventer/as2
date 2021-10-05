# Blinky
This is the first program that one gets to run.
After an initial setup, it loops by toggling (turning on if the LED is off, or the opposite) the green on-board LED.
The program waits 1000 ms (or 1 s) before completing the loop.

This branch is based on DigiKey's tutorial [*Getting Started with STM32 - Introduction to STM32CubeIDE*](https://www.digikey.se/en/maker/projects/getting-started-with-stm32-introduction-to-stm32cubeide/6a6c60a670c447abb90fd0fd78008697) with Shawn Hymel.

To learn more about the HAL function (and specifically the GPIO [general purpose IO]) the student is invited to look at the stm32l4xx_hal_gpio.h file (Header file of GPIO HAL module located in the Driver/STML4xx_HAL_Driver/Inc folder).
Additionally, there is the user manual [UM1884](https://www.st.com/resource/en/user_manual/dm00173145-description-of-stm32l4l4-hal-and-lowlayer-drivers-stmicroelectronics.pdf) (Description of STM32L4 HAL and low-layer drivers) and the reference manual [RM0351](https://www.st.com/resource/en/reference_manual/rm0351-stm32l47xxx-stm32l48xxx-stm32l49xxx-and-stm32l4axxx-advanced-armbased-32bit-mcus-stmicroelectronics.pdf) (both in Canvas and on the web).

To learn more about the setting of GPIO settings, you can refer to [Embedded Artistry](https://www.st.com/content/st_com/en/support/learning/stm32-education/stm32-moocs/Motor_Control_Part_1_Theory_and_Motion_Profiles.html) or to the STM32 Wiki as indicated in the master branch.
