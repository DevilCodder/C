#include <stdio.h>
int main()
{
    int mark;
   printf("Enter YOur Marks\n", mark);
    scanf("%d", &mark);
    if (mark>100)
    {
        printf("Don't be oversmart Enter Your mraks");
    }
    else
    
    switch (mark/10)
    {
    case 10:
    case 9:
        printf("Your Grade is 'A'");
        break;
    case 8:
        printf("Your Grade is 'B'");
        break;
    case 7:
        printf("Your Grade is 'C'");
        break;
           case 6:
        printf("Your Grade is 'D'");
        break;
           case 5:
        printf("Your Grade is 'E'");
        break;
    default:
        printf("You are Fail");
        break;
    }

    return 0;
}