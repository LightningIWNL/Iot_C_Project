// โจทย์ข้อที่ 1
#include "stdio.h"
#include "conio.h"

#define PA printf("======================================================\n");
void main (){
    float widths,longs,hights,gallon;
    PA
    printf("Input Width:");
    scanf("%f", &widths);
    printf("Input Long:");
    scanf("%f", &longs);
    printf("Input Hight:");
    scanf("%f", &hights);
    gallon = widths=longs=hights/3;
    printf("Color for use is:%.2f\n",gallon);
    PA
    getch();
}