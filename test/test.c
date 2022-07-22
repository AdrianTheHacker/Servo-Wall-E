#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"
#include "pico/binary_info.h"

const int LED = 25;

int main() {
    gpio_init(LED);
    gpio_set_dir(LED, GPIO_OUT);

    while (1) {
        gpio_put(LED, 0);
        sleep_ms(100);
        gpio_put(LED, 1);
        puts("Hello, world!");
        sleep_ms(100);
    }
}
