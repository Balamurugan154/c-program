#include <stdio.h>

int main() {
    int n, temp, digit, sum = 0;
    scanf("%d", &n);

    for (temp = n; temp != 0; temp /= 10) {
        digit = temp % 10;
        sum += digit * digit * digit;
    }

    if (sum == n)
        printf("Yes");
    else
        printf("No");

    return 0;
}
