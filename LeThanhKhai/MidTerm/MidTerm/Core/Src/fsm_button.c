/*
 * fsm_button.c
 *
 *  Created on: Nov 5, 2022
 *      Author: Admin
 */

#include "fsm_button.h"

void fsm_simple_buttons_run(){
	switch(mode){
	case INST:
		display7SEG(counter);
		if (isButton1Pressed() == 1) {mode = RESET; setTimer2(1000);} // reset timer2
		if (isButton2Pressed() == 1) {mode = INC; 	setTimer2(1000);}
		if (isButton3Pressed() == 1) {mode = DEC; 	setTimer2(1000);}
		if (counter > 9) counter = 0;
		if (counter < 0) counter = 9;
		if (timer1_flag == 1){
			setTimer1(100);
			HAL_GPIO_TogglePin(RED_LED_GPIO_Port, RED_LED_Pin);
		}
		// 10s countdown
		if (isButton1Pressed() == 0 && isButton2Pressed() == 0 && isButton3Pressed() == 0) {
			if (timer2_flag == 1){
				setTimer2(1000); //10s delay
				if (counter == 0) mode = INST;
				else mode = STAND;
			}
		}
		break;

	case RESET:
		counter = 0;
		mode = INST;
		break;

	case INC:
		counter++;
		mode = INST;
		break;

	case DEC:
		counter--;
		mode = INST;
		break;
	case STAND: // not pressing in 10s
		counter--;
		mode = INST;
		break;
	default:
		break;
	}
}
