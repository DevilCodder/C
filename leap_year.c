#include <stdio.h>
int main()
{
    int a;
    printf("Enter a year:\n", a);
    scanf("%d", &a);

    if ((a % 4 == 0) && (a % 100 != 0) || (a % 400 == 0))
    // if ((a% 4 == 0) && ((a % 400 == 0) || (a % 100 != 0)))
    {
        printf("The year is a leap year.");
    }
    else
    {
        printf("The year is a non leap year.");
    }

    return 0;
}