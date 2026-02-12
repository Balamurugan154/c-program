

#include <stdio.h>

int main()
{
    char a;
    scanf("%c",&a);
    if(a>=65&&a<=90)
    printf("Uppercase letter");
    else if(a>=97&&a<=122)
    printf("lowercase letter");
   
    else
    printf("Not a letter");
    return 0;
}