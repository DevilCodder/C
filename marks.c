#include <stdio.h>
int main()
{
    int a;
    printf("Enter the marks obtained: %d \n", a);
    scanf("%d", &a);
    if (a >= 80 && a <= 100)
    {
        printf("the grade is A");
    }else 
    if (a >= 60 && a < 80)
    {
        printf("The grade is B");
    }else
    if (a >= 40 && a < 60)
    {
        printf("The garde is C");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}