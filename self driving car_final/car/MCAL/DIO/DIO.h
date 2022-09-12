/*
* DIO.h
*
* Created: 2/15/2022 1:13:14 PM
*  Author: User
*/


#ifndef DIO_H_
#define DIO_H_

//#include "DIO_Address.h"
#include "DIO_Configurations.h"

//Prototypes for functions for pin only

void DIO_SetPinDirection (Port port, Pin pin, State state);
void DIO_SetPinValue (Port port, Pin pin, Status status);

#endif /* DIO_H_ */