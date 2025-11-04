#include <stdio.h>
// หา BMI
// m/h^2
 
void main( void){
float a ; // ค่ามวล
float b ; // ค่าสูง
printf( "Enter Weight (kg) >> ");
scanf( "%f" , &a );
printf( "Enter High (cm) >> ");
scanf( "%f" , &b );
b = b/100 ;
float bmi = a/(b*b)  ; // สูตร
printf( "Weight = %.0f \nHigh = %.0f \nBMI = %.2f" ,a , b*100 ,bmi ) ;

}