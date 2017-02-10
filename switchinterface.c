#include<avr/io.h>
#include<util/delay.h>
void main()
{DDRD=0b00000000;
 DDRB=0b11111111;
 PORTD=0b11111111;
 if((PIND&(0b00000001))==0)
 {PORTB=0b00000001;
 _delay_ms(250);
 }
 else
 PORTB=0b00000000;
 
}
