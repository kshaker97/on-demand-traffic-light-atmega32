/*
 * button.h
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#ifndef ECUAL_BUTTON_DRIVER_BUTTON_H_
#define ECUAL_BUTTON_DRIVER_BUTTON_H_
//INCLUDING PERIPHERALS DRIVERS
#include "../../MCAL/DIO Driver/dio.h"
#include "../../MCAL/TIMER Driver/timer.h"
#include "../../MCAL/INTERRUPT Driver/interrupt.h"
//DEFINING ERROR HANDLING
typedef enum EN_BUTTON_error_t{
	BUTTON_WRONG_PORT_NUMBER,
	BUTTON_OK
}EN_BUTTON_error_t;
//DEFINING PEDESTRIAN BUTTON PORT
#define PEDESTRIAN_BUTTON_PORT PORT_D
//DEFINING PEDESTRIAN BUTTON BIT
#define PEDESTRIAN_BUTTON BIT2
//DEFINING BUTTON STATES
#define HIGH 1
#define LOW 0
//FUNCTION TO INITIALIZE BUTTON
EN_BUTTON_error_t BUTTON_init(uint8_t BUTTON_PORT, uint8_t BUTTON);
//FUNCTION TO READ BUTTON VALUE
EN_BUTTON_error_t BUTTON_read(uint8_t BUTTON_PORT, uint8_t BUTTON, uint8_t *STATE);
#endif /* ECUAL_BUTTON_DRIVER_BUTTON_H_ */
