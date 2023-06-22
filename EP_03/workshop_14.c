#include "stdio.h"
#include "conio.h"

void main(){
    int level;
    printf("Input Year: ");
    scanf("%d",&level);
    
    switch (level)
    {
    case 1:
        printf("Welcome Freshy");
        break;
    case 2:
        printf("Welcome Sophomore");
        break;
    case 3:
        printf("Welcome Junior");
        break;
    case 4:
        printf("Welcome Senior");
        break;
    
    default:
        printf("Oh no");
        break;
    }
    
}