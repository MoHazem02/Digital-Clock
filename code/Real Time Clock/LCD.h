#ifndef LCD_H_
#define LCD_H_
#include "DIO.h"
#include "LCD_config.h"
#define CLR_SCREEN 0x01
#define CURSOR_ON_DISPLAN_ON 0x0e
#define RETURN_HOME 0x02
#define ENTRY_MODE 0x06

#define EN 0
#define RW 1
#define RS 2
#define FOUR_BITS 0x28

void LCD_vInit(void);
static void send_falling_edge(void);
void LCD_vSend_cmd(char cmd);
void LCD_vSend_char(char data);
void LCD_vSend_string(char *data);
void LCD_clearscreen();
void LCD_movecursor(char row,char coloumn);

#endif /* LCD_H_ */