/*
 * BUTTON_interface.h
 *
 *  Created on: Feb 4, 2024
 *      Author: Mariam
 */

#ifndef HAL_PUSH_BUTTON_BUTTON_INTERFACE_H_
#define HAL_PUSH_BUTTON_BUTTON_INTERFACE_H_

# define  FLOATING 0
# define  PULLUP   1

typedef struct{
	u8 port;
	u8 pin;
	u8 BUTTON_state;
}BUTTON_Type;

void BUTTON_voidInit (BUTTON_Type BUTTON_Configration);

u8 BUTTON_u8GetPressed (BUTTON_Type BUTTON_Configration);

#endif /* HAL_PUSH_BUTTON_BUTTON_INTERFACE_H_ */
