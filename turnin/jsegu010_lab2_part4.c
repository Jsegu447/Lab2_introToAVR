/*	Author: jsegu010
 *  Partner(s) Name: 
 *	Lab Section:
 *	Assignment: Lab #  Exercise #4 (challenge)
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
	DDRA = 0x00; PORTA = 0x00;
	DDRB = 0x00; PORTB = 0x00;
	DDRC = 0x00; PORTC = 0x00;
	DDRD = 0xFF; PORTD = 0x00;
    while (1) {
	unsigned char tmpd;
	unsigned char weight = PINA + PINB;
	if((PINC + weight) > 0x8C){
		tmpd = 0x01;
   	 }
	if( PINA > PINB){
		if(PINA - PINB){
		tmpd = tmpd & 0x02;
		}
	}
	else if (PINA < PINB){
		 if(PINB - PINA){
                tmpd = tmpd & 0x02;
                }
        }
	PORTD = tmpd | (weight + PINC);
	}
    return 0;
}
