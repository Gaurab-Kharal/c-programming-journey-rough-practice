#include <stdio.h>

int main() {
    int value = 10;

    int *space = &value;

    printf("-------- value directly through refer/variable --------------\n");
    printf("%d\n", value);


    printf("-------- memory address -------------\n");
    printf("%p\n", space);


    printf("-------- value at named memory, which being pointed by pointer space -------------\n");
    printf("%d\n", *space);

    // How to modiy value using  a  pointer 
    // pointer --> space(( pointer variable )) --------> value| 1 | 0 | <-- named memory space 
    
    *space = 20; // here space is the address that is pointing to memory holding integer, meanwhile *space derefrencing basically say now 
                 // don't refrence but say what value is at that address and i am accessing that and modifying it 
                 //
    
    printf("-------- modifying value at &space derefrencing address using * -------------\n");
    printf("%d\n", *space);

    }
