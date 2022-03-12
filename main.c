
#define F_CPU 8000000UL
#include <util/delay.h>
#include <avr/io.h>
#include "AVR_Ports.h"
#include "AVR_LCD_Declarations.h"

int main(void)
{
	LCD_Initialize();
	
	LCD_Print_xy(0, 0, "Mohab");
	_delay_ms(3000);
	LCD_Clear();
	
	LCD_Print("Sharafeldin");
	_delay_ms(3000);
	LCD_Clear();
	
	LCD_Out('2');
	LCD_Out('1');
	_delay_ms(3000);
	LCD_Clear();
}
