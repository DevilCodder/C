#include<stdio.h>
int main(){
int sum=0,n;
int i;
printf("enter value of n \n",n);
scanf("%d",&n);
for ( i = 1; i<11; i++)
{
   sum += n*i;
}
printf("Sum of Numbers occuring in multiplication table of n is %d",sum);

return 0;

}