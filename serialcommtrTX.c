#include<avr/io.h>
#include<util/delay.h>
void main()
{

char a[]="hello";
int i=0;
 // DDRD=0xff;
 _delay_ms(400);
  //delay due to lcd functions
   UBRRL=12;
  UBRRH=0;
   UCSRB|=(1<<TXEN);
   while(a[i]!='\0')
   {
   UDR=a[i];
  while((UCSRA&(1<<TXC))==0);
  _delay_ms(100);// delay due to receiver
  i++;

  //UCSRA|=(1<<TXC); internally clear thus no need
  //for string
}
}
