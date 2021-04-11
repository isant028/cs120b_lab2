/*	Author: isant028
 *  Partner(s) Name: Isabella Santiago
 *	Lab Section:
 *	Assignment: Lab #2  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif
int main(void) {
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRC = 0xFF; PORTC = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	unsigned char tmp1 = 0x00; 
	unsigned char tmp2 = 0x00;
        unsigned char tmp3 = 0x00;
        unsigned char tmp4 = 0x00; 
        unsigned char cntavail = 0x00;
	
	while(1) {
		tmp1 = PINA & 0x01;
                tmp2 = PINA & 0x02;
                tmp3 = PINA & 0x04;
                tmp4 = PINA & 0x08;


	if (tmp1 != 0x01){
		cntavail +=1; 
	}
        if (tmp2 != 0x02){
                cntavail +=1;
        }
        if (tmp3 != 0x04){
                cntavail +=1;
        }
        if (tmp4 != 0x08){
                cntavail +=1;
        }
	PORTC = cntavail; 
	}	

	return 0;
}

