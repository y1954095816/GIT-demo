#include "stm32f10x.h"                  // Device header
#include "Delay.h"
#include "OLED.h"

int main(void)
{
	OLED_Init();
	

	
	/*��(16, 0)λ����ʾ�ַ���"Hello World!"�������СΪ8*16����*/
	OLED_ShowString(0, 0, "Hello World!", OLED_8X16);
	
	/*����OLED_Update��������OLED�Դ���������ݸ��µ�OLEDӲ��������ʾ*/
	OLED_Update();
	
	while (1)
	{
		
	}
}
