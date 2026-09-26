#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int a = 10;
    int b = 20;

    int *ptr = &a;
    int *ptr_b = &b;

    printf("addr of a *ptr : %p value : %d \n", ptr, *ptr);
    printf("addr of b *ptr_b : %p value : %d \n\n", ptr_b, *ptr_b);

    *ptr = 15;

    printf("value of *ptr after modifying : %d \n\n", a);

    void change_addr(int *ptr) {

        int c = 30;
        int *ptr_c = &c;

        printf("addr of c : %p, value : %d \n\n", ptr_c, *ptr_c);

        ptr = &c;

        printf("addr of ptr : %p, value : %d \n", ptr, *ptr);
        printf("addr of a *ptr : %p value : %d \n\n", ptr, *ptr);

        printf("value of a : %d \n", a);
    }

    change_addr(ptr);
    printf("addr of a *ptr : %p value : %d \n", ptr, *ptr);

    // double pointer 

    int **d_ptr = &ptr;
    printf("d_ptr : %p, value *d_ptr : %p \n\n", d_ptr, *d_ptr);

    printf("-------------- using double pointer to change value ------------------ \n\n");

    void change_addr_using_double(int **x) {

        int e = 7;
        int *ptr_e = &e;

        printf("addr of e = ptr_e : %p, value of *ptr_e : %d \n\n", ptr_e, *ptr_e);

        *x = ptr_e;

        printf("addr *x : %p, **x : %d \n\n", (void *)*x, **x);
    }
    
    change_addr_using_double(d_ptr);

    printf("------------------------- outside function --------------------------- \n\n");

    printf("addr of a *ptr : %p value : %d \n", ptr, *ptr);

    printf("------ Redefining the function so dangling pointer does not mess the value, so i should use variable and pointers inside its defined scope. \n\n");

    char horizon[5] = "skyo3";  
    char *h_ptr = horizon; // By default horizon = &horizon[0]
    char **h_dptr = &h_ptr;

    printf("horizon : %s \n\n", horizon);


    printf(" \n\n =================================================================================== \n\n");

    int i = 0;
    while (i < 5) {

        printf("addr of &horizon[%d] || h_ptr + %d : %p, *(h_ptr + %d) value : %c \n", i, i, h_ptr + i, i, *(h_ptr + i));
        i++;
    };

    char ground[5] = "soils";
    char *g_ptr = ground;
    char **g_dptr = &g_ptr;

    
    printf(" \n\n =================================================================================== \n\n");

    int n = 0;
    while (n < 5) {

        printf("addr of &ground[%d] || g_ptr + %d : %p, *(g_ptr + %d) value : %c \n", n, n, g_ptr + n, n, *(g_ptr + n));
        n++;
    };

    void addr_update(char **p) {
        
        *p = g_ptr;
        
    }

    addr_update(h_dptr);
    
    printf(" \n\n =================================================================================== \n\n");
    int x = 0;
    while (x < 5) {

        printf("addr of &horizon[%d] || h_ptr + %d : %p, *(h_ptr + %d) value : %c \n", x, x, h_ptr + x, x, *(h_ptr + x));
        x++;
    };

    return 0;
}
