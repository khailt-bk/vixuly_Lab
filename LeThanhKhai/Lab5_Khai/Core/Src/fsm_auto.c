
#include "fsm_auto.h"

//=============================================
// set up for print
uint8_t mode =0;
uint32_t ADC_value = 0;
char ADC_print[4];

uint8_t response_format_1_old[] = "\r\n!ADC=";
uint8_t response_format_1_new[] = "!ADC=";
uint8_t response_format_2[] = "#\r\n";
//====================/command/==========================
const uint8_t cmd_RST[] = "!RST#";
const uint8_t cmd_OK[] = "!OK#";
//reset buffer command
void Reset_Buffer();
//===================/fsm/==========================
uint8_t state = INIT;

void uart_communiation_fsm (){
	switch(state){
	case INIT:
		break;
	case ADC:
		ReceiveADC(NEW_ADC);
		setTimer1(1000);
		state= WAIT;
		break;
	case WAIT:
		if(timer1_flag == 1){
		HAL_GPIO_TogglePin(RED_LED_GPIO_Port, RED_LED_Pin);
			Reset_Buffer();
			ReceiveADC(GET_OLD_ADC);
			setTimer1(1000);
		}
		break;
	case ERROR:
		state = INIT;
		break;
	}
}


void command_parser_fsm (){
	switch (command_length) {
		case 0:
		case 1:
		case 2:
			state = INIT;
			break;
		case 4:
			if (strcmp((void*)buffer, (void*)cmd_OK) == 0){
						state = INIT;
			}
			else {
//				ERROR_CODE = CMD_NOT_EXISTED;
				state = ERROR;
			}
			break;
		case 5:
			if (strcmp((void*)buffer, (void*)cmd_RST) == 0)
				{state = ADC;}
			else {
//				ERROR_CODE = CMD_NOT_EXISTED;
				state = ERROR;
			}
			break;
		default:
			break;
	}
	Reset_Buffer();
}
//=============================================================
//reset buffer
void Reset_Buffer(){
	memset(buffer, 0, MAX_BUFFER_SIZE);
	command_length = 0;
}
//=============================================================
void ReceiveADC(int mode ){
	if (mode == GET_OLD_ADC)
			HAL_UART_Transmit(&huart2, response_format_1_old, sizeof(response_format_1_old), 100);
		else if (mode == NEW_ADC) {
			HAL_UART_Transmit(&huart2, response_format_1_new, sizeof(response_format_1_new), 100);
			HAL_ADC_Start(&hadc1);
			ADC_value = HAL_ADC_GetValue(&hadc1);
			HAL_ADC_Stop(&hadc1);
			sprintf(ADC_print, "%d", (int)ADC_value);
		}

		HAL_UART_Transmit(&huart2, (uint8_t*)ADC_print, sizeof(ADC_print), 100);
		HAL_UART_Transmit(&huart2, response_format_2, sizeof(response_format_2), 100);
}
