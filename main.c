#include<stdio.h>
#include"string.h"

c10_16(char p[],int b){
  int j,i=0;
  /***********SPACE***********/
  
  while(b > 0){
    j=b%16;
    if(j>=0&&j<=9){
      p[i] = j+'0';
    }else{
      p[i] = j + 55;   
    }
    b = b / 16;

    i++;
  }
  p[i] = '\0';
}

int main(){
  int a,i; 
  char s[20];
  printf("2%10 is %d\n",2%10);
  printf("inputainteger:\n");
  scanf("%d",&a);
  c10_16(s,a);
  for(i=strlen(s);i>=0;i--){
    printf("%c",s[i]);
    printf("\n");
  }
  return 0;
}
