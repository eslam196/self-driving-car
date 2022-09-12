/*
 * LCD.h
 *
 * Created: 2/15/2022 5:50:38 PM
 *  Author: User
 */

#ifndef LCD_H_
#define LCD_H_

#include "LCD_Configuration.h"

void LCD_Initialization(void);
void LCD_Clear(void);
void LCD_Write_Command(uint8_t command);
void LCD_Write_Character(uint8_t character);
void LCD_Write_String(uint8_t* str);
void LCD_Write_Number(uint32_t number);
void LCD_Write_Float_Number(fint32_t Fnumber);
void LCD_Location(uint8_t row, uint8_t column);
void LCD_SpecialCharacter(uint8_t* customChatacter, uint8_t length, uint8_t loc[2]);
#endif /* LCD_H_ */