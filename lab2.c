#include <stdio.h>

int main(void){
    int age=15;
    char name[50]="Kanyapak Katapinihran";
    char gender = 'M';
    float gpa=3.59;

    printf("My name %s \n", name); //แสดงข้อความ string
    printf("I'm %d \n", age);   // เลขจำนวนเต็ม %d Decimal
    printf("Grade %f \n", gpa); //เลขทศนิยม %f float,
    printf("Grade %c \n", gender);  // %c = char
    return 0;

}
