#include<avr/io.h>
#include<util/delay.h>
void main()
{DDRB=0Xff;
PORTB=0XFF;

while(1)
{TCCR0=0X02;
 for(int i=0;i<1953;i++)
  {TCNT0=0;
   while((TIFR&(0X01))==0);
   TIFR=0X01;
  }
PORTB=~PORTB;
  }
}
