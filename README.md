# Projeto de Temporizador com LEDs

Este projeto foi desenvolvido como parte de uma atividade para aprender a utilizar temporizadores no microcontrolador Raspberry Pi Pico W. O objetivo é criar um semáforo que alterna entre três LEDs (vermelho, amarelo e verde) a cada 3 segundos.

## Descrição do Funcionamento

O código utiliza a biblioteca `pico/stdlib.h` e `hardware/timer.h` para configurar e controlar os LEDs e o temporizador.

### Componentes Utilizados

1. Microcontrolador Raspberry Pi Pico W
2. 3 LEDs (vermelho, amarelo e verde)
3. 3 Resistores de 330 Ω

### Funcionamento

1. **Definição dos LEDs**: Os LEDs são definidos nas portas GPIO 11, 12 e 13.
2. **Variáveis de Estado**: Variáveis booleanas são usadas para armazenar o estado atual de cada LED.
3. **Callback do Temporizador**: A função `repeating_timer_callback` é chamada a cada 3 segundos para alternar o estado dos LEDs.
   - **Caso 0**: Alterna o estado do LED verde e vermelho.
   - **Caso 1**: Alterna o estado do LED vermelho e amarelo.
   - **Caso 2**: Alterna o estado do LED amarelo e verde.
4. **Configuração Inicial**: Os LEDs são inicializados e configurados como saída.
5. **Loop Principal**: O loop principal imprime uma mensagem a cada segundo.

### Objetivo da Atividade

Esta atividade foi projetada para ensinar o uso de temporizadores no microcontrolador Raspberry Pi Pico W. O temporizador é configurado para alternar o estado dos LEDs a cada 3 segundos, simulando o funcionamento de um semáforo. A função de callback do temporizador é responsável por alternar os LEDs, enquanto o loop principal imprime uma mensagem a cada segundo.

### Requisitos

1. O acionamento dos LEDs deve iniciar na cor vermelha, alterando para amarela e, em seguida, verde.
2. O temporizador deve ser ajustado para um atraso de 3 segundos (3.000ms).
3. A mudança de estado dos LEDs deve ser implementada na função de callback do temporizador.
4. A rotina principal deve imprimir uma mensagem a cada segundo.

### Ferramentas Utilizadas

- Pico SDK
- VS Code
- Simulador Wokwi

### Instruções de Uso

1. Clone o repositório do projeto.
2. Compile o código utilizando o Pico SDK.
3. Carregue o código no Raspberry Pi Pico W.
4. Observe o funcionamento dos LEDs alternando a cada 3 segundos.