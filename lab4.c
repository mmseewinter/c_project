#include <stdio.h>

void main(void){
float area;
int base ;
int high;
printf("Enter Base:");
scanf("%d", &base); 
printf("Enter High:");
scanf("%d", &high);
area = 0.5*base*high;
//printf("Base  = %d \n", base);
//printf("Hight = %d \n", hight);
//printf("Area  = %.2f \n", area);
printf("Base = %d \nHigh = %d \nArea = %3.f \n",base,high,area);



}