#include<reg51.h>
sbit led1=P1^0;
sbit led2=P1^1;
sbit led3=P1^2;
sbit led4=P1^3;
sbit led5=P1^4;
sbit led6=P1^5;
sbit led7=P1^6;
sbit led8=P1^7;

void delay(unsigned int);
void main(void)
{
    while(1)
    {
    led1=1;
        delay(25000);
		led1=0;
        delay(25000);
			
		led2=1;
        delay(25000);
		led2=0;
        delay(25000);
		
			led3=1;
        delay(25000);
		led3=0;
        delay(25000);
		
			led4=1;
        delay(25000);
		led4=0;
        delay(25000);
		
			led5=1;
        delay(25000);
			led5=0;
        delay(25000);
		
		led6=1;
        delay(25000);
		led6=0;
        delay(25000);
		
		led7=1;
        delay(25000);
		led7=0;
        delay(25000);
		
		led8=1;
        delay(25000);
		led8=0;
        delay(25000);
			
    }
}
void delay(unsigned int itm)
{
unsigned int delay;
    for(delay=0;delay<itm;delay++);
}