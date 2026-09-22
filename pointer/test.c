#include <stdio.h>

int main() {
    char password[] = "coldtea";
    char *value = password;

    while (*value != '\0') {

        printf("%c\n", *value);
        value++;
    }

    return 0;
}
