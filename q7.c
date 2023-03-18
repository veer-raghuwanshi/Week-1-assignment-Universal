#include <stdio.h>
int main()
{
    // simple interest
    float p, r, t, si;
    printf("Enter the principal: ");
    scanf("%f", &p);
    printf("Enter the rate of interest = ");
    scanf("%f", &r);
    printf("Enter the time  = ");
    scanf("%f", &t);

    si = p * r * t / 100;
    printf("The Simple interest is %.2f", si);
}