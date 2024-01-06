/*
 * interrupt.h
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#ifndef MCAL_INTERRUPT_DRIVER_INTERRUPT_H_
#define MCAL_INTERRUPT_DRIVER_INTERRUPT_H_
//INCLUDING UTILITIES
#include "../../UTILITIES/types.h"
#include "../../UTILITIES/bit_manipulation.h"
#include "../../UTILITIES/registers.h"
//DEFINING ERROR HANDLING
typedef enum EN_INTERRUPT0_error_t{
	INTERRUPT_OK
}EN_INTERRUPT0_error_t;
//DEFINE EXTERNAL INTERUPT 1
#define EXT_INT_0 __vector_1
//DEFINE ISR FUNCTION
#define ISR(INT_VECT)void INT_VECT(void) __attribute__ ((signal,used));\
	void INT_VECT(void)
//DEFINING PORT BITS
#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5
#define BIT6 6
#define BIT7 7
//FUNCTION TO INITIALIZE EXTERNAL INTERUPT 0
EN_INTERRUPT0_error_t EXT_INT_0_init(void);
#endif /* MCAL_INTERRUPT_DRIVER_INTERRUPT_H_ */
