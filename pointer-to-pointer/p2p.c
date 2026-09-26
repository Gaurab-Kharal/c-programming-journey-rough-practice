#include <stdio.h>
#include <stdlib.h>

int main() {
    int a = 10;
    int *p = &a;

    int **pp = &p;

    printf(" a : %d \n", a);
    printf(" addr of a : %p \n", p);
    printf(" accessing value through *p : %d \n", *p);
    printf(" addr of *p : %p \n", pp);
    printf(" accessing value through **pp : %d \n", **pp);

    return 0;
}
