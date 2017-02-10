#include<avr/io.h>
#include<util/delay.h>

void data(unsigned char i)
{
PORTC=0X01;
PORTD=i;
PORTC=0X05;
_delay_ms(10);
PORTC=0X01;
}


void cmd(unsigned char i)
{
PORTC=0X00;
PORTD=i;
PORTC=0X04;
_delay_ms(10);
PORTC=0X00;
}


int main()
{ 
DDRB=0X10;
 DDRD=0xff;
  DDRC=0xff;
 cmd(0x38);
 cmd(0x06);
 cmd(0x0e);
 //_delay_ms(20);
   while(1)
   {
  SPCR=0x40;
  while((SPSR&0x80)==0x00);
 data(SPDR);
 // SPSR=0x80;
}
}
