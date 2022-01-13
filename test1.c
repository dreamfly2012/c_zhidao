#include <stdio.h>

void fun(int* x,int* y,int* z){
  while((*z)-->0&&++(*x)<5) *y = *y-1;
}

int main(){
  int x=0,y=5,z=3;
  fun(&x,&y,&z);
  printf("z=%d,x=%d,y=%d\n",z,x,y);
  return 0;
}
