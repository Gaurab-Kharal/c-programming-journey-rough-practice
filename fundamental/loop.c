#include <stdio.h>

int main() {  
    
    printf("\n*****************************\n");

    printf("\n          while loop           \n");

    printf("\n*****************************\n\n\n");


    int fish_count = 0;

    while (fish_count < 10) {

        printf("%d ________\n\n", fish_count);
        fish_count++;
    }

    printf("\n*****************************\n");

    printf("\n          for loop           \n");

    printf("\n*****************************\n\n\n");

    for (int i = 10; i > 0; i--) {

        printf("\n========\n%d\n", i);

    }
    
    printf("\n*****************************\n");

    printf("\n          do while loop           \n");

    printf("\n*****************************\n\n\n");

    int value = 0;

    do {
        printf("\n........\n%d\n",value % 2);
        value++;

    } while (value < 10);

 

}
