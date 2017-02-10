#include<avr/io.h>
#include<util/delay.h>
void main()
{ DDRB=0b11111111;

  while(1)
  {  int a=0b00000001;
  int b=0b10000000;
  int c=0b00001111;
  int d=0b11110000;
   for(int i=1;i<5;i++)
  {
  PORTB=a+b;
    _delay_ms(500);
   a=a|(a<<1);
   b=b|(b>>1);
}for(int j=1;j<5;j++)
{  
PORTB=c+d;
    _delay_ms(500);
   c=c&(c>>1);
   d=d&(d<<1);



}}
}
