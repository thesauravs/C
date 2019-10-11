//Regular expressions
// a|b      ID_1    111
// ab*a     ID_2    222
// (aba)+   ID_3    333

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
    //Importing the transition matrix
    #include"transitionMatrix.h"
    int startState = 1, currentState = 1;
    int lastSeenAcceptState = 0;

/*     for(int i = 0; i < 13; i++){
        for(int j = 0; j < 4; j++){
            printf("%d ",TM[i][j]);
        }
        printf("\n");
    } */

    char inputChar[100];
    printf("\nEnter the string: ");
    gets(inputChar);

    int inputInteger[strlen(inputChar)];

    //converting the string to respective integer value
    for(int i = 0; i < strlen(inputChar); i++){
        if(inputChar[i] == 'a'){
            inputInteger[i] = 1;
        }
        else if(inputChar[i] == 'b'){
            inputInteger[i] = 2;
        }
        else{
            inputInteger[i] = 0;
        }
    }

    int nextState;
    int position = 0;
    int rememberPosition[100];
    int TOKEN[100];
    int tknPosition = 0;
    //printf("\nThe length of inputChar is %lu.\n", strlen(inputChar));

    while(position < strlen(inputChar)){
        //printf("%d is the position.\n", position);
        nextState = TM[currentState][inputInteger[position]];
        //printf("%d is the nextState.\n", nextState);
        if(nextState){
            currentState = nextState;
            //printf("%d is the new currentState.\n", currentState);
            position++;
            if(TM[currentState][3]){
                //printf("%d is the TM[currentState][3].\n", TM[currentState][3]);
                lastSeenAcceptState = currentState;
                //printf("%d is the lastSeenAcceptState.\n", lastSeenAcceptState);
                //printf("%d is the tknPosition\n", tknPosition);
                rememberPosition[tknPosition] = position - 1;
                TOKEN[tknPosition] = TM[currentState][3];
                //printf("%d is the rememberPosition[tknPosition].\n", rememberPosition[tknPosition]);
                //printf("%d is the TOKEN[tknPosition].\n", TOKEN[tknPosition]);
                tknPosition++;
                //printf("%d is the tknPosition\n", tknPosition);
            }
        }
        else{
            printf("This is else part.\n");
            break;
        }
    }
    printf("String\t\t\tToken\n");
    for(int k = 0; k < tknPosition; k++){
        for(int j = 0; j <= rememberPosition[k]; j++){
            printf("%c", inputChar[j]);
        }
        //printf("\t\t\t%d", TOKEN[k]);
        if(TOKEN[k] == 111){
            printf("\t\t\tID_1");
        }
        else if(TOKEN[k] == 222){
            printf("\t\t\tID_2");
        }
        else if(TOKEN[k] == 333){
            printf("\t\t\tID_3");
        }
        printf("\n");
    }

return 0;
}