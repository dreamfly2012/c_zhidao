#include"stdio.h"

#define CLASS_NUM 5
#define CLASS_TOTAL_PERSON 50
#define EVERYONE_USE_MINUTE 2

int main(int argc, char **argv){
    int class_num;
    int order_no;
    int start_time;
    int i;
    printf("请输入班级数量:");
    scanf("%d",&class_num);
    printf("请输入班级编号:");
    scanf("%d", &order_no);
    printf("请输入检查开始时间:");
    scanf("%d", &start_time);
    for(i=0;i<order_no;i++){
        start_time += order_no *CLASS_TOTAL_PERSON * EVERYONE_USE_MINUTE;
    }
    printf("该班级检查的开始时间是:%d\n", start_time);
    printf("该班级检查的结束时间是:%d\n", start_time + CLASS_TOTAL_PERSON*EVERYONE_USE_MINUTE);
    return 0;
}
