#include <stdio.h>
void main()
{  // four digit number from user calculate the sum first digit and last digit
    int num, firstdigit, lastdigit, sum = 0;
    printf("Enter the four digit nnumber = ");
    scanf("%d", &num);

    lastdigit = num % 10;
    while (num >= 10)
    {
        num = num / 10;
    }
    firstdigit = num;
    sum = firstdigit + lastdigit;
    printf("First digit + last digit (%d + %d) = %d", firstdigit, lastdigit, sum);
}