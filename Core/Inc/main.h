/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2023 STMicroelectronics.
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
#define ACC_CS_Pin GPIO_PIN_3
#define ACC_CS_GPIO_Port GPIOE
#define USER_BUTTON_Pin GPIO_PIN_0
#define USER_BUTTON_GPIO_Port GPIOA
#define PWM_GREEN_Pin GPIO_PIN_12
#define PWM_GREEN_GPIO_Port GPIOD
#define PWM_ORANGE_Pin GPIO_PIN_13
#define PWM_ORANGE_GPIO_Port GPIOD
#define PWM_RED_Pin GPIO_PIN_14
#define PWM_RED_GPIO_Port GPIOD
#define PWM_BLUE_Pin GPIO_PIN_15
#define PWM_BLUE_GPIO_Port GPIOD
#define AUD_RST_Pin GPIO_PIN_4
#define AUD_RST_GPIO_Port GPIOD
#define ACC_INT_1_Pin GPIO_PIN_0
#define ACC_INT_1_GPIO_Port GPIOE
#define ACC_INT_2_Pin GPIO_PIN_1
#define ACC_INT_2_GPIO_Port GPIOE

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
