#include <stdio.h>
int main()
{
    float income;
    float tax = 0;
    printf("What is your Annual Income\n", income);
    scanf("%f", &income);
    if (income <= 250000 && income >= 500000)
        ;
    {
        tax = tax + 0.05 * (income - 250000);
    }

    if (income <= 500000 && income >= 1000000);
    
    {
        tax = tax + 0.20 * (income - 250000);
    }
    if (income >= 1000000)
        ;
    {
        tax = tax + 0.30 * (income - 250000);
    }
    printf("You have to pay a tax amount of:%f", tax);

    return 0;
}