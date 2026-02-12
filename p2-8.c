#include <stdio.h>

int main()
{
    char a;
    scanf("%d",&a);
    if(a%3==0&&a%7==0)
    printf("multiple of 3 and 7");
    else
    printf(" its not multiple of 3 and 7");
    return 0;
}