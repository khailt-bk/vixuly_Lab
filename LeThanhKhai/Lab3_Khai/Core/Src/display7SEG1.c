/*
 * display7SEG1.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */


#include "display7SEG1.h"


void display7SEG1( int counter){
	switch(counter){
    case 0:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
		break;
	case 1:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
		break;
	case 2:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, SET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		break;
	case 3:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		break;
	case 4:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, SET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		break;
    case 5:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
	break;
	case 6:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, SET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		break;
	case 7:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, SET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, SET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, SET);
		break;
	case 8:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, RESET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);
		break;
	case 9:
		HAL_GPIO_WritePin(SEG7_GPIO_Port, SEG7_Pin, RESET);
		HAL_GPIO_WritePin(SEG8_GPIO_Port, SEG8_Pin, RESET);
		HAL_GPIO_WritePin(SEG9_GPIO_Port, SEG9_Pin, RESET);
		HAL_GPIO_WritePin(SEG10_GPIO_Port, SEG10_Pin, RESET);
		HAL_GPIO_WritePin(SEG11_GPIO_Port, SEG11_Pin, SET);
		HAL_GPIO_WritePin(SEG12_GPIO_Port, SEG12_Pin, RESET);
		HAL_GPIO_WritePin(SEG13_GPIO_Port, SEG13_Pin, RESET);

		break;
	}
}
