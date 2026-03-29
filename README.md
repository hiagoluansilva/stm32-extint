# STM32 EXTI — Interrupção Externa

🇧🇷 **Português** | 🇺🇸 [English](#english)

---

## Português

Demonstração de interrupção externa (EXTI) no STM32F4xx: botão configura linha EXTI, aciona callback e alterna LED.

### O que faz
- Configura linha **EXTI** para detectar borda (subida ou descida) em botão
- Na interrupção: executa `HAL_GPIO_EXTI_Callback`
- Alterna estado de **LED** em resposta ao evento

### Conceitos demonstrados
- Configuração de EXTI via STM32 HAL
- NVIC — prioridade e habilitação da interrupção
- `HAL_GPIO_EXTI_Callback` como handler

### Microcontrolador
STM32F4xx — Atollic TrueSTUDIO / STM32CubeMX

---

## English

External interrupt (EXTI) demonstration on STM32F4xx: button configures EXTI line, triggers callback, and toggles LED.

### What it does
- Configures **EXTI** line to detect edge (rising or falling) on a button
- On interrupt: executes `HAL_GPIO_EXTI_Callback`
- Toggles **LED** state in response to the event

### Concepts demonstrated
- EXTI configuration via STM32 HAL
- NVIC — interrupt priority and enable
- `HAL_GPIO_EXTI_Callback` as handler

### MCU
STM32F4xx — Atollic TrueSTUDIO / STM32CubeMX
