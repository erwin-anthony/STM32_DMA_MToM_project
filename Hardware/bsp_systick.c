#include "bsp_systick.h"

//us中断
void SysTick_Delay_us(uint32_t us){
	//声明循环变量
	uint32_t i;
	//配置SysTick,当参数取72时为us延时
	SysTick_Config(72);
	//for循环是实现延时的重复的，不断判断才能实现延时的重复
	for(i = 0;i < us;i++){
		//while循环连续判断COUNTFLAG寄存器有没有写1
		//经过计时时间，并且去读取时才会重置。while的作用是实现时间的判断
		while(!((SysTick->CTRL) & (1<<16)));	
	}
	//关闭定时器，实现定时器的清零
	SysTick->CTRL &= ~(SysTick_CTRL_ENABLE_Msk);
}

//ms中断
void SysTick_Delay_ms(uint32_t ms){
	
	uint32_t i;
	SysTick_Config(72000);
	
	for(i = 0;i < ms;i++){
		while(!((SysTick->CTRL) & (1<<16)));	
	}
	SysTick->CTRL &= ~(SysTick_CTRL_ENABLE_Msk);
}
