/*
 * timer.h
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#ifndef MCAL_TIMER_DRIVER_TIMER_H_
#define MCAL_TIMER_DRIVER_TIMER_H_
//INCLUDING UTILITIES
#include "../../UTILITIES/types.h"
#include "../../UTILITIES/bit_manipulation.h"
#include "../../UTILITIES/registers.h"
//DEFINING ERROR HANDLING
typedef enum EN_TIMER0_error_t{
	TIMER0_WRONG_DELAY,
	TIMER0_OK
}EN_TIMER0_error_t;
//DEFINING TIMER0 CALCULATIONS
#define PRESCALER 64
#define TIMER_TICK ((float)PRESCALER / 8000000)
#define MAX_DELAY (TIMER_TICK * 256)
//DEFINING PORT BITS
#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5
#define BIT6 6
#define BIT7 7
//FUNCTION TO INITIALIZE TIMER 0
EN_TIMER0_error_t TIMER0_init(void);
//FUNCTION TO GENERATE DELAY
EN_TIMER0_error_t TIMER0_delay(int16_t SECONDS);
#endif /* MCAL_TIMER_DRIVER_TIMER_H_ */
