/*
 * led.c
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#include "led.h"
//FUNCTION TO INITIALIZE LED
EN_LED_error_t LED_init(uint8_t LED_PORT, uint8_t LED){
	if(LED_PORT==CAR_TRAFFIC_PORT || LED_PORT==PEDESTRIAN_TRAFFIC_PORT){
		DIO_init(LED_PORT, LED, OUTPUT);
		return LED_OK;
	}
	else{
		return LED_WRONG_PORT;
	}
}
//FUNCTION TO TURN THE LED OFF
EN_LED_error_t LED_off(uint8_t LED_PORT, uint8_t LED){
	if(LED_PORT==CAR_TRAFFIC_PORT || LED_PORT==PEDESTRIAN_TRAFFIC_PORT){
		DIO_write(LED_PORT, LED, LOW);
		return LED_OK;
	}
	else{
		return LED_WRONG_PORT;
	}
}
//FUNCTION TO TURN THE LED ON
EN_LED_error_t LED_on(uint8_t LED_PORT, uint8_t LED){
	if(LED_PORT==CAR_TRAFFIC_PORT || LED_PORT==PEDESTRIAN_TRAFFIC_PORT){
		DIO_write(LED_PORT, LED, HIGH);
		return LED_OK;
	}
	else{
		return LED_WRONG_PORT;
	}
}
//FUNCTION TO TOGLE THE LED
EN_LED_error_t LED_toggle(uint8_t LED_PORT, uint8_t LED){
	if(LED_PORT==CAR_TRAFFIC_PORT || LED_PORT==PEDESTRIAN_TRAFFIC_PORT){
		DIO_toggle(LED_PORT, LED);
		return LED_OK;
	}
	else{
		return LED_WRONG_PORT;
	}
}
//FUNCTION TO GET LED STATE
EN_LED_error_t LED_state(uint8_t LED_PORT, uint8_t LED, uint8_t *state){
	if(LED_PORT==CAR_TRAFFIC_PORT || LED_PORT==PEDESTRIAN_TRAFFIC_PORT){
		DIO_read(LED_PORT, LED, state);
		return LED_OK;
	}
	else{
		return LED_WRONG_PORT;
	}
}
