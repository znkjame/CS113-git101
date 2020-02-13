//Types, Operators, and Expressions (standart input output loop if-else)
#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[5];
int main(){
    // printf("Enter name : ");
    // gets(name); //รับ stirng name ไปเรื่อยๆ จนกว่าจะขึ้นบรรทัดใหม่ /n
    // fgets(name , 20 , stdin); //รับstring เข้า name จำนวน n ตัว จาก stdin ใช้รับจาก input จากที่อื่นได้
    // getchar(chr); //รับ char 1 ตัวลงในตัวแปร
    //fgets(number,5,stdin);
    //int i = atoi(number); 
    //printf("%s",name);
    //printf("number = %s , i = %d",number , i); 
    // fgets(number,5,stdin);
    // int i = atoi(number); //แปลงค่าจาก array ไปเป็น int
    // puts(number);//แสดง string
    // putchar(100); // แสดง char
    // putchar('u');
    
    //เนื่องจาก C ไม่มี boolen จะใช้ค่าที่แทนเป็น False เมื่อ 
    // int found = 0;
    // float isExist = 0.0;
    // char isOnline = '\0'; 

    // fgets(number, 5, stdin);
    // int i = atoi(number);
    // if(i > 0 && i <= 10)
    // {
    //     printf("if = %d\n" , i > 0 && i <= 10 );
    // }
    //else if (i <= 20 || !found)
    //{
    //     printf("else if\n");
    // }
    //else
    //{
    //     printf("else\n");
    //}

    fgets(number, 5, stdin);
    int i = atoi(number);
    // int count = 0;
    // while (count < i )
    //{
    //    count++; //หรือ count++ กับ ++count ได้ค่าเท่ากันแต่ ++count จะเร็วกว่า
    //    printf("count = %d\n", count);
    //}
    for (int j = 0; j < i; j++)
    {
        printf("j = %d\n", j);
    }
}