#include "stdio.h"
#include "conio.h"
#define paLine printf("+++++++++++++++++++++++++++++\n");
void main(){
    char car_number[20];
    int carWeight;
    printf("Input Number: ");
    scanf("%s",&car_number);
    printf("Input Weight: ");
    scanf("%d",&carWeight);
    paLine
    printf("Truck Program\n");
    paLine
    if (carWeight <= 2500)
    {
        printf("Pass.....-_-\n");
    }else{
        printf("Not Pass.....^_^\n");
    };
    paLine

    getch;
}