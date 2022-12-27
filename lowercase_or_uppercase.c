#include<stdio.h>
int main(){
// 65-90(A-Z)
// 97-122(a-z)
char ch;
printf("Enter the character \n",ch);
scanf("%c",&ch);
if (ch<=122 && ch>=97)
{
    printf("It is a Lowercase");
}
else if (ch<=90 && ch>=65)
{
   printf("It is a Uppercase");
}




return 0;

}