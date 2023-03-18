#include<stdio.h>
void main(){
    // TEMPERATURE CONVERSION C TO F
    float C,F ;
    printf("Enter the celsius value = ");
    scanf("%f",&C);

   F = ((C*9)/5+32);
   printf(" %.2f Celcius to farenheit = %.4f",C, F);
}