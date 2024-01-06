/*
 * app.h
 *
 *  Created on: Oct 13, 2022
 *      Author: khaled
 */

#ifndef APPLICATION_APP_H_
#define APPLICATION_APP_H_
//INCLUDING ECUAL DRIVERS
#include "../ECUAL/BUTTON Driver/button.h"
#include "../ECUAL/LED Driver/led.h"
//FUNCTION TO INITIALIZE APPLICATION
void APP_init(void);
//FUNCTION TO START APPLICATION
void APP_start(void);
//FUNCTION FOR NORMAL MODE
void NORMAL_mode(void);
//FUNCTION FOR PEDESTRIAN MODE
void PEDESTRIAN_mode(void);
#endif /* APPLICATION_APP_H_ */
