#include <stdio.h>
int main()
{
    float a, b, sum;
    printf("enter the first no. you want to add: %f \n", a);
    scanf("%f", &a);
    printf("enter the second no.: %f \n", b);
    scanf("%f", &b);
    sum = a + b;
    printf("required sum is:%f \n", sum);
    return 0;
}