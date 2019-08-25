#include<stdio.h>
#include<ctype.h>
#include<string.h>

int main(){
    char password[100];
    printf("Enter the password: (Must contain at least one upper case, one lower case and one number)\n");
    scanf("%s", password);
    printf("The password you entered is %s.\n", password);
    printf("The length of password is %ld.\n", strlen(password));
    int a = 0, b = 0, c = 0;
    for(int i = 0; i <= strlen(password); i++){
        if(isupper(password[i]))
            a++;
        if(islower(password[i]))
            b++;
        if(isdigit(password[i]))
            c++;
    }

    if((a > 0) && (b > 0) && (c > 0))
        printf("Your password is accepted.\n");
    else 
        printf("Password too weak.\n");
return 0;
}