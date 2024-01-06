/*
 * registers.h
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#ifndef UTILITIES_REGISTERS_H_
#define UTILITIES_REGISTERS_H_
/***********************
DIO PERIPHERAL REGISTERS
************************/
//PORT A REGISTERS
#define PORTA *((volatile uint8_t*)0x3B)
#define DDRA  *((volatile uint8_t*)0x3A)
#define PINA  *((volatile uint8_t*)0x39)
//PORT B REGISTERS
#define PORTB *((volatile uint8_t*)0x38)
#define DDRB  *((volatile uint8_t*)0x37)
#define PINB  *((volatile uint8_t*)0x36)
//PORT C REGISTERS
#define PORTC *((volatile uint8_t*)0x35)
#define DDRC  *((volatile uint8_t*)0x34)
#define PINC  *((volatile uint8_t*)0x33)
//PORT D REGISTERS
#define PORTD *((volatile uint8_t*)0x32)
#define DDRD  *((volatile uint8_t*)0x31)
#define PIND  *((volatile uint8_t*)0x30)
/*************************
TIMER PERIPHERAL REGISTERS
**************************/
//TIMER0 REGISTERS
#define TCCR0 *((volatile uint8_t*)0X53)
#define TCNT0 *((volatile uint8_t*)0x52)
#define TIMSK *((volatile uint8_t*)0x59)
#define TIFR  *((volatile uint8_t*)0x58)
/*******************************
//INTERRUPT PERIPHERAL REGISTERS
********************************/
#define MCUCR *((volatile uint8_t*)0x55)
#define GICR  *((volatile uint8_t*)0x5B)
#define GIFR  *((volatile uint8_t*)0x5A)
#define SREG  *((volatile uint8_t*)0x5F)
#endif /* UTILITIES_REGISTERS_H_ */
