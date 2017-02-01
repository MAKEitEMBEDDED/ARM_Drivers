/*
 * Delay.h
 *
 * Created: 2/1/2017 12:51:54 PM
 *  Author: HP
 */ 
#include "Data_Types.h"

#ifndef DELAY_H_
#define DELAY_H_



#define F_OSC 16000000UL

#define SysTick_LOAD    (*(volatile u32*)0xE000E014)
#define SysTick_CTRL    (*(volatile u32*)0xE000E010)

void _delay_s (u32);
void _delay_ms(u32);
void _delay_us(u32);


#endif /* DELAY_H_ */