#include "stdio.h"
#include "stdlib.h"

#define SIZE 3

typedef struct student{ 
    int total;
    int english;
    int math;
    int computer;
    int num;
    char *name;
}Student;

Student stu[]={
    {100,20,40,40, 1,"zhasan"},
    {200,100,40,40,2,"lisi"},
    {150,20,90,40, 3,"wangwu"},
};


void write_content(Student* stu){
    FILE *fp = fopen("Score.dat","wb");
    if(fp==NULL){
        printf("打开文件失败");
        exit(0);
    }
    fwrite(stu,sizeof(Student),SIZE,fp);
    fclose(fp);
}

int cmp_total(const void *a, const void *b){
    Student c = *(Student*)a;
    Student d = *(Student*)b;
    return c.total - d.total;
}
int cmp_english(const void *a, const void *b){
    Student c = *(Student*)a;
    Student d = *(Student*)b;
    return c.english - d.english;
}
int cmp_math(const void *a, const void *b){
    Student c = *(Student*)a;
    Student d = *(Student*)b;
    return c.math - d.math;
}
int cmp_computer(const void *a, const void *b){
    Student c = *(Student*)a;
    Student d = *(Student*)b;
    return c.computer - d.computer;
}


void show_total(){
    qsort(stu, SIZE, sizeof(stu[0]), cmp_total);
    for(int i=0;i<SIZE;i++){
        printf("name:%s num:%d total:%d english%d math%d computer%d\n", stu[i].name, stu[i].num, stu[i].total, stu[i].english, stu[i].math, stu[i].computer);
    }
}

void show_computer(){
    qsort(stu, SIZE, sizeof(stu[0]), cmp_computer);
    for(int i=0;i<SIZE;i++){
        printf("name:%s num:%d total:%d english%d math%d computer%d\n", stu[i].name, stu[i].num, stu[i].total, stu[i].english, stu[i].math, stu[i].computer);
    }
}

void show_english(){
    qsort(stu, SIZE, sizeof(stu[0]), cmp_english);
    for(int i=0;i<SIZE;i++){
        printf("name:%s num:%d total:%d english%d math%d computer%d\n", stu[i].name, stu[i].num, stu[i].total, stu[i].english, stu[i].math, stu[i].computer);
    }
}

void show_math(){
    qsort(stu, SIZE, sizeof(stu[0]), cmp_math);
    for(int i=0;i<SIZE;i++){
        printf("name:%s num:%d total:%d english%d math%d computer%d\n", stu[i].name, stu[i].num, stu[i].total, stu[i].english, stu[i].math, stu[i].computer);
    }
}

void sort_by(char type){
    switch(type){
        case 'T':
            show_total();
            break;
        case 'C':
            show_computer();
            break;
        case 'M':
            show_math();
            break;
        case 'E':
            show_english();
            break;
        default:
            show_total();
    }
}

Student* read_content(){
    FILE *fp = fopen("Score.dat","rb");
    if(fp==NULL){
        printf("打开文件失败");
        exit(0);
    }
    Student stu[SIZE];
    Student *p = (Student*)malloc(SIZE*sizeof(Student));
    fread(&stu, sizeof(Student), SIZE, fp);
    p = stu;
    return p;
}

int fail_english(){
    int num = 0;
    for(int i=0;i<SIZE;i++){
        if(stu[i].english < 60){
            num++;
        }
    }
    return num;
}

int fail_math(){
    int num = 0;
    for(int i=0;i<SIZE;i++){
        if(stu[i].math < 60){
            num++;
        }
    }
    return num;
}
int fail_computer(){
    int num = 0;
    for(int i=0;i<SIZE;i++){
        if(stu[i].computer < 60){
            num++;
        }
    }
    return num;
}


void search(int num){
    int result =0;
    for(int i=0; i<SIZE;i++){
        if(stu[i].num== num){
            result++;
            printf("name:%s num:%d total:%d english%d math%d computer%d\n", stu[i].name, stu[i].num, stu[i].total, stu[i].english, stu[i].math, stu[i].computer);
        }
    }

    if(result==0){
       printf("检索的用户不存在\n"); 
    }
}

int main(){
    write_content(stu);
    Student stu[3],*p;
    p = read_content();
    for(int i=0;i<3;i++){
        printf("%d %d %d %d %d %s\n", p->total, p->english, p->math, p->computer, p->num, p->name);
        p++;
    }
    printf("按照总分排序\n");
    sort_by('T');
    
    printf("按照英语排序\n");
    sort_by('E');
    printf("按照数学排序\n");
    sort_by('M');
    printf("按照计算机排序\n");
    sort_by('C');

    printf("英语不及格人数:%d\n", fail_english());
    printf("数学不及格人数:%d\n", fail_math());
    printf("计算机不及格人数:%d\n", fail_computer());

    printf("检索的用户信息是:\n");
    search(2);
    return 0;
}
