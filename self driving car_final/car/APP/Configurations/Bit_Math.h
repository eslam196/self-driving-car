/*
 * Bit_Math.h
 *
* Created: 2/15/2022 12:23:45 PM
* Author : User
 */ 


#ifndef BIT_MATH_H_
#define BIT_MATH_H_

#define SET_BIT(REG, BIT) REG |= (1<<BIT)
#define CLR_BIT(REG, BIT) REG &=~(1<<BIT)
#define TGL_BIT(REG, BIT) REG ^= (1<<BIT)
#define GET_BIT(REG, BIT) ((REG>>BIT)&0X01)

#endif /* BIT_MATH_H_ */