#include <stdio.h>
int main(){
    int num1,num2;
    scanf("%d%d",&num1,&num2);
    float x=1.0/0.0;
    for (int i=1;i<x;i++)
    {
        if(i%num1==0 && i%num2==0){
            printf("%d",i);
            break;
            
        }
    }
      
    

    return 0;
}
