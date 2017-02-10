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


int adc(unsigned int i)
{ 

 
 //ADMUX=i;

 
   if(ADMUX=0x00)
   { cmd(0x80);}
   
   if(ADMUX=0x01)
   { cmd(0x88);}
     if(ADMUX=0x01)
   { cmd(0xc5);}
   
   
   
   ADCSRA=0X83;
   
ADCSRA=ADCSRA|(0X40);
     while((ADCSRA&(0x10))==0);
	
	 return ADC;
}
void main()
{
  int a,z[16],b,c;
 DDRD=DDRB=0xff;
   cmd(0x38);
  _delay_ms(20);
 cmd(0x06);
  _delay_ms(20);
 cmd(0x0c);
 _delay_ms(20);
   

 while(1)
   
{	   a=adc(0x00);
	  
	 b=adc(0x01);
	  
	c=adc(0x02);
	  sprintf(z,"%d     %d",a,b);
	  cmd(0x80);
	  str(z);
	   sprintf(z,"%d",c);
	   cmd(0xc5);
	   str(z);
	  
	  }
	  

}	   
	   


