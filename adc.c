#include<avr/io.h>
#include<util/delay.h>
void main()
{ DDRD=DDRB=0xff;
   ADMUX=0x00;
   ADCSRA=0X83;
   while(1)
   { ADCSRA=ADCSRA|(0X40);
     while((ADCSRA&(0x10))==0);
	 PORTB=ADCL;
	 PORTD=ADCH;
	 ADCSRA=ADCSRA|(0x10);
}}
