#include<avr/io.h>
#include<util/delay.h>
int main()
{
  DDRB=0xef;
  SPCR=0x50;
  DDRD=0xff;
 {PORTD=0x06;
  SPDR='A';
  while((SPSR&0x80)==0x00);
  SPSR=0x80;
_delay_ms(1000);
}
  PORTD=0x05;
{
 SPDR='B';
  while((SPSR&0x80)==0x00);
  SPSR=0x80;
  _delay_ms(1000);
}

PORTD=0x03;
{SPDR='C';
  while((SPSR&0x80)==0x00);
  SPSR=0x80;
  _delay_ms(1000);
}
}
