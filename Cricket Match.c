#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    if(n<=m*6*6)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}