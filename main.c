/*
 * main.c
 *
 *  Created on: Feb 4, 2024
 *      Author: Mariam
 */

# include "avr/io.h"
# include "util/delay.h"

# include "STD_TYPES.h"
# include "BIT_MATH.h"

# include "DIO_interface.h"
# include "../../LED/LED_interface.h"
# include "../../PUSH_BUTTON/BUTTON_interface.h"

//# define N_PRESSED 0
//# define PRESSED   1

int main(void)
{
	    LED_Type LED_RED1={DIO_PORTA,DIO_PIN0,ACTIVE_HIGH};
		LED_Type LED_YELLOW2={DIO_PORTA,DIO_PIN1,ACTIVE_HIGH};
		LED_Type LED_GREEN3={DIO_PORTA,DIO_PIN2,ACTIVE_HIGH};
		LED_Type LED_BLUE4={DIO_PORTA,DIO_PIN3,ACTIVE_HIGH};
		LED_Type LED_RED5={DIO_PORTA,DIO_PIN4,ACTIVE_HIGH};

		LED_voidInit(LED_RED1);
		LED_voidInit(LED_YELLOW2);
		LED_voidInit(LED_GREEN3);
		LED_voidInit(LED_BLUE4);
		LED_voidInit(LED_RED5);

		BUTTON_Type BUTTON_1={DIO_PORTB,DIO_PIN0,PULLUP};
		BUTTON_Type BUTTON_2={DIO_PORTB,DIO_PIN2,PULLUP};
		BUTTON_Type BUTTON_3={DIO_PORTB,DIO_PIN4,PULLUP};

		BUTTON_voidInit(BUTTON_1);
		BUTTON_voidInit(BUTTON_2);
		BUTTON_voidInit(BUTTON_3);


	while(1)
	{
		//u8 BUTTON_SQ_1=BUTTON_u8GetPressed(BUTTON_1);
		//u8 BUTTON_SQ_2=BUTTON_u8GetPressed(BUTTON_2);
		//u8 BUTTON_SQ_3=BUTTON_u8GetPressed(BUTTON_3);

		if(BUTTON_u8GetPressed(BUTTON_1)==0)
		{
			_delay_ms(150);
			if(BUTTON_u8GetPressed(BUTTON_1)==0)
			{
			LED_voidOn(LED_RED1);
			LED_voidOn(LED_YELLOW2);
			LED_voidOn(LED_GREEN3);

			_delay_ms(1000);
			}
		}
		else
		{
		  LED_voidOff(LED_RED1);
		  LED_voidOff(LED_YELLOW2);
		  LED_voidOff(LED_GREEN3);

		  _delay_ms(1000);
		}

		  if(BUTTON_u8GetPressed(BUTTON_2)==0)
		{
			        _delay_ms(150);
		   if(BUTTON_u8GetPressed(BUTTON_2)==0)
		   {
					LED_voidOn(LED_RED1);
					_delay_ms(500);
					LED_voidOn(LED_YELLOW2);
					_delay_ms(500);
					LED_voidOn(LED_GREEN3);
					_delay_ms(500);
		   }
		}
		 else
		{
					LED_voidOff(LED_GREEN3);
					_delay_ms(500);
					LED_voidOff(LED_YELLOW2);
					_delay_ms(500);
					LED_voidOff(LED_RED1);
					_delay_ms(500);
		 }

		  if(BUTTON_u8GetPressed(BUTTON_3)==0)
			{
			             _delay_ms(150);
			   if(BUTTON_u8GetPressed(BUTTON_3)==0)
			   {
							LED_voidOn(LED_RED1);
							LED_voidOn(LED_RED5);
							_delay_ms(500);
							LED_voidOn(LED_YELLOW2);
							LED_voidOn(LED_BLUE4);
							_delay_ms(500);
							LED_voidOn(LED_GREEN3);
							_delay_ms(500);
			   }
			}
		  else
		  {
							LED_voidOff(LED_GREEN3);
							_delay_ms(500);
							LED_voidOff(LED_YELLOW2);
							LED_voidOff(LED_BLUE4);
							_delay_ms(500);
							LED_voidOff(LED_RED1);
							LED_voidOff(LED_RED5);
							_delay_ms(500);
		  }





	}
	return 0;
}
