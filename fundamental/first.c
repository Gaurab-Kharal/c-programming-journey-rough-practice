#include <stdio.h>

char single_char() {
    char id = 'B';
    printf("Aviation : %c\n", id);

    return id;
};


int main() {

    
    printf("\n\n\n---------------------------------------------------------------------------\n\n\n");

    int age = 10;
    char name[] = "gaurab";
    char character = 'A';

    printf("Name : %s\nAge : %d \n\n", name, age);

    single_char(); 

    int day = 7;

    switch (day) {
        case 1:
            printf("The day is SUNDAY guys");
            break;

        case 2:
            printf("The day is MONDAY guys");
            break;

        case 3:
            printf("The day is TUESDAY guys");
            break;

        case 4:
            printf("Thd day is WEDNESDAY guys");
            break;

        case 5:
            printf("The day is THURSDAY guys");
            break;

        case 6:
            printf("The day is FRIDAY guys");
            break;

        case 7:
            printf("The day is SATURDAY guys");
            break;

        default:
            printf("The day you choose is not in this earth model");
    }

    printf("\n\n\n---------------------------------------------------------------------------\n\n\n");
    

    return 0;
};


