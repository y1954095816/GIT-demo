#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	

	
	/*在(16, 0)位置显示字符串"Hello World!"，字体大小为8*16点阵*/
	OLED_ShowString(0, 0, "Hello World!", OLED_8X16);
	
	/*调用OLED_Update函数，将OLED显存数组的内容更新到OLED硬件进行显示*/
	OLED_Update();
	
	while (1)
	{
		
	}
}
