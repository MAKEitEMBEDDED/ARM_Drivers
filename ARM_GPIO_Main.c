
#include "GPIO/GPIO.h"
int main(void){
	DDRPORT_A = 0x00;
	CLK_Enable |= (1<<5);
	LOCK_F = 0x4C4F434BU;
	Commit_F = 0x0E;
	AltFunSet_F = 0X00;
	DDRPORT_F = 0x0E;
	DENPORT_F = 0x0E;
	while (1){
		DataPORT_F ^= 0x0e;
	}
}