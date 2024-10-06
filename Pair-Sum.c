#include<stdio.h>
int main()
{
    int a,b,n;
    scanf("%d",&n);
    a=n%100;
    b=n/10;
    printf("%d",a+b);
}
