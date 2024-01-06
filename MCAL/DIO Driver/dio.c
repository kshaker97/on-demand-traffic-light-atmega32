/*
 * dio.c
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#include "dio.h"
//INITIALIZE PINX IN PORTX DIRECTION(INPUT/OUTPUT)
EN_DIO_error_t DIO_init(uint8_t PORT, uint8_t BIT, uint8_t DIRECTION){
	switch(PORT){
	case PORT_A:
		if(DIRECTION==INPUT){
			CLEAR_BIT(DDRA, BIT);
			return DIO_OK;
		}
		else if(DIRECTION==OUTPUT){
			SET_BIT(DDRA, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_DIRECTION;
		}
		break;
	case PORT_B:
		if(DIRECTION==INPUT){
			CLEAR_BIT(DDRB, BIT);
			return DIO_OK;
		}
		else if(DIRECTION==OUTPUT){
			SET_BIT(DDRB, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_DIRECTION;
		}
		break;
	case PORT_C:
		if(DIRECTION==INPUT){
			CLEAR_BIT(DDRC, BIT);
			return DIO_OK;
		}
		else if(DIRECTION==OUTPUT){
			SET_BIT(DDRC, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_DIRECTION;
		}
		break;
	case PORT_D:
		if(DIRECTION==INPUT){
			CLEAR_BIT(DDRD, BIT);
			return DIO_OK;
		}
		else if(DIRECTION==OUTPUT){
			SET_BIT(DDRD, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_DIRECTION;
		}
		break;
	default:
		return DIO_WRONG_PORT_NUMBER;
		break;
	}
}
//WRITE PINX IN PORTX VALUE(LOW/HIGH)
EN_DIO_error_t DIO_write(uint8_t PORT, uint8_t BIT, uint8_t VALUE){
	switch(PORT){
	case PORT_A:
		if(VALUE==LOW){
			CLEAR_BIT(PORTA, BIT);
			return DIO_OK;
		}
		else if(VALUE==HIGH){
			SET_BIT(PORTA, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_PIN_VALUE;
		}
		break;
	case PORT_B:
		if(VALUE==LOW){
			CLEAR_BIT(PORTB, BIT);
			return DIO_OK;
		}
		else if(VALUE==HIGH){
			SET_BIT(PORTB, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_PIN_VALUE;
		}
		break;
	case PORT_C:
		if(VALUE==LOW){
			CLEAR_BIT(PORTC, BIT);
			return DIO_OK;
		}
		else if(VALUE==HIGH){
			SET_BIT(PORTC, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_PIN_VALUE;
		}
		break;
	case PORT_D:
		if(VALUE==LOW){
			CLEAR_BIT(PORTD, BIT);
			return DIO_OK;
		}
		else if(VALUE==HIGH){
			SET_BIT(PORTD, BIT);
			return DIO_OK;
		}
		else{
			return DIO_WRONG_PIN_VALUE;
		}
		break;
	default:
		return DIO_WRONG_PORT_NUMBER;
		break;
	}
}
//READ PINX IN PORTX VALUE
EN_DIO_error_t DIO_read(uint8_t PORT, uint8_t BIT, uint8_t *VALUE){
	switch(PORT){
	case PORT_A:
		*VALUE = GET_BIT(PINA, BIT);
		return DIO_OK;
		break;
	case PORT_B:
		*VALUE = GET_BIT(PINB, BIT);
		return DIO_OK;
		break;
	case PORT_C:
		*VALUE = GET_BIT(PINC, BIT);
		return DIO_OK;
		break;
	case PORT_D:
		*VALUE = GET_BIT(PIND, BIT);
		return DIO_OK;
		break;
	default:
		return DIO_WRONG_PORT_NUMBER;
		break;
	}
}
//TOGGLE PINX IN PORTX VALUE
EN_DIO_error_t DIO_toggle(int8_t PORT, uint8_t BIT){
	switch(PORT){
	case PORT_A:
		TOGGLE_BIT(PORTA, BIT);
		return DIO_OK;
		break;
	case PORT_B:
		TOGGLE_BIT(PORTB, BIT);
		return DIO_OK;
		break;
	case PORT_C:
		TOGGLE_BIT(PORTC, BIT);
		return DIO_OK;
		break;
	case PORT_D:
		TOGGLE_BIT(PORTD, BIT);
		return DIO_OK;
		break;
	default:
		return DIO_WRONG_PORT_NUMBER;
		break;
	}
}
