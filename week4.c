#include<stdio.h>
int addTen(int x) //ประกาศฟังก์ชั่น บอกว่าฟังก์ชันจะ return type ไหน แล้วต้องส่ง parameter ที่เป็น type เข้าไป
{
    x += 10;
    return x;
}

int addTwenty(); //Function Prototypes ประกาศว่าจะมีฟังก์ชั่นนี้
int x = 1000; //ตัวแปร global ถ้าไม่ได้กำหมดค่าจะมีค่า = 0 ถ้าเป็นตัวแปร local จะเป็นค่าเดิมใน memory ซึ่งเป็นค่าอะไรก็ไม่รู้

int main()
{
    int x = 50; 
    int y = addTen(x);
    printf("x in main = %d\n", x);
    printf("addTen in main = %d\n", y);
    printf("addTwenty in main = %d\n",addTwenty()); 
}

int addTwenty() 
{
    printf("x in addTwenty = %d\n",x);
    x += 20;
    return x;
}