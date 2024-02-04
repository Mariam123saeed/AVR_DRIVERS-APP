/*
 * BUTTON_program.c
 *
 *  Created on: Feb 4, 2024
 *      Author: Mariam
 */

# include "../../LIP/STD_TYPES.H"
# include "../../LIP/BIT_MATH.H"
# include "DIO_interface.H"
# include "BUTTON_config.h"
# include "BUTTON_private.h"
# include "BUTTON_interface.h"

void BUTTON_voidInit (BUTTON_Type BUTTON_Configration)
{
	DIO_enumSetPinDirection(BUTTON_Configration.port,BUTTON_Configration.pin,DIO_INPUT);
	if(BUTTON_Configration.BUTTON_state==PULLUP)
	{
		DIO_enumSetPinValue(BUTTON_Configration.port,BUTTON_Configration.pin,DIO_HIGH);
	}
	else if(BUTTON_Configration.BUTTON_state==FLOATING)
	{
		DIO_enumSetPinValue(BUTTON_Configration.port,BUTTON_Configration.pin,DIO_LOW);
	}
}

u8 BUTTON_u8GetPressed (BUTTON_Type BUTTON_Configration)
{
	u8 LOC_u8ButtonState=0;
	DIO_enumGetPinValue(BUTTON_Configration.port,BUTTON_Configration.pin,&LOC_u8ButtonState );
	return LOC_u8ButtonState;
}

