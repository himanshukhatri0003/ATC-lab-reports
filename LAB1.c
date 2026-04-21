#include <stdio.h>
#include <ctype.h>
#include <string.h>

int isKeyword(char *str) {
    char *keywords[] = {"int","float","if","else","while","for","return"};
    for(int i=0;i<7;i++)
        if(strcmp(str,keywords[i])==0) return 1;
    return 0;
}

int main() {
    char str[100];
    printf("Enter token: ");
    scanf("%s", str);

    if(isKeyword(str)) printf("Keyword\n");
    else if(isdigit(str[0])) printf("Number\n");
    else if(isalpha(str[0])) printf("Identifier\n");
    else printf("Operator/Symbol\n");

    return 0;
}