/*
 * button.c
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */
#include "button.h"
//FUNCTION TO INITIALIZE BUTTON
EN_BUTTON_error_t BUTTON_init(uint8_t BUTTON_PORT, uint8_t BUTTON){
	if(BUTTON_PORT==PEDESTRIAN_BUTTON_PORT){
		DIO_init(BUTTON_PORT, BUTTON, INPUT);
		return BUTTON_OK;
	}
	else{
		return BUTTON_WRONG_PORT_NUMBER;
	}
}
//FUNCTION TO READ BUTTON VALUE
EN_BUTTON_error_t BUTTON_read(uint8_t BUTTON_PORT, uint8_t BUTTON, uint8_t *STATE){
	if(BUTTON_PORT==PEDESTRIAN_BUTTON_PORT){
		DIO_read(BUTTON_PORT, BUTTON, STATE);
		return BUTTON_OK;
	}
	else{
		return BUTTON_WRONG_PORT_NUMBER;
	}
}
