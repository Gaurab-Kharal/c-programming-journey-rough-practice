#include <stdio.h>
#include <string.h>

int main() {
    
    // This is like defining my own data structure 
    
    struct fruit{
        char name[50];
        double weight;
        char color[50];
    };

    struct fruit f1;

    strcpy(f1.name, "Apple");
    f1.weight = 2.54;
    strcpy(f1.color, "Red");

    struct fruit *p_f1 = &f1;

    printf("pointer : %p \n", p_f1);
    printf("addr f1.name : %p \n", p_f1->name);
    printf("addr f1.weight: %p \n", p_f1->weight);
    printf("addr f1.color: %p \n", p_f1->color);

    printf("---------------------------------------------------- \n\n");

    printf("value f1->name : %c\n", *(p_f1->name)); // 
    printf("value f1->weight : %.2f\n", p_f1->weight); // (*p_f1).weight
    printf("value f1->color : %c\n", *(p_f1->color));

    return 0;
}
