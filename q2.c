#include <stdio.h>
void main()
{   // calculate square of a given number
    int num;
    printf("Enter any number = ");
    scanf("%d", &num);
    int square = num*num;
    printf(" %d   = %d", num, square);
}