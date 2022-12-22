#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age \n",age);
    scanf("%d", &age);
    if ((age <= 70 && age >= 18) || (age == 15))
    {
        printf("you can drive");
    }
    else
    {
        printf("you cannot drive.");
    }
    return 0;
}