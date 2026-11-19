#include <pebble.h>

static Window *s_window;

static void init() {
    s_window = window_create();
    window_set_background_color(s_window, GColorBlack);
    window_stack_push(s_window, true);
}

static void deinit() {
    window_destroy(s_window);
}

int main() {
    init();
    app_event_loop();
    deinit();
}
