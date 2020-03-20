#include "stm32f1xx.h"
#include "stm32f1xx_it.h"
#include "i2c.h"


void SysTick_Handler(void)
{

}


void I2C1_EV_IRQHandler(void)
{
	if((I2C1->SR1 & I2C_SR1_ADDR) && !(I2C1->SR1 & I2C_SR2_TRA)){
		
		while(!(I2C1-> SR1 & I2C_SR1_RXNE)){};
			
		i2c_data = I2C1->DR;
			
		I2C1->CR1 |= I2C_CR1_STOP;
			
	}
	
}


void USART1_IRQHandler(void)
{
	
}
