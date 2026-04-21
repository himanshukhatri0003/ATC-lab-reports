#include <stdio.h>
#include <string.h>

int main() {
    char expr1[20], expr2[20];

    printf("Enter expr1: ");
    scanf("%s",expr1);
    printf("Enter expr2: ");
    scanf("%s",expr2);

    if(strcmp(expr1,expr2)==0)
        printf("Common subexpression eliminated\n");
    else
        printf("No optimization\n");

    return 0;
}