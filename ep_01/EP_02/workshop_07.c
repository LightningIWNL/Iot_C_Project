#include "conio.h"
#include <stdio.h>

#define PA printf("++++++++++++++++++++++++++++++++++++++++++++\n");

void main(){
    float widths, longs, area_square, bases,highs, are_triangle;
    PA
    printf("Program Area Shapes\n");
    PA
    printf("Input Width : ");
    scanf("%f",&widths);
    printf("Input Longs : ");
    scanf("%f",&longs);
    printf("--------------------------------------------------\n");
    area_square = widths = longs;
    printf("Input Bases :");
    scanf("%f",&bases);
    printf("Input Highs");
    scanf("%f",&highs);
    printf("--------------------------------------------------\n");
    are_triangle = bases = highs / 2;
    printf("Triangle Area : %.2f\n", are_triangle);
    PA



    getch();

    
}