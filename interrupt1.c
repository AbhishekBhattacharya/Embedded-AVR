#include<avr/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
void main()
{DDRB=0XFF;
DDRC=0XFF;
 sei();
 GICR=0X40;
 MCUCR=0X03;
 while(1)
 {PORTC=0XFF;
 _delay_ms(500);
PORTC=0X00;
 _delay_ms(500);
 }
 }
    
 ISR(INT0_vect)
 {PORTB=0XFF;
 _delay_ms(500);
 PORTB=0X00;
 _delay_ms(500);
 }
