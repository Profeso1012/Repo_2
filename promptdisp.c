#include "main.h"

void get_cmd_prompt(void) {
    if (isatty(STDIN_FILENO) == 1) {
        write(1, "$ ", 2);
    }
}
