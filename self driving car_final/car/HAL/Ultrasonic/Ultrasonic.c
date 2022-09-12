/*
 * Ultrasonic.c
 *
 * Created: 2/17/2022 8:10:14 PM
 *  Author: User
 */ 
#include "Ultrasonic.h"
       
static volatile uint32_t distance        = 0; /*variable use to save the time has taken between triggering of ultrasonic and interruption of echo */
static volatile uint16_t echo_pin_value  = 0;// flag
static volatile uint32_t flagg           = 0;//flagg
static volatile uint32_t sample1         = 0;
static volatile uint32_t sample2         = 0;
static volatile uint32_t count_a         = 0;
uint32_t Ultrasonic(void)
{
	DIO_SetPinDirection(TRIG_PORT, TRIG_PIN,DIO_OUTPUT);
	GICR  |=1<<INT0  ; //	Enable Peripheral interrupt
	MCUCR |=1<<ISC00 ; // Any logical change on INT0 generates an interrupt request
	TCCR0 |=1<<CS02  ;
	TCCR0 |=1<<CS00  ;//choose pre-scaler 1024 and start timer
	TIMSK |=1<<TOIE0 ; //enable OVF interrupt flag
	CLR_BIT(TCCR0, WGM01);CLR_BIT(TCCR0, WGM00);
	sei();//Enable global interrupt
	while(1)
	{
	DIO_SetPinValue(TRIG_PORT,TRIG_PIN,DIO_HIGH);//set trigger pin high
	_delay_us(15);
	DIO_SetPinValue(TRIG_PORT,TRIG_PIN,DIO_LOW);//set trigger pin low
	count_a = flagg*256+(255-sample1)+sample2;
	distance=count_a/58;	//distance in centimeters
	/*distance =(343000*((flagg*255+(255-sample1)+sample2)/2))/62500;
	LCD_Clear();
	LCD_Write_Number(distance);
	//_delay_ms(250);*/
	flagg=0;
	return distance;//return distance in centimeters
	}
}
ISR(INT0_vect)
{
	if (echo_pin_value==1)
	{
		sample2=TCNT0; //get the value at TCNT0 when echo low
		echo_pin_value=0;
	}
	else if (echo_pin_value==0)
	{
		sample1=TCNT0 ;//get the value at TCNT0 when echo high
		echo_pin_value=1;
	}
	else
	{
		
	}
}
ISR(TIMER0_OVF_vect)
{
	if (GET_BIT(TIMSK,TOV0)==1)
	{
		flagg++ ;
	}
	else 
	{
		
	}
	
}




