/* Includes */
#include "stm32f4xx.h"


//Void para Handler de interrupcao:
void EXTI15_10_IRQHandler(void)//Void de interrupcao para linhas 10 a 15
{

        EXTI->PR |= EXTI_PR_PR13;//Colocando 1, limpa-se o bit de PR;
        GPIOA->ODR ^= GPIO_ODR_ODR_5;
}

int main(void)
{
  //Configurações GPIOA:
    RCC->AHB1ENR|=RCC_AHB1ENR_GPIOCEN|RCC_AHB1ENR_GPIOAEN;
    GPIOA->MODER&=~GPIO_MODER_MODER5;
    GPIOA->MODER|=GPIO_MODER_MODER5_0;

  //Configurações GPIOC:
    GPIOC->MODER&=~GPIO_MODER_MODER13;


  //Configurações SYSCFG:
    RCC->APB2ENR|=RCC_APB2ENR_SYSCFGEN;//Habilita clock;
    EXTI->IMR |= EXTI_IMR_MR13;// Interrupt Mask Register -- 1 para mascarar, 0 para n
    EXTI->RTSR |= EXTI_FTSR_TR13; //Rising trigger selection register -- Colocar 1 para pino desejado
    EXTI->PR|=EXTI_PR_PR13;
    SYSCFG->EXTICR[3] = SYSCFG_EXTICR4_EXTI13_PC; //Define usar GPIOC quando interrupção acontecer na linha 13;
  //Configurações NVIC:
    NVIC_EnableIRQ(EXTI15_10_IRQn);//Habilita interrupcao externa para linha 5 a 9
    NVIC_SetPriority(EXTI15_10_IRQn, 5);//Seta prioridade maxima para interrupcao

  while (1)
  {
            //Rotina realizada pela interrupcao:
  }
}
