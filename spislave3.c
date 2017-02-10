#include<avr/io.h>
#include<util/delay.h>
int main()
{
  DDRB=0x10;
  SPCR=0x40;
  DDRD=0xff;
  
  while((SPSR&0x80)==0x00);
  PORTD=SPDR;
  SPSR=0x80;
}
