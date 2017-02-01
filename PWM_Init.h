/*
 * PWM_Init.h
 *
 * Created: 1/21/2017 7:39:30 PM
 *  Author: Jessy
 */ 

#include "Data-Types.h"

#ifndef PWM_INIT_H_
#define PWM_INIT_H_

typedef enum{
	M0PWM0,	M0PWM1,	M0PWM2,	M0PWM3,	M0PWM4,	M0PWM5,	M0PWM6_PC4,	M0PWM6_PD0,	M0PWM7_PC5, M0PWM7_PD1,
	M1PWM0,	M1PWM1,	M1PWM2_PA6,	M1PWM2_PE4,	M1PWM3_PA7,	M1PWM3_PE5,	M1PWM4,	M1PWM5,	M1PWM6,	M1PWM7
}Modulex_PWMx;



void PWM_Init_GPIO(Modulex_PWMx);

void _PWM0 (u8 Duty_Cycle);
void _PWM1 (u8 Duty_Cycle);








#endif /* PWM_INIT_H_ */