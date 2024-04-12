#include "stm32f10x.h"                  // Device header
#include "bsp_led.h"
#include "bsp_dma_mtm.h"
#include "bsp_systick.h"


extern const uint32_t aSRC_Const_Buffer[BUFFER_SIZE];
extern uint32_t aDST_Buffer[BUFFER_SIZE];



int main(void){
	
	uint8_t status = 0;
	//调用LED的GPIO函数
	LED_GPIO_Config();
	LED_YELLOW;
	SysTick_Delay_ms(1000);
	
	MTM_DMA_Config();
	/* 等待DMA传输完成 */
	while(DMA_GetFlagStatus(DMA_MTM_FLAG_TC)==RESET);
		
	
	status = Buffercmp(aSRC_Const_Buffer,aDST_Buffer,BUFFER_SIZE);
	if(0 == status){
		LED_RED;
	}
	else{
		LED_GREEN;
	}
	




	
	while(1){
		
		//按键按下，实现灯状态反转

			}
		
	
	
}
