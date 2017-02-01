/*
 * Delay.c
 *
 * Created: 2/1/2017 12:52:04 PM
 *  Author: HP
 */ 

#include "Delay.h"

void _delay_s(u32 Given_Time){
	int i;
	for (i = 0; i < Given_Time; i++){
		SysTick_LOAD = (F_OSC - 1U);
		SysTick_CTRL = 0x5;
		while ((SysTick_CTRL & 0x10000) == 0){}
		(*(volatile u32*)0xE000E010) = 0;
	}
}

void _delay_ms(u32 Given_Time){
	int i;
	for (i = 0 ; i < Given_Time ; i++)
	{
		SysTick_LOAD = ((F_OSC/1000U) - 1U);
		SysTick_CTRL = 0x5;
		while ((SysTick_CTRL & 0x10000) == 0){}
		SysTick_CTRL = 0;
	}
}


void _delay_us(u32 Given_Time){
	int i;
	for (i = 0 ; i < Given_Time ; i++)
	{
		SysTick_LOAD = ((F_OSC/1000000U) - 1U);
		SysTick_CTRL = 0x5;
		while ((SysTick_CTRL & 0x10000) == 0){}
		SysTick_CTRL = 0;
	}
}