/*
 * global.c
 *
 *  Created on: Nov 3, 2022
 *      Author: Admin
 */


#include "global.h"

int red_time = 10;
int green_time = 5;
int yellow_time = 3;
int count = 0;
int status1 = 0;
int status2 = 0;
int mode = 1;
int EN = 0;


int led_buffer_red[2] = { 1, 0 };
int led_buffer_green[2] = { 0 , 5 };
int led_buffer_yellow[2] = { 0 , 3 };
