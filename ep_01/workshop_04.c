#include <stdio.h>

int main(){
    char name[50];
    int age;
    double salary;
    printf("ป้อนชื่อของคุณ\n");
    scanf("%s\n",&name);
    printf("ป้อนอายุของคุณ\n");
    scanf("%d\n",&age);
    printf("ป้อนเงินเดือนของคุณ\n");
    scanf("%lf\n",&salary);
    printf("ชื่อของคุณคือ:  %s\n",name);
    printf("อายุของคุณคือ:  %d\n",age);
    printf("เงินเดือนของคุณคือ:  %lf\n",salary);


    return 0;

}