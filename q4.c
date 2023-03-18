#include<stdio.h>
void main()
{   
    //  swap without using third variable
    int a, b;
    printf("Enter the value of  a and b \n");
    scanf("%d %d",&a,&b);

       printf("Before swapping, a = %d and  b = %d\n", a,b);
        
    a = b;
    b = a;
       printf("After  swapping, a = %d and  b = %d\n", a,b);
}
