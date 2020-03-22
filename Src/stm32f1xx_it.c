#include "stm32f1xx.h"
#include "stm32f1xx_it.h"
#include "i2c.h"


void SysTick_Handler(void)
{

}


void I2C1_EV_IRQHandler(void)
{

	
	while(!LL_I2C_IsActiveFlag_ADDR(I2C1)){};
	LL_I2C_ClearFlag_ADDR(I2C1);
	
	while(!LL_I2C_IsActiveFlag_RXNE(I2C1)){};
	i2c_data = I2C1->DR;
		
	LL_I2C_ClearFlag_STOP(I2C1);
	
}


void USART1_IRQHandler(void)
{
	
}
