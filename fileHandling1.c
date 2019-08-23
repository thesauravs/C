#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    FILE *filePointer;
    char str[1000];

    filePointer = fopen("file.txt", "w");

    if(filePointer == NULL){
        printf("The file is not opened\n");
        exit(1);
    }else
        printf("The file has opened\n");
    
    char str[30];

    printf("Enter the string to write: \n");
    gets(str);
    fprintf(filePointer, "%s", str);

    fclose(filePointer);
return 0;
}