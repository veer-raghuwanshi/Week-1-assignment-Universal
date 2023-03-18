#include <stdio.h>

int main()
{
    float basic_salary, ta, pf, da, gs, ns;

    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);

    // Calculate Travel Allowance (TA)
    ta = 0.1 * basic_salary;

    // Calculate Provident Fund (PF)
    pf = 0.078 * basic_salary;

    // Calculate Dearness Allowance (DA)
    da = 500;

    // Calculate Gross Salary (GS)
    gs = basic_salary + ta + da;

    // Calculate Net Salary (NS)
    ns = gs - pf;

    printf("Gross Salary: %f\n", gs);
    printf("Net Salary: %f\n", ns);

    return 0;
}
