/*
* PWM_Init.c
*
* Created: 1/21/2017 6:29:51 PM
*  Author: Jessy
*/

#include "Data-Types.h"
#include "GPIO/GPIO.h"
#include "PWM_Init.h"
#include "PWM_Registers.h"

#define __PWM_LOAD__	0xFFFF

/************************************************************************/
/*				  Configuring GPIO pin for PWM                          */
/************************************************************************/
/*
In using PWM, we must configure the GPIO pins for PWM output. In this regard, it is same
as all other peripherals. The steps are as follow:
1. Enable the clock to GPIO pin by using RCGCGPIO.
2. Set the GPIOAFSEL (GPIO alternate function) for PWM output pins.
3. Enable digital pins in the GPIODEN (GPIO Digital enable) register.
4. Assign the PWM signals to specific pins using GPIOCTL register. See Tables 11-4 through 11-7.

________________________________________________________________________________________________________________
|M0 PWMx | PIN |	  Clock Enable	  | GPIOAFSL AltFunSet_C |	PortControl (GPIOPCTL)	  |		Digital Enable  |
|--------|-----|----------------------|----------------------|----------------------------|---------------------|
| M0PWM0 | PB6 | CLK_Enable |= (1<<1) |  AltFunSet_B = 0x40  |	PortControl_B |= (4<<24)  | DENPORT_B |= 0x40	|
| M0PWM1 | PB7 | CLK_Enable |= (1<<1) |  AltFunSet_B = 0x80  |	PortControl_B |= (4<<28)  | DENPORT_B |= 0x80	|
| M0PWM2 | PB4 | CLK_Enable |= (1<<1) |  AltFunSet_B = 0x10  |	PortControl_B |= (4<<16)  | DENPORT_B |= 0x10	|
| M0PWM3 | PB5 | CLK_Enable |= (1<<1) |  AltFunSet_B = 0x20  |	PortControl_B |= (4<<20)  | DENPORT_B |= 0x20	|
| M0PWM4 | PE4 | CLK_Enable |= (1<<4) |  AltFunSet_E = 0x10  |	PortControl_E |= (4<<16)  | DENPORT_E |= 0x10	|
| M0PWM5 | PE5 | CLK_Enable |= (1<<4) |  AltFunSet_E = 0x20  |	PortControl_E |= (4<<20)  | DENPORT_E |= 0x20	|
| M0PWM6 | PC4 | CLK_Enable |= (1<<2) |  AltFunSet_C = 0x10  |	PortControl_C |= (4<<16)  | DENPORT_C |= 0x10	|
|________| PD0 | CLK_Enable |= (1<<3) |  AltFunSet_D = 0x01  |	PortControl_D |= (4<<00)  | DENPORT_D |= 0x01	|
| M0PWM7 | PC5 | CLK_Enable |= (1<<2) |  AltFunSet_C = 0x20  |	PortControl_C |= (4<<20)  | DENPORT_C |= 0x20	|
|		 | PD1 | CLK_Enable |= (1<<3) |  AltFunSet_D = 0x02  |	PortControl_D |= (4<<04)  | DENPORT_D |= 0x02	|
-----------------------------------------------------------------------------------------------------------------
Table 1-1: Module 0 (M0) PWM alternate pin assignment
________________________________________________________________________________________________________________
|M1 PWMx | PIN |	Clock Enable	  | GPIOAFSL AltFunSet_C  |  PortControl (GPIOPCTL)	  |		Digital Enable  |
|--------|-----|-- -------------------|---------------------- |---------------------------|---------------------|
| M1PWM0 | PD0 | CLK_Enable |= (1<<3) |	 AltFunSet_D |= 0x01  |  PortControl_D |= (5<<00) |	DENPORT_D |= 0x01	|
| M1PWM1 | PD1 | CLK_Enable |= (1<<3) |	 AltFunSet_D |= 0x02  |  PortControl_D |= (5<<04) |	DENPORT_D |= 0x02	|
| M1PWM2 | PA6 | CLK_Enable |= (1<<0) |	 AltFunSet_A |= 0x40  |  PortControl_A |= (5<<24) |	DENPORT_A |= 0x40	|
|________| PE4 | CLK_Enable |= (1<<4) |	 AltFunSet_E |= 0x10  |  PortControl_E |= (5<<16) |	DENPORT_E |= 0x10	|
| M1PWM3 | PA7 | CLK_Enable |= (1<<0) |	 AltFunSet_A |= 0x80  |  PortControl_A |= (5<<28) |	DENPORT_A |= 0x80	|
|________| PE5 | CLK_Enable |= (1<<4) |	 AltFunSet_E |= 0x20  |  PortControl_E |= (5<<20) |	DENPORT_E |= 0x20	|
| M1PWM4 | PF0 | CLK_Enable |= (1<<5) |	 AltFunSet_F |= 0x01  |  PortControl_F |= (5<<00) |	DENPORT_F |= 0x01	|
| M1PWM5 | PF1 | CLK_Enable |= (1<<5) |	 AltFunSet_F |= 0x02  |  PortControl_F |= (5<<04) |	DENPORT_F |= 0x02	|
| M1PWM6 | PF2 | CLK_Enable |= (1<<5) |	 AltFunSet_F |= 0x04  |  PortControl_F |= (5<<08) |	DENPORT_F |= 0x04	|
| M1PWM7 | PF3 | CLK_Enable |= (1<<5) |	 AltFunSet_F |= 0x08  |  PortControl_F |= (5<<12) |	DENPORT_F |= 0x08	|
-----------------------------------------------------------------------------------------------------------------
Table 1-2: Module 1 (M1) PWM alternate pin assignment
*/

void PWM_Init_GPIO(Modulex_PWMx Mx_PWMx){
	switch(Mx_PWMx){
		case	 M0PWM0		:CLK_Enable |= (1<<1); AltFunSet_B |= 0x40; PortControl_B |= 0x04000000; DENPORT_B |= 0x40; break;
		case	 M0PWM1		:CLK_Enable |= (1<<1); AltFunSet_B |= 0x80; PortControl_B |= 0x40000000; DENPORT_B |= 0x80; break;
		case	 M0PWM2		:CLK_Enable |= (1<<1); AltFunSet_B |= 0x10; PortControl_B |= 0x00040000; DENPORT_B |= 0x10; break;
		case	 M0PWM3		:CLK_Enable |= (1<<1); AltFunSet_B |= 0x20; PortControl_B |= 0x00400000; DENPORT_B |= 0x20; break;
		case	 M0PWM4		:CLK_Enable |= (1<<4); AltFunSet_E |= 0x10; PortControl_E |= 0x00040000; DENPORT_E |= 0x10; break;
		case	 M0PWM5		:CLK_Enable |= (1<<4); AltFunSet_E |= 0x20; PortControl_E |= 0x00400000; DENPORT_E |= 0x20; break;
		case	 M0PWM6_PC4	:CLK_Enable |= (1<<2); AltFunSet_C |= 0x10; PortControl_C |= 0x00040000; DENPORT_C |= 0x10; break;
		case	 M0PWM6_PD0	:CLK_Enable |= (1<<3); AltFunSet_C |= 0x01; PortControl_C |= 0x00000004; DENPORT_C |= 0x01; break;
		case	 M0PWM7_PC5	:CLK_Enable |= (1<<2); AltFunSet_C |= 0x20; PortControl_C |= 0x00400000; DENPORT_C |= 0x20; break;
		case	 M0PWM7_PD1	:CLK_Enable |= (1<<3); AltFunSet_D |= 0x02; PortControl_D |= 0x00000040; DENPORT_D |= 0x02; break;
		/*-----------------------------------------------------------------------------------------*/
		case	 M1PWM0		:CLK_Enable |= (1<<3); AltFunSet_D |= 0x01; PortControl_D |= 0x00000005; DENPORT_D |= 0x01; break;
		case	 M1PWM1		:CLK_Enable |= (1<<3); AltFunSet_D |= 0x02; PortControl_D |= 0x00000050; DENPORT_D |= 0x02; break;
		case	 M1PWM2_PA6	:CLK_Enable |= (1<<0); AltFunSet_A |= 0x40; PortControl_A |= 0x05000000; DENPORT_A |= 0x40; break;
		case	 M1PWM2_PE4	:CLK_Enable |= (1<<4); AltFunSet_E |= 0x10; PortControl_E |= 0x00050000; DENPORT_E |= 0x10; break;
		case	 M1PWM3_PA7	:CLK_Enable |= (1<<0); AltFunSet_A |= 0x80; PortControl_A |= 0x50000000; DENPORT_A |= 0x80; break;
		case	 M1PWM3_PE5	:CLK_Enable |= (1<<4); AltFunSet_E |= 0x20; PortControl_E |= 0x00500000; DENPORT_E |= 0x20; break;
		case	 M1PWM4		:CLK_Enable |= (1<<5); AltFunSet_F |= 0x01; PortControl_F |= 0x00000005; DENPORT_F |= 0x01; break;
		case	 M1PWM5		:CLK_Enable |= (1<<5); AltFunSet_F |= 0x02; PortControl_F |= 0x00000050; DENPORT_F |= 0x02; break;
		case	 M1PWM6		:CLK_Enable |= (1<<5); AltFunSet_F |= 0x04; PortControl_F |= 0x00000500; DENPORT_F |= 0x04; break;
		case	 M1PWM7		:CLK_Enable |= (1<<5); AltFunSet_F |= 0x08; PortControl_F |= 0x00005000; DENPORT_F |= 0x08; break;
		default				:CLK_Enable |= (1<<1); AltFunSet_B |= 0x40; PortControl_B |= 0x04000000;					break;
	}
}

/************************************************************************/
/*				 Configuring PWM generator to create pulses             */
/************************************************************************/
/*
After the GPIO configuration, we need to take the following steps to configure the PWM:
1. Disable the generator using PWM×CTL register.
2. Configure PWM×GENA (or PWM×GENB).
3. Load the value into PWM×LOAD register to set the desired output frequency.
4. Load the value into PWM×CMPA (or PWMxCMPB) register to set the desired duty cycle.
5. Start the PWM generator using PWMxCTL.
6. Configure PWM×ENABLE register to direct the PWMx to output pin.
*/

void _PWM0 (u8 Duty_Cycle){
	PWM0CTL_PWM0	&=~(0 << 1);							/*	Set Enable bit with Zero to disable it.	*/
	PWM0GENA_PWM0 |= 0x0000008C;							/*	ACTLOAD	in GENA is 0x03, Drive PWMA High.
																ACTCMPAD (Action compare A Down)0x10, Invert PWM.	*/
	
	PWM0LOAD_PWM0	|= __PWM_LOAD__;						/*	Set compare value to get Duty Cycle.	*/
	PWM0CMPA_PWM0	|= (1 - (Duty_Cycle/100))*__PWM_LOAD__;	/*	COMPA = (100% - Duty Cycle)xLOAD.	*/
	
	PWM0CTL_PWM0	|= (0 << 1);							/*	Set Enable bit to start timer.	*/
	PWMENABLE_PWM0	|= (1 << 0);							/*	Start PWM0 channel 0.	*/
}

void _PWM1 (u8 Duty_Cycle){
	PWM0CTL_PWM1	&=~(0 << 1);							/*	Set Enable bit with Zero to disable it.	*/
	PWM0GENA_PWM1 |= 0x0000008C;							/*	ACTLOAD	in GENA is 0x03, Drive PWMA High.
																ACTCMPAD (Action compare A Down)0x10, Invert PWM.	*/
	
	PWM0LOAD_PWM1	|= __PWM_LOAD__;						/*	Set compare value to get Duty Cycle.	*/
	PWM0CMPA_PWM1	|= (1 - (Duty_Cycle/100))*__PWM_LOAD__;	/*	COMPA = (100% - Duty Cycle)xLOAD.	*/
	
	PWM0CTL_PWM1	|= (0 << 1);							/*	Set Enable bit to start timer.	*/
	PWMENABLE_PWM1	|= (1 << 0);							/*	Start PWM0 channel 0.	*/
}

