#include"stdio.h"


int main(int args, char**argv){
    int a[3][3] = {1,2,5,2,6,8,4,8,9};
    int b[100];
    int k = 0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            b[k] = a[i][j];
            k++;
        }
    }
    for(k=0;k<9;k++){
        printf("%d\n", b[k]);
    }
    return 0;
}

