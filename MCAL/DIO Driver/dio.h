/*
 * dio.h
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#ifndef MCAL_DIO_DRIVER_DIO_H_
#define MCAL_DIO_DRIVER_DIO_H_
//INCLUDING UTILTIES
#include "../../UTILITIES/types.h"
#include "../../UTILITIES/bit_manipulation.h"
#include "../../UTILITIES/registers.h"
//DEFINING ERRO HANDLING
typedef enum EN_DIO_error_t{
	DIO_WRONG_PIN_VALUE,
	DIO_WRONG_PORT_NUMBER,
	DIO_WRONG_DIRECTION,
	DIO_OK
}EN_DIO_error_t;
//DEFINING BIT VALUES
#define HIGH 1
#define LOW 0
//DEFINING BIT DIRECTIONS
#define INPUT 0
#define OUTPUT 1
//DEFINING PORT BITS
#define BIT0 0
#define BIT1 1
#define BIT2 2
#define BIT3 3
#define BIT4 4
#define BIT5 5
#define BIT6 6
#define BIT7 7
//DEFINING PORTS
#define PORT_A 'A'
#define PORT_B 'B'
#define PORT_C 'C'
#define PORT_D 'D'
//INITIALIZE BITX IN PORTX DIRECTION(INPUT/OUTPUT)
EN_DIO_error_t DIO_init(uint8_t PORT, uint8_t BIT, uint8_t DIRECTION);
//WRITE BITX IN PORTX VALUE(LOW/HIGH)
EN_DIO_error_t DIO_write(uint8_t PORT, uint8_t BIT, uint8_t VALUE);
//READ BITX IN PORTX VALUE
EN_DIO_error_t DIO_read(uint8_t PORT, uint8_t BIT, uint8_t *VALUE);
//TOGGLE BITX IN PORTX VALUE
EN_DIO_error_t DIO_toggle(int8_t PORT, uint8_t BIT);
#endif /* MCAL_DIO_DRIVER_DIO_H_ */
