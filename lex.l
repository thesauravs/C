%{
#include <stdio.h>
int countLine = 0;
int countID = 0;

%}

id [_a-zA-Z][_a-zA-Z0-9]*
digit [0-9]
num_int {digit}+
num_float {num_int}\.{digit}*(e[+-]?[0-9]+)?
wspc [ \t]+
newline [\n]+
operator [-+*/%=]
keyword auto|const|int|short|struct|unsigned|double|float|break|continue|long|signed|switch|void|else|for|case|default|register|sizeof|typedef|volatile|enum|goto|char|do|return|static|union|while|extern|if
function main|printf|scanf
preprocessor #(include<.*\.h>|define.*|include\".*\")

%%

, {printf("%s \t\t COMMA\n", yytext);}
; {printf("%s \t\t SEMICOLON\n", yytext);}

[)(}{><\[\]] {printf("%s \t\t BRACKET\n", yytext);}
\/\/.* {printf("%s \t\t COMMENT\n", yytext);}
[\"'].*[\"'] {printf("%s \t\t STRING\n", yytext);}

{preprocessor} {printf("%s \t\t PREPROCESSOR\n", yytext);}
{function} {printf("%s \t\t RESERVED_FUNCTION\n", yytext);}
{keyword} {printf("%s \t\t RESERVED_KEYWORD\n", yytext);}
{operator} {printf("%s \t\t OPERATOR\n", yytext);}
{id} {printf("%s \t\t ID\n", yytext); countID++;}
{num_int} {printf("%s \t\t NUMBER_INT\n", yytext);}
{num_float} {printf("%s \t\t NUMBER_FLOAT\n", yytext);}
{newline} {countLine++;}
{wspc} {;}


%%
  
//Supplementary C Code
int main(){ 
  
/* yyin - takes the file pointer  
          which contains the input*/
/* yylex() - this is the main flex function 
          which runs the Rule Section*/
// yytext is the text in the buffer 
  

FILE *fp; 
char filename[50]; 
printf("Enter the filename: \n"); 
scanf("%s",filename); 
fp = fopen(filename,"r"); 
yyin = fp; 
  
yylex();  
printf("\nThe total number of lines in this program is %d.\n", countLine);
printf("The total number of identifier in this program is %d.\n", countID);

return 0; 
} 
