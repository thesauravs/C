#include <stdio.h>
#include "abc.h"
#define abc a+b //Substitute a macro
#define ab(a,b) a+b //Substiture parametric macro

int main(){
    int a = 10, b = 5;

    printf("The abc macro output: %d \n", abc);

    #ifdef DEBUG
        printf("If DEBUG is defined.\n");
    #else
        printf("If DEBUG is not defined.\n");
    #endif

    printf("The ab(a,b) macro output: %d \n", ab(2,3));

    printf("The value of PI is %.2f.\n", PI);
    return 0;
}