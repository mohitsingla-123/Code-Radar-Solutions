#include <stdio.h>

int main() {
    int a, b;
    char op;

    // Taking input from the user
    
    scanf("%d %d %c", &a, &b, &op);

    // Performing the operation based on the operator
    switch(op) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b != 0) {
                printf("%d\n", a / b);
            } else {
                printf("error\n");
            }
            break;
        default:
            printf("error \n");
    }

    return 0;
}
