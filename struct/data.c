#include <stdio.h>
#include <string.h>

int main() {

    struct tree{
        char name[50];
        double height;
        char quality; // 'A', 'B', 'C'
    };

    // Defining oak memory object with data structure of tree
    struct tree t1;

    strcpy(t1.name, "oak"); // strcpy(destination buffer, soruce string) copying string from source to destination meory buffer
    t1.height = 113;
    t1.quality = 'A';

    struct tree *p_t1 = &t1;

    printf("t1.name addr : %p, t1.name value %c \n\n", p_t1->name, *(p_t1->name));
    printf("t1.height addr : %p, t1.name value %.2f \n\n", &(p_t1->height), p_t1->height);
    printf("t1.quality addr : %p, t1.quality value %c \n\n", &(p_t1->quality), p_t1->quality);

    
    
}
