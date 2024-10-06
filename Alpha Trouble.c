#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    if(c>='A'&&c<='Z')
    printf("%d",c-64);
    else
    printf("%d",c-96);
}