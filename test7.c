#include"stdlib.h"
#include"stdio.h"
#include<math.h>

int main(int argc, char ** argv){
    float a,b,c;
    printf("please input two numbers:\n");
    scanf("%f %f",&a,&b);
    c = a*b;
    c = sqrt(c);
    printf("sqrt value is %0.2f\n", c);
    return 0;
}
