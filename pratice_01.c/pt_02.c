// โจทย์ข้อที่ 2 
// 2. จงเขียนโปรแกรมภาษาซี คำนวณหาราคาขายสินค้า โดยรับชื่อสินค้า และราคาสินค้า(ต้นทุน) ทางแป้นพิมพ์ แล้วคำนวณหาราคาขายของสินค้า โดยราคาขายสินค้าจะคิดเพิ่มจากราคาสินค้า (ต้นทุน) ร้อยละ 10
// สูตร ราคาขายสินค้า  =  ราคาสินค้า(ต้นทุน)  - (ราคาสินค้า(ต้นทุน) * 10 / 100)

// ============================
//                Program  Product  Shop
// ============================
// Enter product name : <input>
// Enter price begin  : <input>
// ============================
// Price for sale is   : <output>   Bath
// ============================
#include "conio.h"
#include "stdio.h"
#define PA printf("===========================");
void main (){
    char product_name;
    float sell_price ,price_begin;
    PA
    printf("Input Product Name: ");
    scanf("%s",&product_name);
    printf("Input Price Begin: ");
    scanf("%f",&price_begin);
    sell_price = price_begin - price_begin * 10 /100;
    PA
    printf("Sell Price Is: %.2f ",sell_price);
    PA


    getch();
}