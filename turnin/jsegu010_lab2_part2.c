/*	Author: jsegu010
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #2
 *	Exercise Description: [optional - include for your own benefit]
 *	Intro to AVR 
 *
 *	I acknowledge all content contained herein, excluding template or example
 *	code, is my own original work.
 */
#include <avr/io.h>
#ifdef _SIMULATE_
#include "simAVRHeader.h"
#endif

int main(void) {
    /* Insert DDR and PORT initializations */
	DDRA = 0x00; PORTA = 0xFF; // Configure port A's 8 pins as inputs
	DDRB = 0xFF; // Configure port B's 8 pins as outputs
	PORTB = 0x00; // Initialize PORTB output to 0’s
	DDRC = 0xFF;
	PORTC = 0x00; 
    /* Insert your solution below */
    while (1) {
	unsigned char i;
	unsigned char cntavail = 0;
	unsigned char tmpA = PINA;
		for(i = 0; i < 4; i++){
			if((tmpA & 0x01) == 0x01){
				cntavail++;
			}
			tmpA = tmpA >> 1;
		}
  		cntavail = 4 - cntavail;
		PORTC = cntavail;
	}
    return 0;
}
