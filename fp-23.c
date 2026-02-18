#include <stdio.h>
#include<math.h>
int main(){
    int n,p,c=0;
    scanf("%d",&n);
    for(int j=2;j<n;j++){
        p=1;
    for(int i=2;i<j;i++){
        if (j%i==0){
            p=0;
            break;
        }
        
    }
    if(p==1){
       c++;
       
    }
    
}
printf("%d",c);
    return 0;
}
