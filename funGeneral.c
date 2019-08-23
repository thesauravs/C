#include<stdio.h>

void callByValue(int i, int j){
    i = 100, j = 200;
    printf("Inside the function the value of a and b is %d and %d.\n", i, j);
}
void callByReference(int *i, int *j){
    *i = 50, *j = 70;
    printf("Inside the function the value of a and b is %d and %d.\n", *i, *j);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Before the function the value of a and b is %d and %d.\n", a, b);

    callByValue(a,b);
    printf("After the function the value of a and b is %d and %d.\n", a, b);

    callByReference(&a, &b);
    printf("After the function call by reference the value of a and b is %d and %d.\n", a, b);
    return 0;
}

