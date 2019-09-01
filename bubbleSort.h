#include"swap.h"

void bubbleSort(int numbers[], int length){
        while(1){
        int swapped = 0;
        for(int i = 0; i < length - 1; i++){
            if(numbers[i] > numbers[i+1]){
                swap(&numbers[i], &numbers[i+1]);
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
    }

}