

#include <stdio.h>

int main()
{
    int a;
    scanf("%d",&a);
    if(a<=100&&a>=91)
    printf("Grade A");
    else if(a<=90&&a>=75)
    printf("Grade B");
    else if(a<=74&&a>=60)
    printf("Grade C");
    else
    printf("Grade D");
    return 0;
}