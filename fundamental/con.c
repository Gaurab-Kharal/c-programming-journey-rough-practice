#include <stdio.h>

int main() {
    int legal_age = 18;
    int actual_age = 20;

    char name[] = "Gaurab";

    if (actual_age > 11) {

        printf("%s you are teenager\n", name);

    } else {
        print("Hey %s you are not allowed here\n", name);
    }

    if (actual_age > 30) {
        printf("you are old\n");

    } else if (actual_age > 20) {
        printf("you are young adult\n");

    } else if (actual_age > 18) {
        printf("you are elligeable for driving license\n");

    } else {
        printf("Hey %s you are too young for any of this\n");

    }

    return 0;
    
}
