#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
void data(unsigned char i)
{PORTD=0X01;
PORTB=i;
PORTD=0X05;
_delay_ms(100);
PORTD=0X01;
}
void str(unsigned char *p)
{ while((*p)!='\0')
  { data(*p);
     _delay_ms(20);
	 p++;
	 }

	 }

 
void cmd(unsigned char i)
{PORTD=0X00;
PORTB=i;
PORTD=0X04;
_delay_ms(100);
PORTD=0X00;
}


void main()
{  unsigned int i;
  int z[16],x[16],b=5;
  int a;
  ADMUX=0x00;
  ADCSRA=0x83;

 DDRD=DDRB=0xff;
   cmd(0x38);
  _delay_ms(20);
 cmd(0x06);
  _delay_ms(20);
 cmd(0x0c);
 _delay_ms(20);
   

 while(1)
 {  
    
	ADCSRA=ADCSRA|(1<<ADSC);
    while((ADCSRA&(0x10))==0);

   i=ADC;
   sprintf(z,"%d",i);
   //str(z);
   cmd(0xc0);
    str(z);
   //ADCSRA=ADCSRA|(0x10);
   
   
   a=((5*i)/1024);
    
   // str(a);
   cmd(0x85);
   sprintf(x,"%d",a);
   str(x);

   ADCSRA=ADCSRA|(0x10);
   

  

}}
     
