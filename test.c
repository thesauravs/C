#include<stdio.h>
#include<stdlib.h>
#include"bubbleSort.h"

int main(){
    int n[10];
   for (int i = 0; i < 10; i++){
       n[i] = (rand() % 20 ) + 1;
       printf("%d ", n[i]);
   }

    bubbleSort(n, 10);
   
    printf("sorted \n");
    for(int i = 0; i < 10; i++){
        printf("%d ", n[i]);
    }
   
return 0;
}