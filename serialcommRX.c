#include<avr/io.h>
#include<util/delay.h>
void data(unsigned char i)
{PORTC=0X01;
PORTB=i;
PORTC=0X05;
_delay_ms(100);
PORTC=0X01;
}
void cmd(unsigned char i)
{PORTC=0X00;
PORTB=i;
PORTC=0X04;
_delay_ms(100);
PORTC=0X00;
}

void main()
{ DDRC=0xff;
  cmd(0x38);
  _delay_ms(20);
 cmd(0x06);
  _delay_ms(20);
 cmd(0x0c);
 _delay_ms(20);
  DDRB=0xff;
   UBRRL=12;
  UBRRH=0;
   UCSRB|=(1<<RXEN);
  while(1)
  { while((UCSRA&(1<<RXC))==0);
  
   
   data(UDR);
    //UCSRA|=(1<<RXC);
	}
	}


