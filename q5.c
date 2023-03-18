#include <stdio.h>
void main()
{ // Area of triangle
  int height, base;
  float Area = 0;
  printf("Enter the value of height and base ");
  scanf("%d %d", &height, &base);
  printf("height = %d , base = %d\n", height, base);
  Area = (base * height) / 2;
  printf("Area of Triangle (height x base)/2 = %.2f", Area);
}