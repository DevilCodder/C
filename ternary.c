#include<stdio.h>
int main(){
int a;
printf("enter a \n",a);
scanf("%d",&a);
((a <= 70 && a>= 18) || (a == 15)) ? printf("You can drive") : printf("you cannot drive");

return 0;

}