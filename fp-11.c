

#include <stdio.h>

int main()
{
    int i,n,;
    int s=0;
    scanf("%d",&n);
    for(i=0;n>0;n=n/10){
    
    s=s+n%10;
    
    }
    printf("%d",s);

    return 0;
}