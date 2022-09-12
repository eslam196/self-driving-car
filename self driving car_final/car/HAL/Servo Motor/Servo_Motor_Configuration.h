/*
* Servo_Motor_Configuration.h
*
* Created: 2/17/2021 6:54:50 PM
*  Author: User
*/


#ifndef SERVO_MOTOR_CONFIGURATION_H_
#define SERVO_MOTOR_CONFIGURATION_H_

#include "DIO.h"
/*
#define Angle_0 5
#define Angle_P90 7
#define Angle_N90 10
*/
typedef enum
{
	Angle_0 = 5,
	Angle_P90 = 7,
	Angle_N90 = 10
}Servo_Angle;

#endif /* SERVO_MOTOR_CONFIGURATION_H_ */