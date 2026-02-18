#include <stdio.h>
#include<math.h>
int main(){
    int n,sum=0,r;
    
    scanf("%d",&n);
    for(int i=0;n>0;n=n/10){
        r=n%10;
        double sqr=pow(2,i++);
        sum+=r*sqr;
        

    }
      printf("%d",sum);
    

    return 0;
}
