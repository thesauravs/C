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
    printf("Name \t\t Value \t Address\n");
    printf("%s \t %d \t %p\n", "integerType", integerType, &integerType);
    printf("%s \t %d \t %p\n", "pointer", *pointer, &pointer);
    printf("\nThe value of pointer is %p.\n", pointer);
return 0;
}