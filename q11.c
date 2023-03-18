#include <stdio.h>
void main()
{ // three digit from user and check pallindrome or not
    int a, b, c, x;
    printf("Enter the three digit number = ");
    scanf("%d", &a);
    x = a % 10;
    a = a / 10;
    b = a % 10;
    c = a / 10;
    if (x == c)
    {
        printf("It is Pallindrome");
    }
    else
    {
        printf("It is not  pallindrome");
    }
}