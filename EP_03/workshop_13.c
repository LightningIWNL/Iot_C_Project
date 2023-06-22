#include "stdio.h"
#include "conio.h"

void main(){
    int level;
    printf("Input Level: ");
    scanf("%d",&level);
    
    if (level ==1)
    {
        /* code */
        printf("Welcome Freshy");
    }else if (level == 2)
    {
        /* code */
        printf("Sophomore");
    }else if (level == 3)
    {
        /* code */
        printf("Junior");
    }else if (level == 4)
    {
        /* code */
        printf("Senior");
    }else{
        printf("Oh no");
    };
    
}