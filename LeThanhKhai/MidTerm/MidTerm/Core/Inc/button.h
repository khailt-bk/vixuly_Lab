/*
 * button.h
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#ifndef INC_BUTTON_H_
#define INC_BUTTON_H_

#include "main.h"
#include "global.h"
#include "software_timer.h"

extern int button1_flag;
extern int button2_flag;
extern int button3_flag;

#define NORMAL_STATE GPIO_PIN_SET
#define PRESSED_STATE GPIO_PIN_RESET

int isButton1Pressed();
int isButton2Pressed();
int isButton3Pressed();

void getKeyInput();

#endif /* INC_BUTTON_H_ */
