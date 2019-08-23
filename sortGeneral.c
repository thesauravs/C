#include<stdio.h>

int main(){
    int data[100], n, temp;
    printf("Enter the size of list: ");
    scanf("%d", &n);

    printf("Enter the data in array: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &data[i]);
    }

    printf("The numbers are: ");
    for(int i = 0; i < n; i++){
        printf("%d",data[i]);
    }
    printf("\n");

    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(data[i] > data[j]){
                temp = data[j];
                data[j] = data[i];
                data[i] = temp;
            }
        }
    }

    //sorted
    printf("The sorted list is: \n");
    for(int i = 0; i < n; i++){
        printf("%d ", data[i]);
    }
    printf("\n");

return 0;
}