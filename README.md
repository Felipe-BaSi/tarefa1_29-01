# Projeto de Controle de LEDs com Temporizadores no Raspberry Pi Pico

Este projeto faz parte de uma atividade educacional com o objetivo de aprender a utilizar temporizadores no Raspberry Pi Pico. O código alterna entre três LEDs (verde, amarelo e vermelho) a cada 3 segundos e imprime uma mensagem no monitor serial a cada segundo.

## Objetivo da Atividade

- Aprender a utilizar temporizadores periódicos no Raspberry Pi Pico.
- Implementar a função `add_repeating_timer_ms()` para controlar a temporização dos LEDs.
- Entender o funcionamento de callbacks em temporizadores.

## Componentes Necessários

- Raspberry Pi Pico
- LEDs (verde, amarelo e vermelho)
- Resistores (330 ohms)

## Conexões

- Conecte o LED verde ao pino GPIO 11 do Raspberry Pi Pico.
- Conecte o LED amarelo ao pino GPIO 12 do Raspberry Pi Pico.
- Conecte o LED vermelho ao pino GPIO 13 do Raspberry Pi Pico.
- Conecte os resistores em série com os LEDs para limitar a corrente.