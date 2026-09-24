#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // Declaring a variable that holds a value of total elements a user want in his array.

    int elements_count;
    printf("\nInput total elements you want in array ? \n");
    scanf("%d", &elements_count);

    // Memory allocation

    printf("size of double : %zu, total bytes allocated : %zu bytes \n", sizeof(double), elements_count * sizeof(double)); 

    double *imdb_ratings = malloc(elements_count * sizeof(double));

    // Assigning values to allocated Memory

    int i = 0;
    while (i < elements_count) {

        double element;
        printf("\nInput the value for %d element, precision of 4 decimal places : \n\n", i + 1);
        scanf("%lf", &element);
        
        imdb_ratings[i] = element; 
        printf("imdb_ratings[%d], addr : %p \n", i, &imdb_ratings[i]);

        printf("\n %d : %.4f \n\n",i + 1, imdb_ratings[i]);


        i++;
    }

   free(imdb_ratings);
   return 0; 

}
