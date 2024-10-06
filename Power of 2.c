#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n!=1&&(n&(n-1)))
    printf("No");
    else
    printf("Yes");
}