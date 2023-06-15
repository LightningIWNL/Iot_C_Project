// โจทย์ข้อที 3
// 3. จงเขียนโปรแกรมภาษาซี คำนวนหาเงินเดือนสุทธิของพนักงาน แล้วแสดงผลทางหน้าจอ โดยรับค่ารหัสพนักงาน ชื่อพนักงาน และเงินเดือนปกติของพนักงานทางแป้นพิมพ์ ทั้งนี้เงินเดือนสุทธิของพนักงานนั้นจะต้องหักค่าภาษี และเบี้ยประกันสังคมออกจากเงินเดือนปกติเสียก่อน โดยที่พนักงานต้องเสียภาษี 7% ของเงินเดือนปกติ และจ่ายค่าเบี้ยประกันสังคม 500 บาท
// สูตร เงินเดือนสุทธิ  =  เงินเดือนปกติ  - (เงินเดือนปกติ * 7 / 100) - 500

// ============================
//             Program  Salary  Employee
// ============================
// Enter employee id : <input>
// Enter employee name : <input>
// Enter employee salary : <input>
// ============================
// Salary total is : <output>  Bath
// ============================
#include "conio.h"
#include "stdio.h"
#define PA printf("===========================");
void main (){
    int employee_id;
    char employee_name[100];
    float employee_salary,salary_total;
    printf("Program  Salary  Employee\n\n");
    PA
    printf("Input ID: ");
    scanf("%d",&employee_id);
    printf("Input Name: ");
    scanf("%s",&employee_name);
    printf("Input Salary: ");
    scanf("%f",&employee_salary);
    PA
    salary_total = employee_salary - employee_salary * 7 / 100 -500;

    printf("Salary Total is:%.2f Baht",salary_total);
    PA
    getch();
}