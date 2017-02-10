#include<avr/io.h>
#include<util/delay.h>
void main()
{
  DDRD=0xff;
  
    UBRRL=12;
  UBRRH=0;
   UCSRB=(1<<TXEN);
   UDR='A';
  while((UCSRA&(1<<TXC))==0);
}
