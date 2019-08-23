#include<stdio.h>

int main(){
    int integerType = 666;
    int *pointer;
    pointer = &integerType;

    float floatType;
    double doubleType;
    char charType;

    printf("The size of integer is %lu.\n", sizeof(integerType));
    /* printf("The size of float is %lu.\n", sizeof(floatType));
    printf("The size of double is %lu.\n", sizeof(doubleType));
    printf("The size of char is %lu.\n", sizeof(charType));
 */
    printf("The value of integerType is %d.\n", integerType);
    printf("The value of address of integerType is %p.\n", &integerType);
    printf("The value of pointer to integerType is %p.\n", pointer);
    printf("The address of pointer to integerType is %p.\n", &pointer);
    printf("The value of pointer pointing also called dereferencing is %d.\n", *pointer);
    printf("This is how you print %% sign.\n");

return 0;
}