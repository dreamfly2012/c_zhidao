#include <stdio.h>

#define arrLength(x) sizeof(x)/sizeof(x[0])
typedef struct subject{
    char name[10];
    double score;
} SUB;
SUB array[]={
    {"语文",0},{"数学",0},{"英语",0}
};
int main(){
    int i;
    i = arrLength(array);
    printf ("%d",i);
    return 0;
}
