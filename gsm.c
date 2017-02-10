#include<avr/io.h>
#include<util/delay.h>
void main()
{

char a[]="AT\r";
char b[]="ATD+918130043488;\r";
int i=0,j=0;
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
  _delay_ms(200);
// delay due to receiver
  i++;

  //UCSRA|=(1<<TXC); internally clear thus no need
  //for string
}
_delay_ms(1000);
_delay_ms(1000);
while(b[j]!='\0')
   {
   UDR=b[j];
  while((UCSRA&(1<<TXC))==0);
   _delay_ms(200);

  j++;
}
}
