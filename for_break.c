#include "stdio.h"
int main(int argc,char *argv[]){
    int s,m,n,l;
    printf("Please enter data(int >=0, <0 end)...\n");
    for(l=s=m=0,n=1;m>=0;n++){
        scanf("%d",&m);
        if(m<60 && m>=0)
            l++;
        else if(m<0)
            break;
        s+=m;
    }
    printf("Average = %.2f\nCount = %d\n",s/(n-0.0),l);
    return 0;
}
