#include<stdio.h>
int main()
{
int n;
\\enter a number
scanf("%d",&n);
if(n==0)
{
printf("given number is zero");
}
else if(n<0)
{
printf("given number is negative");
}
else if(n>0)
{
printf("given number is postive");
}
return 0;
}
