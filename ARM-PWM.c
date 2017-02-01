/*
 * ARM_PWM.c
 *
 * Created: 1/21/2017 3:50:35 PM
 *  Author: Jessy
 */ 



#include <avr/io.h>

#include "PWM_Init.h"

int main(void)
{
    Modulex_PWMx Select_Module_and_PWM;
	Select_Module_and_PWM = M0PWM0;
	
	PWM_Init_GPIO(Select_Module_and_PWM);
	
	_PWM0(50);
	_PWM1(50);
	
}