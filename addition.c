#include <stdio.h>
int main()
{
    float a, b, sum;
    printf("enter the first no. you want to add:\n", a);
    scanf("%f", &a);
    printf("enter the second no.:\n", b);
    scanf("%f", &b);
    sum = a + b;
    printf("required sum is:%.2f \n", sum);
    return 0;
}