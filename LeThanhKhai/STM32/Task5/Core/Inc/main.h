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
#include "stm32f1xx_hal.h"

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
#define Led1_1_Pin GPIO_PIN_1
#define Led1_1_GPIO_Port GPIOA
#define Led1_2_Pin GPIO_PIN_2
#define Led1_2_GPIO_Port GPIOA
#define Led1_3_Pin GPIO_PIN_3
#define Led1_3_GPIO_Port GPIOA
#define Led1_4_Pin GPIO_PIN_4
#define Led1_4_GPIO_Port GPIOA
#define Led1_5_Pin GPIO_PIN_5
#define Led1_5_GPIO_Port GPIOA
#define Led1_6_Pin GPIO_PIN_6
#define Led1_6_GPIO_Port GPIOA
#define Led1_7_Pin GPIO_PIN_7
#define Led1_7_GPIO_Port GPIOA
#define Led2_1_Pin GPIO_PIN_1
#define Led2_1_GPIO_Port GPIOB
#define Led2_2_Pin GPIO_PIN_2
#define Led2_2_GPIO_Port GPIOB
#define Led2_3_Pin GPIO_PIN_10
#define Led2_3_GPIO_Port GPIOB
#define Led2_4_Pin GPIO_PIN_11
#define Led2_4_GPIO_Port GPIOB
#define Led2_5_Pin GPIO_PIN_12
#define Led2_5_GPIO_Port GPIOB
#define Led2_6_Pin GPIO_PIN_13
#define Led2_6_GPIO_Port GPIOB
#define Led2_7_Pin GPIO_PIN_14
#define Led2_7_GPIO_Port GPIOB
#define Led_Red_1_Pin GPIO_PIN_8
#define Led_Red_1_GPIO_Port GPIOA
#define Led_Yellow_1_Pin GPIO_PIN_9
#define Led_Yellow_1_GPIO_Port GPIOA
#define Led_Green_1_Pin GPIO_PIN_10
#define Led_Green_1_GPIO_Port GPIOA
#define Led_Red_2_Pin GPIO_PIN_11
#define Led_Red_2_GPIO_Port GPIOA
#define Led_Yellow_2_Pin GPIO_PIN_12
#define Led_Yellow_2_GPIO_Port GPIOA
#define Led_Green_2_Pin GPIO_PIN_13
#define Led_Green_2_GPIO_Port GPIOA
#define Led_Red_3_Pin GPIO_PIN_14
#define Led_Red_3_GPIO_Port GPIOA
#define Led_Yellow_3_Pin GPIO_PIN_15
#define Led_Yellow_3_GPIO_Port GPIOA
#define Led_Green_3_Pin GPIO_PIN_3
#define Led_Green_3_GPIO_Port GPIOB
#define Led_Red_4_Pin GPIO_PIN_4
#define Led_Red_4_GPIO_Port GPIOB
#define Led_Yellow_4_Pin GPIO_PIN_5
#define Led_Yellow_4_GPIO_Port GPIOB
#define Led_Green_4_Pin GPIO_PIN_6
#define Led_Green_4_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
