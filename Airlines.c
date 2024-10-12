#include<stdio.h>
int main()
{
int x,y,z;
scanf("%d %d %d",&x,&y,&z);
if(10*x>=y)
printf("%d",y*z);
else
printf("%d",(10*x)*z);
}