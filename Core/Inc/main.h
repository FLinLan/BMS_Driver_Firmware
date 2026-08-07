/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2026 STMicroelectronics.
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
#include "stm32g4xx_hal.h"

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

void HAL_TIM_MspPostInit(TIM_HandleTypeDef *htim);

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define SPI1_CS_Pin GPIO_PIN_4
#define SPI1_CS_GPIO_Port GPIOC
#define MCU_ERR_Pin GPIO_PIN_14
#define MCU_ERR_GPIO_Port GPIOB
#define MCU_DBG2_Pin GPIO_PIN_8
#define MCU_DBG2_GPIO_Port GPIOD
#define MCU_DBG1_Pin GPIO_PIN_10
#define MCU_DBG1_GPIO_Port GPIOD
#define MCU_EXTI_Pin GPIO_PIN_12
#define MCU_EXTI_GPIO_Port GPIOD
#define FAULTL_L_Pin GPIO_PIN_1
#define FAULTL_L_GPIO_Port GPIOG
#define FAULTH_L_Pin GPIO_PIN_3
#define FAULTH_L_GPIO_Port GPIOG
#define SPI3_CS_Pin GPIO_PIN_5
#define SPI3_CS_GPIO_Port GPIOG
#define S_STB_Pin GPIO_PIN_8
#define S_STB_GPIO_Port GPIOG
#define SHDN_FAULT_Pin GPIO_PIN_9
#define SHDN_FAULT_GPIO_Port GPIOG
#define PWM2_Pin GPIO_PIN_6
#define PWM2_GPIO_Port GPIOB
#define PWM1_Pin GPIO_PIN_7
#define PWM1_GPIO_Port GPIOB

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */
