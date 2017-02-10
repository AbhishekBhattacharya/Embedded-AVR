#include<avr/io.h>
#include<util/delay.h>
void main()
{
 DDRD=0xff;
 DDRC=0x00;
 PORTC=0xff;
 while(1)
 {
 
   if(((PINC&(0x01))==0)&&(PINC&(0x02))!=0)
    PORTD=0b00001001;
	
	{if(((PINC&(0x01))!=0)&&(PINC&(0x02))==0)
	PORTD=0b00000110;}
     
	{if(((PINC&(0x02))==0)&&(PINC&(0x01))==0)
    PORTD=0b00001010;
	
	{ if(((PINC&(0x02))!=0)&&(PINC&(0x01))!=0)
	PORTD=0b00000101;
}}
}}
   
    

