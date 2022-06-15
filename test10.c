#include "stdio.h"

int main(){
    int a=2,b=3,c=4,d=5;
    int m=2,n=2;
    //a=(m=a>b)&&(n=c>d)+5;
    a = (m&&n)+100; 
    printf("m=%d,n=%d,a=%d",m,n,a);
    return 0;
}
