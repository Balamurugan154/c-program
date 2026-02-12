

#include <stdio.h>

int main()
{
    char a,b;
    
    scanf("%c",&a);
    b=a;
    switch(b){
        case 'a':case 'e':case 'i':case 'o':case 'u':case 'A':case 'E':case 'I':case 'O':case 'U':{
        
        printf("Vowel");
        break;}
        default:{
        printf("Consoant");}
    }
    

    return 0;
}