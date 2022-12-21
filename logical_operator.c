#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age \n");
    scanf("%d", age);

    if (age < 70 )
    {
        printf("you can drive");
    }
    else
    {
        printf("you cannot drive");
    }

    return 0;
}