#include <stdio.h>

int main(){
  int a[] = {2,3,4};
  int *p = &a[0];
  *p++;
  printf("p目前的指向的地址是%d\n",p);
  printf("p目前指向的地址里面的值是%d\n",*p);
  return 0;
}
