#include<stdio.h>
void main()
{   
    // swap using third variable
    int a, b,c;
    printf("Enter the value of  a and b \n");
    scanf("%d %d",&a,&b);

       printf("Before swapping, a = %d and  b = %d\n", a,b);
    c  = a;    
    a = b;
    b = c;
       printf("After  swapping, a = %d and  b = %d\n", a,b);
}
