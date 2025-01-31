#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/timer.h"

#define led_g 11
#define led_y 12
#define led_r 13

bool led_r_on = false, led_y_on = false, led_g_on = false;
int switch_color = 0;

bool repeating_timer_callback(struct repeating_timer *t) {
    switch (switch_color) {
        case 0: // Alterna o estado do LED verde e vermelho

            if(led_g_on == true){

                led_g_on = !led_g_on;
                gpio_put(led_g, led_g_on);

            }

            led_r_on = !led_r_on;
            gpio_put(led_r, led_r_on);

            switch_color++;

            break;

        case 1: // Alterna o estado do LED vermelho e amarelo

            led_r_on = !led_r_on;
            gpio_put(led_r, led_r_on);

            led_y_on = !led_y_on;
            gpio_put(led_y, led_y_on);

            switch_color++;

            break;

        case 2: // Alterna o estado do LED amarelo e verde

            led_y_on = !led_y_on;
            gpio_put(led_y, led_y_on);

            led_g_on = !led_g_on;
            gpio_put(led_g, led_g_on);

            switch_color = 0;

            break;
    }
    return true;
}

int main() {
    stdio_init_all();

    gpio_init(led_g);
    gpio_set_dir(led_g, GPIO_OUT);
    gpio_init(led_y);
    gpio_set_dir(led_y, GPIO_OUT);
    gpio_init(led_r);
    gpio_set_dir(led_r, GPIO_OUT);

    struct repeating_timer timer;
    add_repeating_timer_ms(3000, repeating_timer_callback, NULL, &timer);

    while (true) {
        sleep_ms(1000);
        printf("loop de 1 segundo\n");
    }
    return 0;
}
