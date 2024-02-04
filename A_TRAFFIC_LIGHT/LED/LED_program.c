/*
 * LED_program.c
 *
 *  Created on: Feb 4, 2024
 *      Author: Mariam
 */
# include "../../LIP/STD_TYPES.H"
# include "../../LIP/BIT_MATH.H"
# include "DIO_interface.H"
# include "LED_config.h"
# include "LED_private.h"
# include "LED_interface.h"


void LED_voidInit   (LED_Type LED_Configration)
{
	DIO_enumSetPinDirection(LED_Configration.port ,LED_Configration.pin , DIO_OUTPUT);
}

void LED_voidOn     (LED_Type LED_Configration)
{
	if(LED_Configration.led_state==ACTIVE_HIGH)
	{DIO_enumSetPinValue(LED_Configration.port ,LED_Configration.pin , DIO_HIGH);}
	else if(LED_Configration.led_state==ACTIVE_LOW)
	{DIO_enumSetPinValue(LED_Configration.port ,LED_Configration.pin , DIO_LOW);}


}

void LED_voidOff    (LED_Type LED_Configration)
{
	if(LED_Configration.led_state==ACTIVE_HIGH)
	{DIO_enumSetPinValue(LED_Configration.port ,LED_Configration.pin , DIO_LOW);}
	else if(LED_Configration.led_state==ACTIVE_LOW)
	{DIO_enumSetPinValue(LED_Configration.port ,LED_Configration.pin , DIO_HIGH);}

}

void LED_voidToggle (LED_Type LED_Configration)
{
	u8 LOC_u8lastState;
	DIO_enumGetPinValue=(LED_Configration.port ,LED_Configration.pin ,&LOC_u8lastState);
	DIO_enumSetPinValue(LED_Configration.port ,LED_Configration.pin ,!LOC_u8lastState);
}
