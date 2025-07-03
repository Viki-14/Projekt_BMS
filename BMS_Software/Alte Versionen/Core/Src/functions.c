/*
 * functions.c
 *
 *  Created on: May, 2025
 *      Author: AlexP
 */

#include "functions.h"
#include <stdbool.h>

//Precharge Relais Ansteuerung

void Relais_control(void)
  {
	  HAL_GPIO_TogglePin(GPIOD, GPIO_PIN_0);   // Setzt PIN PD0 auf 1 (high)
  }


//Voltage_Measurement





//Temp_Measurement





//Current_Measurement





//Display_Configuration





