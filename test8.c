#include "stdio.h"
#include "string.h"

int main(int argc, char **argv){
    char key[] = "\xbf\xb8\x28\x17\x04\x35\x1e\x63[][\x00]\xa9\x1e";
    int s = sizeof(key);
    for(int i=0;i<s;i++){
        printf("%c", key[i]);
    }
    printf("\n");
    printf("%ld\n", strlen(key));
    printf("%ld\n", sizeof(key));
    return 0;
}
