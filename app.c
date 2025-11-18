#include <stdio.h>
#include "term_utils.h"

int main(void) {
    clear_screen();
    print_divider();

    
    printf("System Status: ");
    set_text_color(GREEN);
    printf("ONLINE\n");
    reset_text_color();

    set_text_color(RED);
    printf("Alert: Modular compilation in progress...\n");
    reset_text_color();

    print_divider();

    return 0;
}
