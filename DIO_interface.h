/*
 * DIO_INTERFACE.h
 *
 *  Created on: Feb 3, 2024
 *      Author: Mariam
 */

#ifndef MCAL_DIO_INTERFACE_H_
#define MCAL_DIO_INTERFACE_H_
# include "../../LIP/STD_TYPES.H"

/*DIO_Direction*/

#define DIO_INPUT  0
#define DIO_OUTPUT 1

/*DIO_OutputValue*/

#define DIO_LOW  0
#define DIO_HIGH 1

/*DIO_PORTS*/

#define DIO_PORTA  0
#define DIO_PORTB  1
#define DIO_PORTC  2
#define DIO_PORTD  3

/*DIO_PINS*/

#define DIO_PIN0  0
#define DIO_PIN1  1
#define DIO_PIN2  2
#define DIO_PIN3  3
#define DIO_PIN4  4
#define DIO_PIN5  5
#define DIO_PIN6  6
#define DIO_PIN7  7

/*Enumeration*/
typedef enum{
	DIO_NOK,
	DIO_OK

} DIO_Errorstatus;

DIO_Errorstatus DIO_enumSetPortnDirection (u8 copy_u8Port , u8 copy_u8Direction);
DIO_Errorstatus DIO_enumSetPinDirection  (u8 copy_u8Port , u8 copy_u8pinNumper , u8 copy_u8Direction);

DIO_Errorstatus DIO_enumSetPortValue     (u8 copy_u8Port , u8 copy_u8Value);
DIO_Errorstatus DIO_enumSetPinValue      (u8 copy_u8Port , u8 copy_u8pinNumper , u8 copy_u8Value);

DIO_Errorstatus DIO_enumGetPortValue     (u8 copy_u8Port , u8 *copy_PtrData);
DIO_Errorstatus DIO_enumGetPinValue      (u8 copy_u8Port , u8 copy_u8pinNumper , u8 *copy_PtrData);

DIO_Errorstatus DIO_enumTOGGLEPortValue     (u8 copy_u8Port );
DIO_Errorstatus DIO_enumTOGGLEPinValue      (u8 copy_u8Port , u8 copy_u8pinNumper );


#endif /* MCAL_DIO_INTERFACE_H_ */

