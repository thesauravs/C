#include<stdio.h>

int main(){
    FILE *fp;
    fp = fopen("file.txt", "r");
    char lineRead[200];

    while (!feof(fp)){
        fgets(lineRead, 200, fp);
        puts(lineRead);
    }
    fclose(fp);
return 0;
}