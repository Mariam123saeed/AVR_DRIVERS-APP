/*
 * BIT_MATH.h
 *
 *  Created on: Feb 3, 2024
 *      Author: Mariam
 */

#ifndef LIP_BIT_MATH_H_
#define LIP_BIT_MATH_H_

#define SET_BIT(REG,BITNUM) (REG |=(1<<BITNUM))
#define CLR_BIT(REG,BITNUM) (REG &=(~(1<<BITNUM)))
#define TOG_BIT(REG,BITNUM) (REG ^=(1<<BITNUM))
#define GET_BIT(REG,BITNUM) ((REG)>>(BITNUM)&1)


#endif /* LIP_BIT_MATH_H_ */
