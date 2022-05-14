

#ifndef INC_MYSTM32F407XX_GPIO_DRIVER_H_
#define INC_MYSTM32F407XX_GPIO_DRIVER_H_

#include "MyStm32f407xx.h"


typedef struct
{
	uint8_t GPIO_PinNumber;
	uint8_t GPIO_PinMode;			
	uint8_t GPIO_PinSpeed;			
	uint8_t GPIO_PinPuPdControl;
	uint8_t GPIO_PinOPType;
	uint8_t GPIO_PinAltFunMode;
}GPIO_PinConfig_t;




typedef struct
{
	GPIO_RegDef_t *pGPIOx;       		
	GPIO_PinConfig_t GPIO_PinConfig;   

}GPIO_Handle_t;



#define GPIO_PIN_NO_0  				
#define GPIO_PIN_NO_1  				
#define GPIO_PIN_NO_2  				
#define GPIO_PIN_NO_3  				
#define GPIO_PIN_NO_4  				
#define GPIO_PIN_NO_5  				
#define GPIO_PIN_NO_6  				
#define GPIO_PIN_NO_7  			
#define GPIO_PIN_NO_8  				
#define GPIO_PIN_NO_9  				
#define GPIO_PIN_NO_10  			
#define GPIO_PIN_NO_11 				
#define GPIO_PIN_NO_12  			
#define GPIO_PIN_NO_13 				
#define GPIO_PIN_NO_14 				
#define GPIO_PIN_NO_15 				


#define GPIO_MODE_IN 		
#define GPIO_MODE_OUT 		
#define GPIO_MODE_ALTFN 	
#define GPIO_MODE_ANALOG 	
#define GPIO_MODE_IT_FT     
#define GPIO_MODE_IT_RT     
#define GPIO_MODE_IT_RFT    
#define GPIO_OP_TYPE_PP   
#define GPIO_OP_TYPE_OD   
#define GPIO_SPEED_LOW			
#define GPIO_SPEED_MEDIUM		
#define GPIO_SPEED_FAST			
#define GPOI_SPEED_HIGH			

#define GPIO_NO_PUPD   		
#define GPIO_PIN_PU			
#define GPIO_PIN_PD			

void GPIO_PeriClockControl(GPIO_RegDef_t *pGPIOx, uint8_t EnorDi);
void GPIO_Init(GPIO_Handle_t *pGPIOHandle);
void GPIO_DeInit(GPIO_RegDef_t *pGPIOx);
uint8_t GPIO_ReadFromInputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
uint16_t GPIO_ReadFromInputPort(GPIO_RegDef_t *pGPIOx);
void GPIO_WriteToOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber, uint8_t Value);
void GPIO_WriteToOutputPort(GPIO_RegDef_t *pGPIOx, uint16_t Value);
void GPIO_ToggleOutputPin(GPIO_RegDef_t *pGPIOx, uint8_t PinNumber);
void GPIO_IRQInterruptConfig(uint8_t IRQNumber, uint8_t EnorDi);
void GPIO_IRQPriorityConfig(uint8_t IRQNumber, uint32_t IRQPriority);
void GPIO_IRQHandling(uint8_t PinNumber);


#endif 