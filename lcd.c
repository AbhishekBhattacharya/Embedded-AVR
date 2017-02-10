#include<avr/io.h>
#include<util/delay.h>
#include<stdio.h>
void data(unsigned char i)
{PORTB=0X01;
PORTD=i;
PORTB=0X05;
_delay_ms(100);
PORTB=0X01;
}
void cmd(unsigned char i)
{PORTB=0X00;
PORTD=i;
PORTB=0X04;
_delay_ms(100);
PORTB=0X00;
}
void str(unsigned char *p)
{ while((*p)!='\0')
  { data(*p);
     _delay_ms(20);
	 p++;
	 }
	 }

 
void main()
{
 DDRD=0xff;
 DDRB=0xff;
 cmd(0x38);
  _delay_ms(20);
 cmd(0x06);
  _delay_ms(20);
 cmd(0x0c);
 _delay_ms(20);
  char a[24],b[60],c[60];
  int e,f,g,x,y,z;

 for(int x=0;x<3;e++)

   { sprintf(a,"%d",x);
     str(a);
 for(int e=0;e<10;e++)
  { cmd(0x80);
   sprintf(a,"%d",e);
     str(a);
    
	 for(int y=0;y<10;y++)
	 	 
	  {  sprintf(b,":%d",y); 
	  str(b);
     for(int f=0;f<10;f++) 
            

	  cmd(0x83);
	    sprintf(b,"%d",f);
		str(b);
		_delay_ms(3600);
		 
	  	 
	    { for(int z=0;z<10;z++)
		 { sprintf(c,":%d",z);
		 str(c);
		 for(int g=00;g<10;g++)
		cmd(0x86);
		   sprintf(c,"%d",g);
		   _delay_ms(60);
		   str(c);
   
     }
 }
 }
 }}}


