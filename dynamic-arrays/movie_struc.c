#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void) {

    struct movie {
        char name[50];
        double imdb_rating;
        int rank;
    };

    int n;
    printf("\n Enter the number of movies you are going to add information of : \n");
    scanf("%d", &n);

    printf("Size of struct movie : %zu \n", sizeof(struct movie));
    struct movie *p_movie = malloc(n * sizeof(struct movie));

    if (p_movie == NULL) {

        printf("Memory allocation failed. \n");
        return 1;
    }

    struct movie m1;
    strcpy(m1.name, "Your lie in april");
    m1.imdb_rating = 9.8;
    m1.rank = 3;

    struct movie *p_m1 = &m1;

    printf("p_m1 : %p \n", p_m1);

    printf("(*p_m1).imdb_rating p_m1->imdb_rating : %.2f \n", p_m1->imdb_rating);
    printf("(*p_m1).rank : %d \n", p_m1->rank);

    printf("(*p_m1).name : %p, value : *(p_m1->name) : %c\n", p_m1->name, *(p_m1->name));
    printf("(*p_m1).name : %p, value : *(p_m1->name) : %c\n", p_m1->name + 1, *(p_m1->name + 1));


    printf("------------------------------------------------------------------- \n");
    printf("Using allocated memory p_movie \n\n");
    printf("------------------------------------------------------------------- \n");

    strcpy(p_movie[0].name, "Grave Of The FireFlies");
    p_movie[0].imdb_rating = 10.00;
    p_movie[0].rank = 1;

    strcpy(p_movie[1].name, "Claus");
    p_movie[1].imdb_rating = 9.8;
    p_movie[1].rank = 2;

    strcpy(p_movie[2].name, "KiKi's Delivery Service");
    p_movie[2].imdb_rating = 9.4;
    p_movie[2].rank = 3;


    free(p_movie);
    return 0;
    
}  
