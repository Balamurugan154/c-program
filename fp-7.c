

#include <stdio.h>

int main()
{
    int i,n;
    int m=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++){
    if(i%2==0)
    m=m+i;
    
    
    }
    printf("%d",m);

    return 0;
}