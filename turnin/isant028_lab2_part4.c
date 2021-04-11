/*	Author: isant028
 *  Partner(s) Name: Isabella Santiago
 *	Lab Section:
 *	Assignment: Lab 2  Exercise #4
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
	DDRB = 0xFF; PORTB = 0x00; // Configure port B's 8 pins as outputs, initialize to 0s
	DDRC = 0xFF; PORTC = 0x00;
	DDRD = 0xFF; PORTD = 0x00;
	unsigned char tmpA = 0x00; 
	unsigned char tmpB = 0x00;
        unsigned char tmpC = 0x00;
        unsigned char tmpD = 0x00; 
        unsigned char totWeight = 0x00;
	
	while(1) {
		tmpA = PINA 
                tmpB = PINB 
                tmpC = PINC 
		
		totWeight = tmpA + tmpB +tmpC;
		tmpD = (totWeight >>2); 
		tmpD = tmpD & 0xFC;
		if (totWeight > 140){
			tmpD = tmpD | 0x01; 
		}

		if((tmpA-tmpC) > 80 || (tmpC -tmpA)>80){
			tmpD = tmpD | 0x02; 
    }
		}
		PORTD = tmpd; 
		return 0;
}

