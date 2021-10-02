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
    /* Insert your solution below */
	unsigned char tmpB = 0x00;
	unsigned char tmpA = 0x00;
    while (1) {
		tmpA = PINA & 0x01;
		if(tmpA == 0x01){
			tmpB = 0x01;
		}
		else{
			tmpB = 0x00;
		}
		PORTB = tmpB;
    }
    return 0;
}
