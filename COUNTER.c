#include<avr/io.h>
#include<util/delay.h>
void main()
{DDRB=0XFF;
TCCR0=0X06;
while(1)
{
while((TIFR&(0X01))==(0X00))
{PORTB=TCNT0;
}
TIFR=0X01;
}
}
