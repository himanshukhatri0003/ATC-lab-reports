#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp=fopen("input.txt","r");
    char ch;
    int lines=0,words=0,chars=0,inword=0;

    while((ch=fgetc(fp))!=EOF) {
        chars++;
        if(ch=='\n') lines++;

        if(isspace(ch)) inword=0;
        else if(!inword) {
            inword=1;
            words++;
        }
    }

    printf("Lines=%d Words=%d Characters=%d\n",lines,words,chars);
    fclose(fp);
    return 0;
}