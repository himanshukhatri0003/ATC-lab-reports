#include <stdio.h>
#include <ctype.h>

int main() {
    char str[100];
    printf("Enter identifier: ");
    scanf("%s",str);

    if(isalpha(str[0])||str[0]=='_') {
        for(int i=1;str[i];i++) {
            if(!(isalnum(str[i])||str[i]=='_')) {
                printf("Invalid\n");
                return 0;
            }
        }
        printf("Valid\n");
    } else printf("Invalid\n");

    return 0;
}