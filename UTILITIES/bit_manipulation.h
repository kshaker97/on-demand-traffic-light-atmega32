/*
 * bit_manipulation.h
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#ifndef UTILITIES_BIT_MANIPULATION_H_
#define UTILITIES_BIT_MANIPULATION_H_
//SET BIT VALUE TO 1
#define SET_BIT(REG, BIT) REG |= (1<<BIT)
//CLEAR BIT VALUE TO 0
#define CLEAR_BIT(REG, BIT) REG &= ~(1<<BIT)
//TOGGLE BIT VALUE
#define TOGGLE_BIT(REG, BIT) REG ^= (1<<BIT)
//GET BIT VALUE
#define GET_BIT(REG, BIT) (REG&(1<<BIT))>>BIT
#endif /* UTILITIES_BIT_MANIPULATION_H_ */
