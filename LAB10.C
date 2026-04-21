#include <stdio.h>

int main() {
    char op;
    int a,b;

    printf("Enter: ");
    scanf("%d %c %d",&a,&op,&b);

    printf("MOV R0, %d\n",a);
    printf("MOV R1, %d\n",b);

    switch(op) {
        case '+': printf("ADD R0, R1\n"); break;
        case '-': printf("SUB R0, R1\n"); break;
        case '*': printf("MUL R0, R1\n"); break;
        case '/': printf("DIV R0, R1\n"); break;
    }

    printf("MOV RESULT, R0\n");
    return 0;
}