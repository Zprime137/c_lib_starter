#include <stdio.h>

// Create test_module_name.c
// Function prototypes for all tests
void test_module_name(void);
void test_logger(void);

int main(void)
{
    printf("Running all tests...\n");

    // Call each module's test
    test_module_name();
    test_logger();

    printf("All tests completed.\n");
    return 0;
}
