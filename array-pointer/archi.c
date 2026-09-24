#include <stdio.h>

int main(void)
{
    printf("int: %zu bytes\n", sizeof(int));
    printf("long: %zu bytes\n", sizeof(long));
    printf("pointer: %zu bytes\n", sizeof(void *));

    return 0;
}
