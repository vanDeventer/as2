/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2021 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H
#define __MAIN_H

#ifdef __cplusplus
extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "stm32l4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define B1_Pin GPIO_PIN_13
#define B1_GPIO_Port GPIOC
#define USART_TX_Pin GPIO_PIN_2
#define USART_TX_GPIO_Port GPIOA
#define USART_RX_Pin GPIO_PIN_3
#define USART_RX_GPIO_Port GPIOA
#define TMS_Pin GPIO_PIN_13
#define TMS_GPIO_Port GPIOA
#define TCK_Pin GPIO_PIN_14
#define TCK_GPIO_Port GPIOA
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define ChipSelect_Pin GPIO_PIN_6
#define ChipSelect_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* SPI masks */
#define readMask 0x80 /** To be ORed with the register address when reading */
#define writeMask 0x00 /** To be ORed with the register address when writing */
/***********************/
/* Bank 0 register map */
/***********************/
#define ICM20648_REG_WHO_AM_I  0x00 /**< Device ID register */
#define ICM20648_REG_PWR_MGMT_1           0x06    /**< Power Management 1 register */
#define ICM20648_REG_ACCEL_XOUT_H_SH      0x2D    /**< Accelerometer X-axis data high byte                    */
#define ICM20648_REG_ACCEL_XOUT_L_SH      0x2E    /**< Accelerometer X-axis data low byte                     */
#define ICM20648_REG_ACCEL_YOUT_H_SH      0x2F    /**< Accelerometer Y-axis data high byte                    */
#define ICM20648_REG_ACCEL_YOUT_L_SH      0x30    /**< Accelerometer Y-axis data low byte                     */
#define ICM20648_REG_ACCEL_ZOUT_H_SH      0x31    /**< Accelerometer Z-axis data high byte                    */
#define ICM20648_REG_ACCEL_ZOUT_L_SH      0x32    /**< Accelerometer Z-axis data low byte                     */
/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
