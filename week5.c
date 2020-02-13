#include <stdio.h>
int main(){
    int x = 100; //การประกาศตัวแปร 1 ครั้งจะได้ ได้ตัวแปร ได้ค่าที่ถูกเก็บใน address
    // int a = 0144; //เลขฐาน 8
    // int b = 0x64; //เลขฐาน 16
    // printf("x = %d\n", x);
    // printf("reference x = %lu\n", &x); //เข้าถึง address ต้องใช้ & ข้างหน้าตัวแปร
    // printf("reference x = %p\n", &x);

    // ประกาศ array
    // int number[] = {3, 4, 5, 6, 7}; 
    // int number[100];
    // int number[100] = {3, 4, 5, 6, 7};
    // printf("index 1 = %d\n", number[1]);
    // printf("reference number[1] = %p\n", &number[1]);
    // printf("reference number[0] = %p\n", &number[0]);
    // printf("reference number = %p\n", &number ); //number กับ number[0] จะมีค่าเท่ากัน
    // printf("reference number + 1= %p\n", &number + 1); // จะได้เท่ากับ address ของ number[1] เนื่องจาก การ + - address จะเป็นการบวกตาม byte ของชนิดตัวแปรนั้น หรือไปในต่ำแหน่งถัดไปหรือก่อนหน้าใน array 
    // number[2000] = 2000;
    // printf("index 2000 = %d\n", number[2000]);
    // printf("reference number[2000] = %p\n", &number[2000]);

    // int number[] = {3, 4, 5, 6, 7}; // 00 04 08 16
    // int *ptr = &x;
    // int *arrPtr;
    // arrPtr = number; //arrPtr จะชี้ที่ number[0]
    // arrPtr += 2; //จะเปลี่่ยนไปชี้ที่ number[2]
    // *arrPtr = *arrPtr + 10; //*arrPtr เป็นค่าเข้าถึงค่าใน address arrPtr แล้วไป +10
    // printf("arrptr = %p, *arrPtr = %d\n", arrPtr, *arrPtr);
    // printf("number[2] = %d\n",number[2]);

    // เข้าถึงค่าของ array ด้วย pointer
    // int number[] = {3, 4, 5, 6, 7};
    // for (int *ptr = number; ptr <= &number[4]; ptr++)
    // { 
    //     printf("[%p] = %d\n", ptr, *ptr);
    // }
    // int *ptr2 = number;
    // for(int i = 0; i < 5; i++)
    // {
    //     printf("[%p] = %d\n",ptr2 + i, *(ptr2+i));
    // }
    char input[100];
    int count = 0;
    char c;
    while ( (c =getchar()) != '\n' )
    {
        input[count] = c;
        ++count;
    }
    input[count] = '\0'; // ต้องปิด string เอง เพื่อบอกว่าเป็นตัวสุดท้ายแล้ว
    for (char *cPtr = input; *cPtr != '\0'; cPtr++)
    {
        printf("%c\n",*cPtr);
    }
}