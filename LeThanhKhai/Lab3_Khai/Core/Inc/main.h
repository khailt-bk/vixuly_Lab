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
#define SEG0_Pin GPIO_PIN_1
#define SEG0_GPIO_Port GPIOA
#define SEG1_Pin GPIO_PIN_2
#define SEG1_GPIO_Port GPIOA
#define SEG2_Pin GPIO_PIN_3
#define SEG2_GPIO_Port GPIOA
#define SEG3_Pin GPIO_PIN_4
#define SEG3_GPIO_Port GPIOA
#define SEG4_Pin GPIO_PIN_5
#define SEG4_GPIO_Port GPIOA
#define SEG5_Pin GPIO_PIN_6
#define SEG5_GPIO_Port GPIOA
#define SEG6_Pin GPIO_PIN_7
#define SEG6_GPIO_Port GPIOA
#define EN0_Pin GPIO_PIN_0
#define EN0_GPIO_Port GPIOB
#define EN2_Pin GPIO_PIN_1
#define EN2_GPIO_Port GPIOB
#define EN3_Pin GPIO_PIN_2
#define EN3_GPIO_Port GPIOB
#define Led_Yellow1_Pin GPIO_PIN_10
#define Led_Yellow1_GPIO_Port GPIOB
#define Led_Yellow2_Pin GPIO_PIN_11
#define Led_Yellow2_GPIO_Port GPIOB
#define EN7_Pin GPIO_PIN_12
#define EN7_GPIO_Port GPIOB
#define Button1_Pin GPIO_PIN_13
#define Button1_GPIO_Port GPIOB
#define Button2_Pin GPIO_PIN_14
#define Button2_GPIO_Port GPIOB
#define Button3_Pin GPIO_PIN_15
#define Button3_GPIO_Port GPIOB
#define SEG7_Pin GPIO_PIN_8
#define SEG7_GPIO_Port GPIOA
#define SEG8_Pin GPIO_PIN_9
#define SEG8_GPIO_Port GPIOA
#define SEG9_Pin GPIO_PIN_10
#define SEG9_GPIO_Port GPIOA
#define SEG10_Pin GPIO_PIN_11
#define SEG10_GPIO_Port GPIOA
#define SEG11_Pin GPIO_PIN_12
#define SEG11_GPIO_Port GPIOA
#define SEG12_Pin GPIO_PIN_13
#define SEG12_GPIO_Port GPIOA
#define SEG13_Pin GPIO_PIN_14
#define SEG13_GPIO_Port GPIOA
#define EN1_Pin GPIO_PIN_15
#define EN1_GPIO_Port GPIOA
#define EN4_Pin GPIO_PIN_3
#define EN4_GPIO_Port GPIOB
#define EN5_Pin GPIO_PIN_4
#define EN5_GPIO_Port GPIOB
#define EN6_Pin GPIO_PIN_5
#define EN6_GPIO_Port GPIOB
#define Led_Red1_Pin GPIO_PIN_6
#define Led_Red1_GPIO_Port GPIOB
#define Led_Red2_Pin GPIO_PIN_7
#define Led_Red2_GPIO_Port GPIOB
#define Led_Green1_Pin GPIO_PIN_8
#define Led_Green1_GPIO_Port GPIOB
#define Led_Green2_Pin GPIO_PIN_9
#define Led_Green2_GPIO_Port GPIOB
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
