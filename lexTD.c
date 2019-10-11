//Lex Table Driven
/*
    Input Characters
    a = 1   b = 2   c = 3   i = 4  f = 5
    0 = 6   1 = 7   2 = 8

    Token Type
    ID = 8  IF = 9  NUM = 10 
    ERROR / INVALID = 0

                                             State Diagram

                (NUM Final)                i          (ID Final)     f     (IF Final)
            ====== 5 < ============ 1 ==================> 2  ===============> 3 
      0,1,2 ||    /\     0,1,2      ||                   //                  //
            ||====||                ||                  //                  //
                                    ||  a,b,c,f        //                  //
                                    ||                // a,b,c,i,0,1,2    // 
                                    ||               //                  // a,b,c,i,f,0,1,2
                                    \/              //                  //
                                                   //                  //
                             ======= 4 <=========== ===================
                            ||   (ID Final) 
            a,b,c,i,f,0,1,2 ||       /\
                              =======||   
*/
#include<stdio.h>

int main(){
                                /*O,  a,  b,  c,  i,  f,  0,  1,  2,  type*/
    int TM[][10] = {/*State O*/  {0,  0,  0,  0,  0,  0,  0,  0,  0,   0},
                    /*State 1*/  {0,  4,  4,  4,  2,  4,  5,  5,  5,   0},
                    /*State 2*/  {0,  4,  4,  4,  4,  3,  4,  4,  4,   8/*ID*/},
                    /*State 3*/  {0,  4,  4,  4,  4,  4,  4,  4,  4,   9/*IF*/},
                    /*State 4*/  {0,  4,  4,  4,  4,  4,  4,  4,  4,   8/*ID*/},
                    /*State 5*/  {0,  0,  0,  0,  0,  0,  5,  5,  5,  10/*NUM*/}
                    }; 

    int startState = 1, currentState = 1;
    int lastSeenAcceptState = 0;
    int nextState;

    int inputCharacter[] = {7,1,2,7,0}; //string is "fi" which corresponds to 54
    int i = 0; //used to advance the input
    int TOKEN; //Token type
    int currentPosition; //to record current position of input

    while (inputCharacter[i] != 0){
        //Longest Match
        nextState = TM[currentState][inputCharacter[i]];
        if(nextState){
            currentState = nextState;
            //i++;
            //check if current state is accepting / final state
            if(TM[currentState][9]){
                //Record the last accepting state
                lastSeenAcceptState = currentState;
                currentPosition = i;
                TOKEN = TM[currentState][9];
            }
            i++;
        }
        else{
            //TOKEN = TM[lastSeenAcceptState][9];
            break;
        }
    }

    //prints all input character until undefined character or end of input character is encountered
    for(int j = 0;  j <= currentPosition; j++){
        //printf("%d", inputCharacter[j]);
        if(inputCharacter[j] == 1)
            printf("a");
        else if(inputCharacter[j] == 2)
            printf("b");
        else if(inputCharacter[j] == 3)
            printf("c");
        else if(inputCharacter[j] == 4)
            printf("i");
        else if(inputCharacter[j] == 5)
            printf("f");
        else if(inputCharacter[j] == 6)
            printf("0");
        else if(inputCharacter[j] == 7)
            printf("1");
        else if(inputCharacter[j] == 8)
            printf("2");
        else
            printf(" _otherCh");

    }
    //printf(" is %d. \n", TM[lastSeenAcceptState][9]);
    if(TOKEN == 8)
        printf(" is ID. \n");
    else if(TOKEN == 9)
        printf(" is IF. \n"); 
    else if(TOKEN == 10)
        printf(" is NUM. \n");
    else
        printf(" is INVALID. \n");
return 0;
}