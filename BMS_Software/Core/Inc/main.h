/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2025 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
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
#include "stm32f4xx_hal.h"

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
#define CS_I2C_SPI_Pin GPIO_PIN_3
#define CS_I2C_SPI_GPIO_Port GPIOE
#define Touchdisplay_x__Pin GPIO_PIN_4
#define Touchdisplay_x__GPIO_Port GPIOE
#define Touchdisplay_y__Pin GPIO_PIN_6
#define Touchdisplay_y__GPIO_Port GPIOE
#define PC14_OSC32_IN_Pin GPIO_PIN_14
#define PC14_OSC32_IN_GPIO_Port GPIOC
#define PC15_OSC32_OUT_Pin GPIO_PIN_15
#define PC15_OSC32_OUT_GPIO_Port GPIOC
#define PH0_OSC_IN_Pin GPIO_PIN_0
#define PH0_OSC_IN_GPIO_Port GPIOH
#define PH1_OSC_OUT_Pin GPIO_PIN_1
#define PH1_OSC_OUT_GPIO_Port GPIOH
#define OTG_FS_PowerSwitchOn_Pin GPIO_PIN_0
#define OTG_FS_PowerSwitchOn_GPIO_Port GPIOC
#define Temp_4_Pin GPIO_PIN_1
#define Temp_4_GPIO_Port GPIOC
#define Touchdisplay_x_Pin GPIO_PIN_2
#define Touchdisplay_x_GPIO_Port GPIOC
#define Touchdisplay_y_Pin GPIO_PIN_3
#define Touchdisplay_y_GPIO_Port GPIOC
#define Current_Pin GPIO_PIN_1
#define Current_GPIO_Port GPIOA
#define Voltage01_Pin GPIO_PIN_2
#define Voltage01_GPIO_Port GPIOA
#define Voltage12_Pin GPIO_PIN_3
#define Voltage12_GPIO_Port GPIOA
#define Voltage23_Pin GPIO_PIN_4
#define Voltage23_GPIO_Port GPIOA
#define Voltage34_Pin GPIO_PIN_6
#define Voltage34_GPIO_Port GPIOA
#define Temp_1_Pin GPIO_PIN_7
#define Temp_1_GPIO_Port GPIOA
#define Temp_5_Pin GPIO_PIN_4
#define Temp_5_GPIO_Port GPIOC
#define Temp_6_Pin GPIO_PIN_5
#define Temp_6_GPIO_Port GPIOC
#define Temp_2_Pin GPIO_PIN_0
#define Temp_2_GPIO_Port GPIOB
#define Temp_3_Pin GPIO_PIN_1
#define Temp_3_GPIO_Port GPIOB
#define BOOT1_Pin GPIO_PIN_2
#define BOOT1_GPIO_Port GPIOB
#define CLK_IN_Pin GPIO_PIN_10
#define CLK_IN_GPIO_Port GPIOB
#define LD4_Pin GPIO_PIN_12
#define LD4_GPIO_Port GPIOD
#define LD3_Pin GPIO_PIN_13
#define LD3_GPIO_Port GPIOD
#define LD5_Pin GPIO_PIN_14
#define LD5_GPIO_Port GPIOD
#define LD6_Pin GPIO_PIN_15
#define LD6_GPIO_Port GPIOD
#define I2S3_MCK_Pin GPIO_PIN_7
#define I2S3_MCK_GPIO_Port GPIOC
#define VBUS_FS_Pin GPIO_PIN_9
#define VBUS_FS_GPIO_Port GPIOA
#define OTG_FS_ID_Pin GPIO_PIN_10
#define OTG_FS_ID_GPIO_Port GPIOA
#define OTG_FS_DM_Pin GPIO_PIN_11
#define OTG_FS_DM_GPIO_Port GPIOA
#define OTG_FS_DP_Pin GPIO_PIN_12
#define OTG_FS_DP_GPIO_Port GPIOA
#define SWDIO_Pin GPIO_PIN_13
#define SWDIO_GPIO_Port GPIOA
#define SWCLK_Pin GPIO_PIN_14
#define SWCLK_GPIO_Port GPIOA
#define I2S3_SCK_Pin GPIO_PIN_10
#define I2S3_SCK_GPIO_Port GPIOC
#define I2S3_SD_Pin GPIO_PIN_12
#define I2S3_SD_GPIO_Port GPIOC
#define Precharge_Pin GPIO_PIN_0
#define Precharge_GPIO_Port GPIOD
#define Relais___Pin GPIO_PIN_1
#define Relais___GPIO_Port GPIOD
#define Relais__D2_Pin GPIO_PIN_2
#define Relais__D2_GPIO_Port GPIOD
#define Display_Reset_Pin GPIO_PIN_3
#define Display_Reset_GPIO_Port GPIOD
#define Audio_RST_Pin GPIO_PIN_4
#define Audio_RST_GPIO_Port GPIOD
#define OTG_FS_OverCurrent_Pin GPIO_PIN_5
#define OTG_FS_OverCurrent_GPIO_Port GPIOD
#define CS_Pin GPIO_PIN_6
#define CS_GPIO_Port GPIOD
#define DS_Pin GPIO_PIN_7
#define DS_GPIO_Port GPIOD
#define SWO_Pin GPIO_PIN_3
#define SWO_GPIO_Port GPIOB
#define Audio_SDA_Pin GPIO_PIN_9
#define Audio_SDA_GPIO_Port GPIOB
#define MEMS_INT2_Pin GPIO_PIN_1
#define MEMS_INT2_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
