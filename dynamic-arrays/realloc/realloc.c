#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    // reallocation 

    int *p = malloc(3 * sizeof(int));

    p[0] = 3;
    p[1] = 2;
    p[2] = 1;

    int i = 0;
    while (i < 3) {
        printf("&p[%d] : %p \n", i, &p[i]);
        i++;
    }

    printf("------- After Reallocation -------------- \n");

    int *realloc_p = realloc(p, 8 * sizeof(int));

    if (realloc_p == NULL) {
        printf("reallocation failed \n");
        return 1;
    }

    realloc_p[3] = 4;
    realloc_p[4] = 5;
    realloc_p[5] = 6;
    realloc_p[6] = 7;
    realloc_p[7] = 8;

    int n = 0;
    while (n < 8) {
        printf("realloc_p[%d] : %d, &realloc_p[%d] : %p \n", n, realloc_p[n], n, &realloc_p[n]);
        n++;
    }

    free(realloc_p);

    return 0;
}
