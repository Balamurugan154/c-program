

#include <stdio.h>

int main()
{
    int i,n,m;
    int s=0;
    scanf("%d",&n);
    for(i=0;n>0;n=n/10){
    
    m=n%10;
    s=s*10+m;
    
    }
    printf("%d",s);

    return 0;
}