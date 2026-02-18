#include <stdio.h>
#include<math.h>
int main(){
    int n,p=1;
    scanf("%d",&n);
    
    for(int i=2;i<n;i++){
        if (n%i==0){
            p=0;
            break;
        }
        
    }
    if(p==1){
        printf("prime number");
    }
    else {
        printf("not a prime number");
    }

    return 0;
}
