#include<stdio.h>

main(){
    int n, max, number, i;
    printf("Enter the size of list: ");
    scanf("%d", &n);

    if(n>0){
        printf("Enter the number: ");
        scanf("%d", &number);
        max = number;
        for(i = 1; i < n; i++){
            scanf("%d", &number);
            if(number > max){
                max = number;
            }
        }
        printf("The max of number is: %d\n", max);
    }
}