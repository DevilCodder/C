#include<stdio.h>
int main(){
int n;
printf("Enter the number \n",n);
scanf("%d",&n);
int i;
for ( i = 1; i<11; i++)
{

   printf("\n %d * %d = %d",n, i,i * n);
   
}


return 0;

}