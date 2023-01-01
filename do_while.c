#include<stdio.h>
int main(){
int a = 0;
do
{
    printf("The first 10 natural nubers are: %d \n",++a);
    if (a==8)
    {
        break;
    }
    
} while (a < 10);


return 0;

}