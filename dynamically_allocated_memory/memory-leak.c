#include <stdio.h>
#include <stdlib.h>

int main(void) {
 {
    for (int i = 0; i < 10; i++)
    {
        char *p = malloc(100);

        printf("allocated memory at %p\n", (void *)p);
    }

    return 0;
 }
}
