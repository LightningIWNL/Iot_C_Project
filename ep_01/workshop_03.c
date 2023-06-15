#include <stdio.h>

void main(){
    int midterm_Score = 50;
    int final_Score;
    int total_Score;
    double gpa = 3.99;


    final_Score =20;
    total_Score = midterm_Score + final_Score;

    printf("Midterm Score is : %d\n", midterm_Score);
    printf("Final Score is : %d\n", final_Score);
    printf("Total Score is : %d\n", total_Score);
    printf("My GPA  is : %.lf\n", gpa);
    printf("My GPA  is : %.2lf\n", gpa);
    printf("My GPA  is : %.4lf\n", gpa);

    printf("%d + %d = %d ได้เกรด %.2lf\n",midterm_Score,final_Score,total_Score,gpa);

}