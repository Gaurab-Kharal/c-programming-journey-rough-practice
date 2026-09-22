#include <stdio.h>
#include <string.h>

int main() {

    // name
    // age
    // height
    // weight
    // class : 'S' 'A' 'B' 'C' 'D' 'E'   

    struct sword {
        
        char name[50];
        int age;
        double height;
        float weight;
        char class;
    };

    struct sword Griphon;

    strcpy(Griphon.name, "Griphon");
    Griphon.age = 1000;
    Griphon.height = 3.5245898978;
    Griphon.weight = 10.2;
    Griphon.class = 'S';

    struct sword *p_Griphon = &Griphon;

    printf("%p \n\n", p_Griphon);

    // *(p_Griphon->name) = (*p_Griphon).name
    // p_Griphon refer to address of a whole memory object 
    // -> p_Griphon go to the object structure and get name member 
    // Here name is a array 
    // Expression should be a pointer/ address 
    // array -> pointer conversion
    // * would degrade array to first element address of an array
    // (*p_Griphon).name) whould degrade to addr of first element in array 
    // *((*p_Griphon).name) will get be the actual value in 0 index of array
    
    printf("------------------------ p_Griphon.name --------------------------- \n\n");
   
    printf("Griphon.name 0 index addr : %p \n\n", p_Griphon->name);
    printf("Griphon.name 0 index value : %c \n\n", *(p_Griphon->name));

    printf("Griphon.name 1 index addr : %p \n\n", p_Griphon->name + 1);
    printf("Griphon.name 1 index value : %c \n\n", *(p_Griphon->name + 1));

    printf("------------------------ p_Griphon.name while loop --------------------------- \n\n");

    int i = 0;
    while (*(p_Griphon->name + i) != '\0'){

        printf("Griphon.name %d index addr : %p \n\n", i, p_Griphon->name + i);
        printf("Griphon.name %d index value : %c \n\n", i, *(p_Griphon->name + i));

        printf("======================================\n\n");
        i++;
    }

    printf("------------------------ p_Griphon.height --------------------------- \n\n");

    printf("Griphon.height addr : %p \n\n", &p_Griphon->height);
    printf("Griphon.height value : %.10f m\n\n", p_Griphon->height);

    printf("------------------------ p_Griphon.weight --------------------------- \n\n");

    printf("Griphon.weight addr : %p \n\n", &p_Griphon->weight);
    printf("Griphon.weight value : %.1f kg \n\n", p_Griphon->weight);
    
    printf("------------------------ p_Griphon.class ----------------------------- \n\n");

    printf("Griphon.class addr : %p \n\n", &p_Griphon->class);
    printf("Griphon.class value : %c \n\n", p_Griphon->class);

}    
