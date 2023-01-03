#include<stdio.h>
int main(){
int i = 0,n,sum = 0;
printf("enter value of n \n",n);
scanf("%d",&n);
for ( i = 0; i <= n; i++)
{
 sum += i;
}
// while (i<=n)
// {
//     sum += i;
//     i++;
// }

printf("Sum of first n natural number is %d",sum);

return 0;

}