// โจทย์ข้อที่ 1 
#include <stdio.h>
#include <conio.h>
#define PA printf("+++++++++++++++++++++++++\n");
void main (){

    float widths,longs,higths,color_for_use;
    PA
    printf("     Program  Color\n");
    PA
    printf("Enter widths :");
    scanf("%f",&widths);
    printf("Enter longs :");
    scanf("%f",&longs);
    printf("Enter higths :");
    scanf("%f",&higths);
    PA
    color_for_use = widths+longs+higths;
    color_for_use = color_for_use/3;
    printf("Color for use is  :%.2fGallon",color_for_use);

    
}