#include <stdio.h> 

int main() {
    int num[4] = {10, 20, 30, 40};
    int *p_num = num;

    // homogeneous 
    // 4 elements
    // data type of array in int

    // p_num is a pointer --> address --> &num[0]
    
    printf("size of int : %zu bytes \n\n", sizeof(int));

    // using while loop 

    int i = 0;

    while(i < 4) {

        printf("num[%d] : %d, p_num + %d : %p, *(p_num + %d) : %d \n\n", i, num[i], i, p_num + i, i, *(p_num + i));
        printf("====================================================================================== \n");
        i++;
    }
    
    printf("============ Storage Block ============== \n\n");

    printf("addr + 1 : +1 unit depends on the sizeof(data types) \n");
    printf("so as sizeof(int) = 4byte +1 moves the block by 4 byte so \n");

    printf("0x---650 to 0x---653 : 1st block = 10 \n");
    printf("each +1 moves the block by 4bytes to next block \n");
    printf("0x---654 to 0x---657 : 2nd block = 20 \n");
    printf("0x---658 to 0x---65b : 3rd block = 30 \n");

    printf("0x---65c to 0x---65f : 4th block = 40 \n");

    printf("next block start from 660 \n");

    printf("=========================== array, &array, &array[0] \n");
    int top_3[3] = {1, 2, 3};

    int *p = top_3;
    printf("p : %p, p + 1 : %p \n", p, p + 1); // +1 unit size will be size of (p) : 4bytes
    printf("&top3[0] : %p, &top3[0] + 1 : %p \n", &top_3[0], &top_3[0] + 1);
    printf("&top_3 : %p, &top_3 + 1 : %p\n", &top_3, &top_3 + 1); // here addr is of whole array so it unit size or +1 would be 
                                                                  // total elements count 3 * sizeof(array homogeneous data type)

    return 0;
}
