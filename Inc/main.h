/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under Ultimate Liberty license
  * SLA0044, the "License"; You may not use this file except in compliance with
  * the License. You may obtain a copy of the License at:
  *                             www.st.com/SLA0044
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
#include "stm32f4xx_hal.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Exported types ------------------------------------------------------------*/
/* USER CODE BEGIN ET */

/* USER CODE END ET */

/* Exported constants --------------------------------------------------------*/
/* USER CODE BEGIN EC */
//#define USE_DHCP       /* enable DHCP, if disabled static address is used*/
 
/*Static IP ADDRESS*/
#define IP_ADDR0   192
#define IP_ADDR1   168
#define IP_ADDR2   1
#define IP_ADDR3   188
   
/*NETMASK*/
#define NETMASK_ADDR0   255
#define NETMASK_ADDR1   255
#define NETMASK_ADDR2   255
#define NETMASK_ADDR3   0

/*Gateway Address*/
#define GW_ADDR0   192
#define GW_ADDR1   168
#define GW_ADDR2   1
#define GW_ADDR3   1

/* USER CODE END EC */

/* Exported macro ------------------------------------------------------------*/
/* USER CODE BEGIN EM */

/* USER CODE END EM */

/* Exported functions prototypes ---------------------------------------------*/
void Error_Handler(void);

/* USER CODE BEGIN EFP */

/* USER CODE END EFP */

/* Private defines -----------------------------------------------------------*/
#define LED2_Pin GPIO_PIN_2
#define LED2_GPIO_Port GPIOC
#define LED3_Pin GPIO_PIN_3
#define LED3_GPIO_Port GPIOC
#define R_S_1_Pin GPIO_PIN_7
#define R_S_1_GPIO_Port GPIOE
#define R_S_2_Pin GPIO_PIN_8
#define R_S_2_GPIO_Port GPIOE
#define R_S_3_Pin GPIO_PIN_9
#define R_S_3_GPIO_Port GPIOE
#define R_S_4_Pin GPIO_PIN_10
#define R_S_4_GPIO_Port GPIOE
#define R_OE_1_Pin GPIO_PIN_11
#define R_OE_1_GPIO_Port GPIOE
#define R_OE_2_Pin GPIO_PIN_12
#define R_OE_2_GPIO_Port GPIOE
#define R_OE_3_Pin GPIO_PIN_13
#define R_OE_3_GPIO_Port GPIOE
#define H_OUT_Pin GPIO_PIN_10
#define H_OUT_GPIO_Port GPIOD
#define H_OUTD11_Pin GPIO_PIN_11
#define H_OUTD11_GPIO_Port GPIOD
#define PD12_Pin GPIO_PIN_12
#define PD12_GPIO_Port GPIOD
#define PD13_Pin GPIO_PIN_13
#define PD13_GPIO_Port GPIOD
#define PD14_Pin GPIO_PIN_14
#define PD14_GPIO_Port GPIOD
#define PD15_Pin GPIO_PIN_15
#define PD15_GPIO_Port GPIOD
#define H_S_1_Pin GPIO_PIN_0
#define H_S_1_GPIO_Port GPIOD
#define H_S_2_Pin GPIO_PIN_1
#define H_S_2_GPIO_Port GPIOD
#define H_S_3_Pin GPIO_PIN_2
#define H_S_3_GPIO_Port GPIOD
#define H_S_4_Pin GPIO_PIN_3
#define H_S_4_GPIO_Port GPIOD
#define H_EN_1_Pin GPIO_PIN_4
#define H_EN_1_GPIO_Port GPIOD
#define H_EN_2_Pin GPIO_PIN_5
#define H_EN_2_GPIO_Port GPIOD
#define H_EN_3_Pin GPIO_PIN_6
#define H_EN_3_GPIO_Port GPIOD
#define H_EN_4_Pin GPIO_PIN_7
#define H_EN_4_GPIO_Port GPIOD
/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
