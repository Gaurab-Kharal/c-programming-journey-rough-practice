#include <stdio.h>
#include <stdlib.h>

int main(void) {

    char *p = malloc(4 * sizeof(char));

    p[0] = 'a';
    p[1] = 'b';
    p[2] = 'c';
    p[3] = 'd';

    printf("%c \n", p[0]);
    printf("%c \n", p[1]);
    printf("%c \n", p[2]);
    printf("%c \n", p[3]);

    printf("------------------------------------ \n\n");

    printf("*p : %p \n\n", p); // malloc return the address and p points to addr of 1st byte 

    printf("p[0] addr : %p \n", &p[0]); // as we see this addr will be same as the above one 
    printf("p[1] addr : %p \n", &p[1]);
    printf("p[2] addr : %p \n", &p[2]);
    printf("p[3] addr : %p \n", &p[3]);

    return 0;
}
