#include <stdio.h>

int main() {

    int tree_age = 175;
    char tree_name[] = "Oak";
    double tree_height = 10.54;

    printf("------------- int ---------------\n\n");
    
    int *p_tree_age = &tree_age;
    
    printf("addr : %p \nvalue : %d\n", p_tree_age, *p_tree_age);

    printf("-------------- char -------------\n\n");

    char *p_tree_name = tree_name;
    printf("addr : %p, \nvalue : %c \n\n", p_tree_name, *p_tree_name);

    printf("------------------------ while loop to itterate through pointer addr ------------------------------------");

    while(*p_tree_name != '\0') {
        printf("addr : %p, \nvalue : %c \n\n", p_tree_name, *p_tree_name);
        p_tree_name++;
    }
    
    printf("-------------- double -------------\n\n");

    double *p_tree_height = &tree_height;
    printf("addr : %p, \nvalue : %.2f \n\n", p_tree_height, *p_tree_height);

    printf("------------------ Calulating different datatypes size --------------- \n\n");

    printf("sizeof(char) = %zu \n\n", sizeof(char));
    printf("sizeof(int) = %zu \n\n", sizeof(int));
    printf("sizeof(double)= %zu \n\n", sizeof(double));

    printf("_______________________________________________ \n\n");

    int sun_age = 20;
    char sun_element = 'H';
    char sun_element_abbrivation[] = "Hydrogen";
    double sun_temp = 125.255;

    // Ignore my spelling and grammer and i might also make some confusing statement evaluate if my overall modle is in correct direction and 
    // accurate or not 
    //
    // int sun_age = 20;
    // Here we are declaring a variable 
    // data type of variable is integer, variable refer to some amount of physical memory block in computer
    // and data type is what type of data is stored there 
    // this is same for every data type float, double, char, string and so on 
    // data type also are important for defining the unit of each block of memory obj 
    // example int has for most part 
    // unit of 4byte meaning each block is 4byte and when we add +1 here +1 refer to addin 4byte too pointer addr in pointer arithmetic 
    // so same +1 for string is diff as each blok would be 1byte and for double it will be 8byte 
    // so +1 unit is dependant on data type 


    printf("****************************** int ********************************************* \n\n");
    int *p_sun_age = &sun_age;

    printf("pointer addr : %p, value : %d\n", p_sun_age, *p_sun_age);
    printf("pointer addr : %p, value : %d\n", (p_sun_age + 1), *(p_sun_age + 1)); // so, here +1 in (p_sun_age) is 1byte to next block
                                                                                  // but *(p_sun_age + 1) : this just point to addr which 
                                                                                  // should be empty because we have not stored any integer data there 
    
    printf("****************************** char ********************************************* \n\n");
    char *p_sun_element = &sun_element;
                                                     
    printf("pointer addr : %p, value : %c\n", p_sun_element, *p_sun_element);
    printf("pointer addr : %p, value : %c\n", (p_sun_element + 1), *(p_sun_element + 1)); // so, here +1 in (p_sun_element) is 8bytes to next block
                                                                                          // same as above only this time to get to next addr +1 = 4bytes of movement
                                                                                          // and because it is single character we will get empty for next addr
                                                                                          // |'H'|'\0'|

    printf("****************************** string ******************************************** \n\n");
    char *p_sun_element_abbrivation = sun_element_abbrivation; // sun_element_abbrivation degrades to &sun_element_abbrivation[0]

    printf("pointer addr : %p, value : %c\n", p_sun_element_abbrivation, *p_sun_element_abbrivation);
    printf("pointer addr : %p, value : %c\n", (p_sun_element_abbrivation + 1), *(p_sun_element_abbrivation + 1)); // so, here +1 in (p_sun_age) is 1byte to next block
    
    printf("****************************** double ********************************************* \n\n");
    double *p_sun_temp= &sun_temp;

    printf("pointer addr : %p, value : %f\n", p_sun_temp, *p_sun_temp);
    printf("pointer addr : %p, value : %f\n", (p_sun_temp + 1), *(p_sun_temp + 1)); // so, here +1 in (p_sun_temp) is 1byte to next block
                                                                                  // but *(p_sun_temp + 1) : this just point to addr which 
                                                                                  // +1 here is 8byte 
                                                                                  // should be empty because we have not stored any double float data there 
    // I notice when we *deference the addr which we have not assigned any data we get soem random char that i don't understand right now 
    // But overall idea is memory obj unit is defined by the datatype stored there 
    // int 
    // |   |    |   |
    // ^
    // |
    // 4byte and addr we use is 1st block addr which represent all the block in int , double float, float 
    //
    // char
    // |   |    |   |
    // ^
    // |
    // 1byte
    //
     // double
    // |   |    |   |
    // ^
    // |
    // 8byte
    // 
    // so +1 int equivalent movent if we directly map to char would be 4 block movement for char becacuse for char it is 1 byte that is all i understood 
    
    
    return 0;
}
