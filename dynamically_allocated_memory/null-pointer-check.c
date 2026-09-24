#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int *p = malloc(5 * sizeof(int));

    if (p == NULL) {

        printf(" Memory Allocation Failed \n\n");
        return 1;
    }

    printf(" Memory Allocation Successed : %p \n\n", p);

    free(p);

    printf("------ after freeing Memory ---------- \n\n");
    printf(" %p \n\n", p);

    return 0;


}
