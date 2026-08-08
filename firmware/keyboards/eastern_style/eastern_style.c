#include "quantum.h"

#define ENCODER_BUTTON_PIN GP28
#define ENCODER_BUTTON_DEBOUNCE_MS 5

void keyboard_post_init_kb(void) {
    gpio_set_pin_input_high(ENCODER_BUTTON_PIN);
    keyboard_post_init_user();
}

void matrix_scan_kb(void) {
    static bool     last_pressed    = false;
    static uint16_t debounce_timer  = 0;

    bool pressed = !gpio_read_pin(ENCODER_BUTTON_PIN);
    if (pressed != last_pressed && timer_elapsed(debounce_timer) > ENCODER_BUTTON_DEBOUNCE_MS) {
        last_pressed   = pressed;
        debounce_timer = timer_read();
        if (pressed) {
            tap_code(KC_MUTE);
        }
    }

    matrix_scan_user();
}
