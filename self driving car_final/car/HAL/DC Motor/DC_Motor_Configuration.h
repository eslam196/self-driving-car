/*
* DC_Motor_Configuration.h
*
* Created: 2/16/2022 3:23:41 AM
*  Author: User
*/


#ifndef DC_MOTOR_CONFIGURATION_H_
#define DC_MOTOR_CONFIGURATION_H_

#include "DIO.h"
//Renaming of ports
#define Motor_ControlPort DIO_PORTD
#define Motor_DataPort    DIO_PORTC
//Renaming of control pins
#define Motor_EN1 DIO_PIN4
#define Motor_EN2 DIO_PIN7
//Renaming of data pins
#define Motor_A1 DIO_PIN3
#define Motor_A2 DIO_PIN4
#define Motor_B1 DIO_PIN5
#define Motor_B2 DIO_PIN6
//Renaming status
#define Motor_Out DIO_OUTPUT
#define Motor_Off DIO_LOW
#define Motor_On  DIO_HIGH
#define Motor_Low DIO_LOW
#define Motor_High  DIO_HIGH
//Choose Motor needed
typedef enum
{
	Motor1 = 0,
	Motor2 = 1
}Motor;
//Motor Direction
typedef enum
{
	Motor_CW = 0,
	Motor_CCW = 1
}Motor_Dir;




#endif /* DC_MOTOR_CONFIGURATION_H_ */