#include <stdio.h>

int main() {
    FILE *in = fopen("input.c","r");
    FILE *out = fopen("output.c","w");
    char ch;

    while((ch=fgetc(in))!=EOF) {
        if(ch=='/') {
            char next=fgetc(in);
            if(next=='/') {
                while((ch=fgetc(in))!='\n');
            } 
            else if(next=='*') {
                while((ch=fgetc(in))!=EOF) {
                    if(ch=='*' && fgetc(in)=='/') break;
                }
            } 
            else {
                fputc(ch,out);
                fputc(next,out);
            }
        } else {
            fputc(ch,out);
        }
    }

    fclose(in);
    fclose(out);
    return 0;
}