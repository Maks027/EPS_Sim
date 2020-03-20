#ifndef __i2c_H
#define __i2c_H
#ifdef __cplusplus
 extern "C" {
#endif

#include "stm32f1xx_ll_i2c.h"
#include "main.h"

extern void _Error_Handler(char *, int);

void MX_I2C1_Init(void);

extern uint8_t i2c_data;

#ifdef __cplusplus
}
#endif
#endif /*__ i2c_H */
