#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    c=100-a;
    d=200-(2*b);
    if(c<d)
    printf("FIRST");
    else if(d<c)
    printf("SECOND");
    else
    printf("BOTH");
}