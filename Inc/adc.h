/**
  ******************************************************************************
  * File Name          : ADC.h
  * Description        : This file provides code for the configuration
  *                      of the ADC instances.
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
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __adc_H
#define __adc_H
#ifdef __cplusplus
 extern "C" {
#endif

/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* USER CODE BEGIN Includes */
#include "gpio.h"

typedef struct
{
	
	uint32_t	Minimum_Pressure;		/*	minimum 	*/
	uint32_t	Maximum_Pressure;
	
	uint16_t Minimum_Matrix[Max_X][Max_Y];
	uint16_t Maximum_Matrix[Max_X][Max_Y];
	
}Calibrate_Para_s;

/* USER CODE END Includes */

extern ADC_HandleTypeDef hadc1;
extern ADC_HandleTypeDef hadc2;
extern ADC_HandleTypeDef hadc3;

/* USER CODE BEGIN Private defines */

#define	SAMPLE_FRAME_OUT_FLAG		0x0055		/*ONE BY ONE OUT SAMPLE frame*/
#define	SAMPLE_FRAME_OVE_FLAG		0x55AA		/* OVER SAMPLE */

extern	uint16_t Sample_Frame_Out;


/* by author: ��Ӳ� 138 1163 7881
	Address offset: 0x08 (this offset address is relative to ADC1 base address + 0x300),	
	#define ADC1_BASE             (APB2PERIPH_BASE + 0x2000UL)
	#define APB2PERIPH_BASE       (PERIPH_BASE + 0x00010000UL)
	#define PERIPH_BASE           0x40000000UL 
	ADC1 base address 					= 0X40012000	
*/

#define PERI_ADC_CDR_ADDR    ((uint32_t)0x40012308)					
/* Three channel converter ,so size is 3 */
#define DMA_TRANS_SIZE				0X03				
/*memry addr*/	
extern	__IO uint16_t ADC_ConvertedValue[3];
extern	DMA_HandleTypeDef hdma_adc1;

/* USER CODE END Private defines */

void MX_ADC1_Init(void);
void MX_ADC2_Init(void);
void MX_ADC3_Init(void);

/* USER CODE BEGIN Prototypes */

	/* FUNCTION IN BSP_ADC.C FILE */
void ADC_DMACmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_Cmd(ADC_TypeDef* ADCx, FunctionalState NewState);
void ADC_MultiModeDMARequestAfterLastTransferCmd(FunctionalState NewState);
void ADC_SoftwareStartConv(ADC_TypeDef* ADCx);

			/*DMA TRANSMITE OKAY CALL BACK FUNCTION*/
void ADC_Conv_DMA_XferCpltCallback(struct __DMA_HandleTypeDef * hdma);
		/* sample matrix using index (Current) */
uint8_t Get_Sample_Matrix_Index(void);

/* USER CODE END Prototypes */

#ifdef __cplusplus
}
#endif
#endif /*__ adc_H */

/**
  * @}
  */

/**
  * @}
  */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
