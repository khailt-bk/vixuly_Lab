/*
 * button.c
 *
 *  Created on: Nov 2, 2022
 *      Author: Admin
 */


#include "button.h"
#include "main.h"

int button1_flag = 0;
int button2_flag = 0;
int button3_flag = 0;

int KeyReg0[4] = { NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg1[4] = { NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};
int KeyReg2[4] = { NORMAL_STATE, NORMAL_STATE, NORMAL_STATE, NORMAL_STATE};

int TimerForKeyPress= 200;


// check button1
int isButton1Pressed(){
	if(button1_flag == 1){
		button1_flag = 0;
		return 1;
	}
	return 0;
}

// check button2
int isButton2Pressed(){
	if(button2_flag == 1){
		button2_flag = 0;
		return 1;
	}
	return 0;
}

// check button3
int isButton3Pressed(){
	if(button3_flag == 1){
		button3_flag = 0;
		return 1;
	}
	return 0;
}


void subKeyProcess1(){
	button1_flag = 1;
	//HAL_GPIO_TogglePin(SEG0_GPIO_Port, SEG0_Pin);
}

void subKeyProcess2(){
	button2_flag = 1;
	//HAL_GPIO_TogglePin(SEG1_GPIO_Port, SEG1_Pin);
}

void subKeyProcess3(){
	button3_flag = 1;
	//HAL_GPIO_TogglePin(SEG2_GPIO_Port, SEG2_Pin);
}

void getKeyInput(){
	//button 1
	KeyReg0[0] = KeyReg0[1];
	KeyReg0[1] = KeyReg0[2];
	KeyReg0[2] = HAL_GPIO_ReadPin(Button1_GPIO_Port, Button1_Pin);
	if( (KeyReg0[0] == KeyReg0[1]) && (KeyReg0[1] == KeyReg0[2])){
		if(KeyReg0[3] != KeyReg0[2]){
			KeyReg0[3] = KeyReg0[2];
			if(KeyReg0[2] == PRESSED_STATE){
				subKeyProcess1();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress <= 0){
				KeyReg0[3] = NORMAL_STATE;
			}
		}
	}
	//button 2
	KeyReg1[0] = KeyReg1[1];
	KeyReg1[1] = KeyReg1[2];
	KeyReg1[2] = HAL_GPIO_ReadPin(Button2_GPIO_Port, Button2_Pin);
	if( (KeyReg1[0] == KeyReg1[1]) && (KeyReg1[1] == KeyReg1[2])){
		if(KeyReg1[3] != KeyReg1[2]){
			KeyReg1[3] = KeyReg1[2];
			if(KeyReg1[2] == PRESSED_STATE){
				subKeyProcess2();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress <= 0){
				KeyReg1[3] = NORMAL_STATE;
			}
		}
	}
	//button 3
	KeyReg2[0] = KeyReg2[1];
	KeyReg2[1] = KeyReg2[2];
	KeyReg2[2] = HAL_GPIO_ReadPin(Button3_GPIO_Port, Button3_Pin);
	if( (KeyReg2[0] == KeyReg2[1]) && (KeyReg2[1] == KeyReg2[2])){
		if(KeyReg2[3] != KeyReg2[2]){
			KeyReg2[3] = KeyReg2[2];
			if(KeyReg2[2] == PRESSED_STATE){
				subKeyProcess3();
				TimerForKeyPress = 200;
			}
		}
		else{
			TimerForKeyPress--;
			if(TimerForKeyPress <= 0){
				KeyReg2[3] = NORMAL_STATE;
			}
		}
	}

}


