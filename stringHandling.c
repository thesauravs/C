#include<stdio.h>
#include<string.h>

int main(){
    char string[100], temp[100], string2[100] = "Welcome ";

    printf("Enter the string for operations: \n");
    gets(string);

    //string length
    printf("The length of string is %lu.\n", strlen(string));

    //copy one string to another string
    printf("Before strcpy operation.\n");
    printf("%s\n", temp);
    stpcpy(temp, string);
    printf("After strcpy operation.\n");
    printf("%s\n", temp);

    //string concatenation
    printf("string: %s\n", string);
    printf("string 2: %s\n", string2);
    printf("temp: %s\n", temp);
    printf("the string is concatenated.\n%s\n", strcat(string2, temp));
    printf("string: %s\n", string);
    printf("string 2: %s\n", string2);
    printf("temp: %s\n", temp);

    //string comparison
    if(strcmp(string, temp) == 0)
        printf("The strings are identical.\n");
    else
        printf("The strings are different.\n");

return 0;
}