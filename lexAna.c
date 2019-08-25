#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char ch, buffer[50];
    FILE *fp;
    int j = 0, lineno = 1;

    fp = fopen("program.txt", "r");
    if(fp == NULL){
        printf("Error opening file.\n");
        exit(0);
    }else{
        while((ch = fgetc(fp)) != EOF){

            if(ch == '\n')
                lineno += 1;
            if(isalnum(ch)){
   			    buffer[j++] = ch;
            }
   		    else if((ch == ' ' || ch == '\n' || ch == '(' || ch == '\\') && (j != 0)){
   				buffer[j] = '\0';
   				j = 0;
   				printf("%s is indentifier\n", buffer);
   		    }
        }
    }
    printf("The total number of lines in program are %d.\n", lineno);
return 0;
}