#include<avr/io.h>
#include<util/delay.h>
int main()
{
  DDRB=0xef;

  DDRD=0xff;
  while(1)
  {

    SPCR=0x50;
  _delay_ms(200);
  SPDR='A';
  

  while((SPSR&0x80)==0x00);
 // SPSR=0x80;
}

}
