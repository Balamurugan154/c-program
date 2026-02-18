#include <stdio.h>

int main() {
    int n, temp, r, rev = 0;

    scanf("%d", &n);
    temp = n; 

    for (int i=1; n > 0; n = n / 10) {
        r = n % 10;
        rev = rev * 10 + r;
    }

    if (temp == rev)
        printf("Yes");
    else
        printf("No");

    return 0;
}
