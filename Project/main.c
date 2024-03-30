#include "RTE_Components.h"
#include CMSIS_device_header
#include "Drivers/tim.h"

int main(int argc, char **argv)
{
    NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);
    tim_init();

    RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);

    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
    GPIO_InitStructure.GPIO_Pin = GPIO_Pin_8;
    GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
    GPIO_Init(GPIOA, &GPIO_InitStructure);

    while (1)
    {
    }
}
