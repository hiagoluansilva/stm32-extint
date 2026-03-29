🇧🇷 Português | 🇺🇸 [English](#english)

# stm32-extint

Interrupção externa EXTI13 no STM32F4xx — toggle de LED por botão com NVIC.

```c
void EXTI15_10_IRQHandler(void) {
    EXTI->PR |= EXTI_PR_PR13;
    GPIOA->ODR ^= GPIO_ODR_ODR_5;
}
```

## IDE

Atollic TrueSTUDIO 9.3 / STM32CubeIDE
Centro Tecnológico Liberato — Novo Hamburgo/RS

---

<a name="english"></a>
🇧🇷 [Português](#) | 🇺🇸 English

# stm32-extint

External interrupt EXTI13 on STM32F4xx — LED toggle on button press via NVIC.

```c
void EXTI15_10_IRQHandler(void) {
    EXTI->PR |= EXTI_PR_PR13;
    GPIOA->ODR ^= GPIO_ODR_ODR_5;
}
```

## IDE

Atollic TrueSTUDIO 9.3 / STM32CubeIDE
Centro Tecnológico Liberato — Novo Hamburgo/RS, Brazil
