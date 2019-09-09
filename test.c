#include<stdio.h>
#include<stdlib.h>
//#include"bubbleSort.h"

int main(){
                                    /*O,  a,  b,  c,  i,  f,  0,  1,  2,  type*/
    int TM[][10] = {/*State O*/  {0,  0,  0,  0,  0,  0,  0,  0,  0,   0},
                    /*State 1*/  {0,  4,  4,  4,  2,  4,  5,  5,  5,   0},
                    /*State 2*/  {0,  4,  4,  4,  4,  3,  4,  4,  4,   8/*ID*/},
                    /*State 3*/  {0,  4,  4,  4,  4,  4,  4,  4,  4,   9/*IF*/},
                    /*State 4*/  {0,  4,  4,  4,  4,  4,  4,  4,  4,   8/*ID*/},
                    /*State 5*/  {0,  0,  0,  0,  0,  0,  5,  5,  5,  10/*NUM*/}
                    }; 
    int inputCharacter[] = {3,4,5};
    int i = 19;
    printf("%d \n", inputCharacter[i]);
    printf("%d \n", TM[2][inputCharacter[i]]);
/* 
    if(0)
        printf("false \n");
    else
        printf("true \n");
     */

return 0;
}