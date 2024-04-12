#ifndef _BSP_DMA_MTM_H
#define _BSP_DMA_MTM_H

#include "stm32f10x.h"                  // Device header


// 要发送的数据大小
#define BUFFER_SIZE     32

#define DMA_MTM_CLK				RCC_AHBPeriph_DMA1
#define DMA_MTM_CHANNEL			DMA1_Channel6
// 传输完成标志
#define DMA_MTM_FLAG_TC     	DMA1_FLAG_TC6




void MTM_DMA_Config(void);
uint8_t Buffercmp(const uint32_t* pBuffer, uint32_t* pBuffer1, uint16_t BufferLength);

#endif /*_BSP_DMA_MTM_H*/
