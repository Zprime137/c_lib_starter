#include <assert.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include <logger.h>

// Main function to run all tests
int test_logger(void)
{
    printf("Running Logger tests...\n");
    printf("Check logs/log.txt\n");

    // Call logging functions
    log_console("CONSOLE: BREAKING POINT");
    log_info("INFO");
    log_debug("DEBUG!");
    log_warn("WARNING");
    log_error("ERROR :\\");
    log_fatal("FATAL :\\");

    printf("All Logger tests passed ^_^\n");
    return 0;
}
