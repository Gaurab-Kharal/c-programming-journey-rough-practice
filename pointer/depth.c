#include <stdio.h>

int main() {
    printf("----------- simple variable declaration, assignment of value\n\n");

    char sword[] = "Ace";
    printf("%s\n", sword);

    printf("----------- using pointers to access data from continuous memory object --------\n\n");
    
    char *p_sword = sword; // here sword decays too &sword[0]
    printf("pointer : %p, character : %c\n\n", p_sword, *p_sword);

    printf("------------ Accessing all memory block values in continuous memory using pointer arithmethic -------------------- \n\n");

    printf("pointer : %p, character : %c\n\n", p_sword + 1, *(p_sword + 1));
    printf("pointer : %p, character : %c\n\n", p_sword + 2, *(p_sword + 2));

    printf("-------- using loop to iterate through pointer to derefrence each memory block in continuous memory -------------- \n\n");

    while (*p_sword != '\0') {
        printf("pointer / addr : %p, value : %c \n\n", p_sword, *p_sword);
        p_sword++;
    }
    
    return 0;
}
