#include <stdio.h>
#include <string.h>

int main() {

    printf("defining variable");
    char ocean[30]; // so ocean refer to memory object 

    printf("Enter Ocean Name : ");
    scanf("%s", ocean);
    
    size_t ocean_len = strlen(ocean);

    for (int i = 0; i < ocean_len; i++) {
        
        char *o_addr = &ocean[i];

        printf("------------- \n");
        printf("%c \n", *o_addr);
    }

    return 0;
}
