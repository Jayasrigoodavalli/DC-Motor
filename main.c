/*
 * GccApplication2.c
 *
 * Created: 15-May-19 2:12:49 PM
 * Author : JAYASREE
 */ 
#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>



int main(void)
{
	DDRC=0XFF;
    /* Replace with your application code */
    while (1) 
    {
		PORTC|=1<<PC0;
		_delay_ms(1000);
		PORTC|=0<<PC0;
		_delay_ms(1000);
		PORTC|=0<<PC1;
		_delay_ms(1000);
		PORTC|=1<<PC1;
		_delay_ms(1000);
    }
}

