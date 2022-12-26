#include<stdio.h>
int main(){
int phy, chem, math, sum;
float avg;
printf("Enter your marks in Physics\n",phy);
scanf("%d",&phy);
if (phy<=33)
{
    printf("you are fail in Phyics\n");
}

printf("Enter your marks in Chemistry\n",chem);
scanf("%d",&chem);
if (chem<=33)
{
    printf("you are fail in Chemistry\n");
}
printf("Enter your marks in Mathematics\n",math);
scanf("%d",&math);
if (math<=33)
{
    printf("you are fail in Mathematics\n");
}
sum = phy + chem + math;
avg = sum/3;
printf("Your Total Marks:%d\n",sum);
if (avg>120)
{
    printf("Overall, You are Fail");
}
else{
    printf("You are Pass");
}

return 0;

}