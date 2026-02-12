#include <stdio.h>

int main() {
    int a,b,c;
     
    int result;

    printf("Enter a case number : ");
    scanf("%d %d %d", &c, &a, &b);

    switch(c) {
        case 1:
            result = a + b;
            printf("sum = %d\n", result);
            break;

        case 2:
            result = a - b;
            printf("sub = %d\n", result);
            break;

        case 3:
            result = a * b;
            printf("mul = %d\n", result);
            break;

        case 4:
            result = a/b;
                printf("div = %d\n",result);
            
            break;

        default:
            printf("Invalid case number\n");
    }

    return 0;
}