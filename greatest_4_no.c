#include <stdio.h>
int main()
{
    int a, b, c, d;

    printf("Enter Your Number \n", a, b, c, d);
    scanf("%d%d%d%d", &a, &b, &c, &d);

    if (a > b && a > c && a > d)
    {
        printf("The Greatest Number is: %d", a);
    }
    else if (b > a && b > c && b > d)
    {
        printf("The Greatest Number is: %d", b);
    }
    else if (c > b && c > a && c > d)
    {
        printf("The Greatest Number is: %d", c);
    }
    else if (d > b && d > c && d > a)
    {
        printf("The Greatest Number is: %d", d);
    }

    return 0;
}