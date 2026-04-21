#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter statement: ");
    gets(str);

    if(strncmp(str,"if",2)==0)
        printf("Valid IF statement\n");
    else
        printf("Invalid\n");

    return 0;
}