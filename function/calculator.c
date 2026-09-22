#include <stdio.h> 

// calculator function 
//
// - Divide 
// - Multiply
// - Add 
// - Subtract 
//
//  I will create 4 function which takes two arguments and return some value

// add() function
int add(int a, int b){
    return a + b;
}

// Subtract() function
int subtract(int a, int b){
    return a - b;
}

// multiply() function
int multiply(int a, int b){
    return a * b;
}

// divide() function
float divide(int a, int b){
    return (float)a / b;
}

int main() {
    printf("------------------------------------------------------------- \n");
    printf("----------------------| CALCULATOR |------------------------- \n");
    printf("------------------------------------------------------------- \n\n");

    printf(" You are requested to input two arguments for arithmethic operations\n\n");

    int first_argument;
    int second_argument;

    printf("Input first argument : \n");
    scanf("%d", &first_argument);

    printf("Input second argument : \n");
    scanf("%d", &second_argument);

    int *p_first_argument = &first_argument;
    int *p_second_argument = &second_argument;
    
    printf("************************************************************ \n Select Corresponding Number For Corresponding operation \n************************************************************ \n - Add : 1 \n - Subtract : 2 \n - Multiply : 3 \n - Divide : 4 \n\n");

    int choice;
    printf("Enter a number : \n");
    scanf("%d", &choice);

    int *p_choice = &choice;

    if (*p_choice == 1){

       int result = add(*p_first_argument, *p_second_argument);
       printf("Output : %d \n\n", result);

    } else if (*p_choice == 2) {

       int result = subtract(*p_first_argument, *p_second_argument);
       printf("Output : %d \n\n", result);

    } else if (*p_choice == 3){

       int result = multiply(*p_first_argument, *p_second_argument);
       printf("Output : %d \n\n", result);

    } else if (*p_choice == 4){

       float result = divide(*p_first_argument, *p_second_argument);
       printf("Output : %.4f \n\n", result);

    } else {

        printf("Your Input is not valid \n");
        printf("----------------- Process Termination -------------------- \n\n");
    }

    return 0;
}
