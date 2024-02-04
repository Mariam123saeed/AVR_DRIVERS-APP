/*
 * LED_interface.h
 *
 *  Created on: Feb 4, 2024
 *      Author: Mariam
 */

#ifndef HAL_LED_LED_INTERFACE_H_
#define HAL_LED_LED_INTERFACE_H_

# include "../../LIP/STD_TYPES.H"

# define ACTIVE_LOW 0
# define ACTIVE_HIGH 1

typedef struct{
	u8 port;
	u8 pin;
	u8 led_state;
}LED_Type;



void LED_voidInit   (LED_Type LED_Configration);
void LED_voidOn     (LED_Type LED_Configration);
void LED_voidOff    (LED_Type LED_Configration);
void LED_voidToggle (LED_Type LED_Configration);



#endif /* HAL_LED_LED_INTERFACE_H_ */
