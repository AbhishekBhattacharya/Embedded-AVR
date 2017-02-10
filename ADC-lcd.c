#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
void data(unsigned char i)
{PORTD=0X01;
PORTB=i;
PORTD=0X05;
_delay_ms(100);
PORTD=0X01;
}
void str(unsigned char *p)
{ while((*p)!='\0')
  { data(*p);
     _delay_ms(20);
	 p++;
	 }

	 }

 
void cmd(unsigned char i)
{PORTD=0X00;
PORTB=i;
PORTD=0X04;
_delay_ms(100);
PORTD=0X00;
}
void main()
{
unsigned int i;
char a[16];
 DDRD=DDRB=0xff;
   ADMUX=0x00;
   
   ADCSRA=0X83;
   
   cmd(0x38);
  _delay_ms(20);
 cmd(0x06);
  _delay_ms(20);
 cmd(0x0c);
 _delay_ms(20);
   
   
   
   //str("hello");
  // while(1);
   while(1)
   { ADCSRA=ADCSRA|(0X40);
     while((ADCSRA&(0x10))==0);
	// PORTB=ADCL;
	// PORTD=ADCH;
	i=ADC;
	sprintf(a,"%d",i);
   str(a);
	 ADCSRA=ADCSRA|(0x10);
	 cmd(0x80);
	 cmd(0x01);
}}
