// main.c
#include <__dependencies__.h> // includes project dependencies and globale definitions
#include <utils.h>            // includes utility functions from utils

// Entry Point
int main(void)
{
    log_set_log_level(LOG_INFO);       // Default log level: LOG_DEBUG
    log_console("hello %s!", "world"); // Prints in console: [timestamp] hello world!

    return 0;
}
