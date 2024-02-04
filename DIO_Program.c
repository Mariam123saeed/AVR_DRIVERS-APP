/*
 * DIO_Program.c
 *
 *  Created on: Feb 3, 2024
 *      Author: Mariam
 */


# include "../../LIP/STD_TYPES.H"
# include "../../LIP/BIT_MATH.H"
# include "DIO_config.H"
# include "DIO_interface.H"
# include "DIO_private.h"

DIO_Errorstatus DIO_enumSetPortDirection (u8 copy_u8Port , u8 copy_u8Direction)
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
	switch(copy_u8Port)
	{
	case DIO_PORTA : DDRA_REG = copy_u8Direction; break;
	case DIO_PORTB : DDRB_REG = copy_u8Direction; break;
	case DIO_PORTC : DDRC_REG = copy_u8Direction; break;
	case DIO_PORTD : DDRD_REG = copy_u8Direction; break;
	default        : LOC_enumstate=DIO_NOK      ; break;
	}
	return LOC_enumstate;
}

DIO_Errorstatus DIO_enumSetPinDirection  (u8 copy_u8Port , u8 copy_u8pinNumper , u8 copy_u8Direction)
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
	if(copy_u8pinNumper>=DIO_PIN0 && copy_u8pinNumper<=DIO_PIN7)
	{
		switch(copy_u8Port)
		{
		case DIO_PORTA :
		if      (copy_u8Direction==DIO_INPUT){SET_BIT(DDRA_REG,copy_u8pinNumper);}
		else if (copy_u8Direction==DIO_OUTPUT){CLR_BIT(DDRA_REG,copy_u8pinNumper);}
		break;
		case DIO_PORTB :
		if      (copy_u8Direction==DIO_INPUT){SET_BIT(DDRB_REG,copy_u8pinNumper);}
	    else if (copy_u8Direction==DIO_OUTPUT){CLR_BIT(DDRB_REG,copy_u8pinNumper);}
		break;
		case DIO_PORTC :
		if      (copy_u8Direction==DIO_INPUT){SET_BIT(DDRC_REG,copy_u8pinNumper);}
		else if (copy_u8Direction==DIO_OUTPUT){CLR_BIT(DDRC_REG,copy_u8pinNumper);}
		break;
		case DIO_PORTD :
		if      (copy_u8Direction==DIO_INPUT){SET_BIT(DDRD_REG,copy_u8pinNumper);}
		else if (copy_u8Direction==DIO_OUTPUT){CLR_BIT(DDRD_REG,copy_u8pinNumper);}
		break;
		default        : LOC_enumstate=DIO_NOK      ; break;
		}

	}
	else{LOC_enumstate=DIO_NOK ;}
	return LOC_enumstate;
}


DIO_Errorstatus DIO_enumSetPortValue     (u8 copy_u8Port , u8 copy_u8Value)
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
		switch(copy_u8Port)
		{
		case DIO_PORTA : PORTA_REG = copy_u8Value; break;
		case DIO_PORTB : PORTB_REG = copy_u8Value; break;
		case DIO_PORTC : PORTC_REG = copy_u8Value; break;
		case DIO_PORTD : PORTD_REG = copy_u8Value; break;
		default        : LOC_enumstate=DIO_NOK      ; break;
		}
		return LOC_enumstate;
}
DIO_Errorstatus DIO_enumSetPinValue      (u8 copy_u8Port , u8 copy_u8pinNumper , u8 copy_u8Value)
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
		if(copy_u8pinNumper>=DIO_PIN0 && copy_u8pinNumper<=DIO_PIN7)
		{
			switch(copy_u8Port)
			{
			case DIO_PORTA :
			if      (copy_u8Value==DIO_INPUT){SET_BIT(PORTA_REG,copy_u8pinNumper);}
			else if (copy_u8Value==DIO_OUTPUT){CLR_BIT(PORTA_REG,copy_u8pinNumper);}
			break;
			case DIO_PORTB :
			if      (copy_u8Value==DIO_INPUT){SET_BIT(PORTB_REG,copy_u8pinNumper);}
		    else if (copy_u8Value==DIO_OUTPUT){CLR_BIT(PORTB_REG,copy_u8pinNumper);}
			break;
			case DIO_PORTC :
			if      (copy_u8Value==DIO_INPUT){SET_BIT(PORTC_REG,copy_u8pinNumper);}
			else if (copy_u8Value==DIO_OUTPUT){CLR_BIT(PORTC_REG,copy_u8pinNumper);}
			break;
			case DIO_PORTD :
			if      (copy_u8Value==DIO_INPUT){SET_BIT(PORTD_REG,copy_u8pinNumper);}
			else if (copy_u8Value==DIO_OUTPUT){CLR_BIT(PORTD_REG,copy_u8pinNumper);}
			break;
			default        : LOC_enumstate=DIO_NOK      ; break;
			}

		}
		else{LOC_enumstate=DIO_NOK ;}
		return LOC_enumstate;
}

DIO_Errorstatus DIO_enumGetPortValue     (u8 copy_u8Port , u8 *copy_PtrData)
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
			switch(copy_u8Port)
			{
			case DIO_PORTA : *copy_PtrData=PINA_REG  ; break;
			case DIO_PORTB : *copy_PtrData=PINB_REG; break;
			case DIO_PORTC : *copy_PtrData=PINC_REG; break;
			case DIO_PORTD : *copy_PtrData=PIND_REG; break;
			default        : LOC_enumstate=DIO_NOK      ; break;
			}
			return LOC_enumstate;
}
DIO_Errorstatus DIO_enumGetPinValue      (u8 copy_u8Port , u8 copy_u8pinNumper , u8 *copy_PtrData)
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
			switch(copy_u8Port)
			{
			case DIO_PORTA : *copy_PtrData=GET_BIT(PINA_REG,copy_u8pinNumper); break;
			case DIO_PORTB : *copy_PtrData=GET_BIT(PINB_REG,copy_u8pinNumper); break;
			case DIO_PORTC : *copy_PtrData=GET_BIT(PINC_REG,copy_u8pinNumper); break;
			case DIO_PORTD : *copy_PtrData=GET_BIT(PIND_REG,copy_u8pinNumper); break;
			default        : LOC_enumstate=DIO_NOK      ; break;
			}
			return LOC_enumstate;
}
DIO_Errorstatus DIO_enumTOGGLEPortValue     (u8 copy_u8Port )
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
    u8 LOC_u8Value;
    LOC_enumstate=DIO_enumGetPortValue =( copy_u8Port,&LOC_u8Value);
    LOC_enumstate=DIO_enumSetPortValue =( copy_u8Port,&LOC_u8Value);

  return LOC_enumstate;
}
DIO_Errorstatus DIO_enumTOGGLEPinValue      (u8 copy_u8Port , u8 copy_u8pinNumper )
{
	DIO_Errorstatus LOC_enumstate=DIO_OK;
	    u8 LOC_u8Value;
	    LOC_enumstate=DIO_enumGetPinValue =( copy_u8Port,&LOC_u8Value);
	    LOC_enumstate=DIO_enumSetPinValue =( copy_u8Port,&LOC_u8Value);
  return LOC_enumstate;
}

