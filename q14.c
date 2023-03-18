#include <stdio.h>
#include <math.h>

void main()
{
    // area of triangle = (base*height)/2
    // area of square =  side^2
    // area of circle = 3.141*radius*radius
    // area of reactagle = length*width

    float a, radius, Area, length, width, base, height;

    int choice;

    printf("Press 1 for Area Of Square");
    printf("\nPress 2 for Area Of Circle ");
    printf("\nPress 3 for Area Of Rectangle");
    printf("\nPress 4 for Area of a Triangle\n");
    printf("\nEnter Your Choice :");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        printf("\nEnter the Side Of Square: ");
        scanf("%f", &a);
        Area = a * a;
        printf("\nArea of Square = %.3f\n", Area);
        break;

    case 2:
        printf("\nEnter the Radius of Circle: ");
        scanf("%f", &radius);
        Area = 3.14159 * radius * radius;
        printf("\n Area Of Circle = %.3f", Area);
        break;

    case 3:
        printf("\nEnter the Length and Width of Rectangle: ");
        scanf("%f %f", &length, &width);
        Area = length * width;
        printf("\nArea Of Rectangle  = %.3f", Area);
        break;
    case 4:
        printf("\nEnter Base and Height of Triangle: ");
        scanf("%f %f", &base, &height);
        Area = (base * height) / 2;
        printf("\nArea of Triangle = %.3f", Area);
        break;

    default:
        printf("\n Invalid Choice!!! Choose Between 1 to 3");
        break;
    }
}