#include <stdio.h>

void main()
{
    // Area of Circle
    float PI = 3.14;

    float radius, Area = 0;
    printf("Enter radius of circle = ");
    scanf("%f", &radius);

    Area = PI * radius * radius;

    printf("Area of circle = %.2f", Area);
}