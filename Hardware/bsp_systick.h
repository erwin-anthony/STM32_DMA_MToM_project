//记得ifndef和endif的条件编译
#ifndef _BSP_SYSTICK_H
#define _BSP_SYSTICK_H
#include "stm32f10x.h"                  // Device header

#include "core_cm3.h"

void SysTick_Delay_ms(uint32_t ms);
void SysTick_Delay_us(uint32_t us);



#endif		/*_BSP_SYSTICK_H*/
