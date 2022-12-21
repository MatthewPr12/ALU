/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
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
#define B1_Pin GPIO_PIN_11
#define B1_GPIO_Port GPIOE
#define B2_Pin GPIO_PIN_12
#define B2_GPIO_Port GPIOE
#define B3_Pin GPIO_PIN_13
#define B3_GPIO_Port GPIOE
#define B4_Pin GPIO_PIN_14
#define B4_GPIO_Port GPIOE
#define EnB_Pin GPIO_PIN_15
#define EnB_GPIO_Port GPIOE
#define MUX1_Pin GPIO_PIN_8
#define MUX1_GPIO_Port GPIOD
#define MUX2_Pin GPIO_PIN_9
#define MUX2_GPIO_Port GPIOD
#define IncA_Pin GPIO_PIN_10
#define IncA_GPIO_Port GPIOD
#define InvA_Pin GPIO_PIN_11
#define InvA_GPIO_Port GPIOD
#define A1_Pin GPIO_PIN_12
#define A1_GPIO_Port GPIOD
#define A2_Pin GPIO_PIN_13
#define A2_GPIO_Port GPIOD
#define A3_Pin GPIO_PIN_14
#define A3_GPIO_Port GPIOD
#define A4_Pin GPIO_PIN_15
#define A4_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
