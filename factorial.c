#include<stdio.h>
int main(){
int fact=1,n,i;
printf("Enter value of n \n",n);
scanf("%d",&n);
for ( i = 1; i <= n; i++)
{
   fact *= i; 
}
printf("Factorial of given number is %d",fact);

return 0;

}