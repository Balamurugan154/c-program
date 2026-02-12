#include <stdio.h>

int main() {
    int a, b;
    char op;
    int result;

    printf("Enter expression : ");
    scanf("%d %c %d", &a, &op, &b);

    switch(op) {
        case '+':
            result = a + b;
            printf("Result = %d\n", result);
            break;

        case '-':
            result = a - b;
            printf("Result = %d\n", result);
            break;

        case '*':
            result = a * b;
            printf("Result = %d\n", result);
            break;

        case '/':
            if (b != 0)
                printf("Result = %d\n", a / b);
            else
                printf("Division by zero not allowed\n");
            break;

        default:
            printf("Invalid operator\n");
    }

    return 0;
}