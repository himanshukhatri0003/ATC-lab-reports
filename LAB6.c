#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int i=0;

    printf("Enter string: ");
    scanf("%s",str);

    while(str[i]=='a') i++;
    int j=i;
    while(str[j]=='b') j++;

    if(i>0 && (j-i)==i && str[j]=='\0')
        printf("Accepted\n");
    else
        printf("Rejected\n");

    return 0;
}