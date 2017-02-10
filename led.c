#include<avr/io.h>
#include<util/delay.h>
void main()
{
  DDRB=0b11111111;
  while(1)
  { 
    PORTB=0b11111111;
	_delay_ms(500);
	PORTB=0b00000000;
	_delay_ms(500);
	}
	}
