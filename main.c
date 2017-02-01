/*
 * ARM-Delay.c
 *
 * Created: 2/1/2017 12:51:34 PM
 * Author : HP
 */ 

#include <avr/io.h>


#include "Delay.h"


int main(void)
{
    
	_delay_ms(500);
	_delay_us(500);
	_delay_s(5);
	
}

