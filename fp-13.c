

#include <stdio.h>

int main()
{
    int i,n,m;
    int s=1;
    scanf("%d %d",&n,&m);
    for(i=1;i<=m;i++){
    
    s=s*n;
    
    }
    printf("%d",s);

    return 0;
}