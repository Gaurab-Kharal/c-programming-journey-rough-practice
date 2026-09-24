#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int count;
    printf("How many characters? \n");
    scanf("%d", &count);
    
    //---------------------------------------------------
    char *p_fire = malloc(count * sizeof(char));

    int i = 0;
    while(i < count) {

        char character;

        printf("\n Enter your desier word one character at a time \n");
        scanf(" %c", &character);

        p_fire[i] = character;
        printf("\n %c \n", p_fire[i]);

        i++;
    }
    free(p_fire); 
    return 0;
}
