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

int main(void)
{
	LED_Type LED_RED={DIO_PORTA,DIO_PIN0,ACTIVE_HIGH};
	LED_Type LED_YELLOW={DIO_PORTA,DIO_PIN2,ACTIVE_HIGH};
	LED_Type LED_GREEN={DIO_PORTA,DIO_PIN4,ACTIVE_HIGH};

	LED_voidInit(LED_RED);
	LED_voidInit(LED_YELLOW);
	LED_voidInit(LED_GREEN);
while(1){

	LED_voidOn(LED_RED);
	_delay_ms(2000);
	LED_voidOff(LED_RED);
	LED_voidOn(LED_YELLOW);
	_delay_ms(3000);
	LED_voidOff(LED_YELLOW);
	LED_voidOn(LED_GREEN);
	_delay_ms(2000);
	LED_voidOff(LED_GREEN);

}
	return 0;

}
