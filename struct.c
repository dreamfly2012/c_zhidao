#include <stdio.h>

struct node{
  int len;
  char *pk;
}x = {2,"right"},*p = &x;


int main(){
  printf("p->pk:%s\n",p->pk);
  printf("*p->pk:%c\n",*p->pk);
  printf("*x.pk:%c\n",*x.pk);
  char *s = "this is a string";
  printf("*s is %s\n",s);
  char c[] = {'t','h','i','s',' '};
  printf("*c is %c",*c);
  return 0;
}
