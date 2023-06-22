#include "conio.h"
#include "stdio.h"

#define PA printf("+++++++++++++++++++++++++++++++++\n");
void main(){
    //คำสั่ง switch เหมาะกับ logic ที่พิสูจน์/ตรวจสอบหลายครั้ง
    //แต่  *** เหมาะกับการพิสูจน์ตัวเลขจำนวนเต็มหรือตัวอักษรเท่านั้น
    //และเป็นการพิสูจน์ว่าเท่ากันไม่เท่ากัน

    int number;
    printf("Input Number: ");
    scanf("%d",&number);
    PA

    switch (number)
    {
    case 2: printf("A....\n");
            printf("B....\n");
        break;
    case 10: printf("C....\n");
        break;
    case 99: printf("D....\n");
        break;
    
    default:
        printf("Wow");
        printf("Woo");
        break;
    }

    printf("IoT...");

    PA


    getch();
}