# stm32-extint

Interrupção externa (EXTI) no STM32F4xx — toggle de LED por botão com NVIC.

## Descrição

Projeto didático que demonstra o uso de interrupção externa (EXTI) para detectar o pressionamento de um botão e alternar o estado de um LED, sem polling. Usa a linha EXTI13 conectada ao botão PC13 da placa Nucleo.

## Hardware

- Microcontrolador: STM32F4xx (Nucleo)
- LED: PA5
- Botão: PC13 (borda de subida)

## Configuração EXTI

```c
EXTI->IMR  |= EXTI_IMR_MR13;          // Unmask linha 13
EXTI->RTSR |= EXTI_FTSR_TR13;         // Trigger na borda de subida
SYSCFG->EXTICR[3] = SYSCFG_EXTICR4_EXTI13_PC; // GPIOC → linha 13
NVIC_EnableIRQ(EXTI15_10_IRQn);        // Habilita IRQ
NVIC_SetPriority(EXTI15_10_IRQn, 5);
```

## ISR

```c
void EXTI15_10_IRQHandler(void) {
    EXTI->PR |= EXTI_PR_PR13;   // Limpa pending flag
    GPIOA->ODR ^= GPIO_ODR_ODR_5; // Toggle LED
}
```

## Conceitos demonstrados

- Configuração de EXTI por registradores diretos
- SYSCFG para selecionar o GPIO da linha EXTI
- Limpeza do pending flag na ISR

## IDE

Atollic TrueSTUDIO 9.3

## Escola

Centro Tecnológico Liberato — Novo Hamburgo/RS
