/*****************************************************
This program was produced by the
CodeWizardAVR V2.05.0 Professional
Automatic Program Generator
© Copyright 1998-2010 Pavel Haiduc, HP InfoTech s.r.l.
http://www.hpinfotech.com

Project : 
Version : 
Date    : 07.09.2016
Author  : 
Company : 
Comments: 


Chip type               : ATmega128
Program type            : Application
AVR Core Clock frequency: 1,000000 MHz
Memory model            : Small
External RAM size       : 0
Data Stack size         : 1024
*****************************************************/

#include <mega128.h>
#include <delay.h>



void main(void)
{
PORTA=0x00;
DDRA=0x92;
PORTB=0x00;
DDRB=0x00;
PORTC=0x00;
DDRC=0x00;
PORTD=0x00001110;
DDRD=0x00;
PORTE=0x00;
DDRE=0x00;
PORTF=0x00;
DDRF=0x00;
PORTG=0x00;
DDRG=0x00;

while (1)
{
if (PIND.0 == 0)
{PORTD.1=1;
PORTD.2=0;
PORTD.3=0;
delay_ms(500); 
PORTD.1=0;
PORTD.2=1;
PORTD.3=0;
delay_ms(500); 
}
else
if (PIND.0 == 1)
{PORTD.1=1;
PORTD.2=1;
PORTD.3=1;
delay_ms(500); 
PORTD.1=0;
PORTD.2=1;
PORTD.3=1;
delay_ms(500); 
}    