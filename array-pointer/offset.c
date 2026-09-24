#include <stdio.h>
#include <stddef.h>

struct thing {
    char a;
    double b;
    int c;
};

int main(void) {
    struct thing x;
    
    printf("sizeof(struct thing) = %zu\n", sizeof(struct thing));

    printf("address of x   = %p\n", (void *)&x);
    printf("address of a   = %p\n", (void *)&x.a);
    printf("address of b   = %p\n", (void *)&x.b);
    printf("address of c   = %p\n", (void *)&x.c);

    printf("\n");

    printf("offset of a = %zu\n", offsetof(struct thing, a));
    printf("offset of b = %zu\n", offsetof(struct thing, b));
    printf("offset of c = %zu\n", offsetof(struct thing, c));

    
    return 0;
}
