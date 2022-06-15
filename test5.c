#include <stdio.h>

int main(){
    int a=3,b=10;
    double x=10.4,y;
    int m,n;
    b=++b-a;
    y=x/b;
    m = x%y;
    printf("%f\n",y);
    return 0;
}
