#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d %d %d",&x,&y,&z);
    if(x<y&&x<z)
    printf("ALICE");
    else if(x>y&&z>y)
    printf("BOB");
    else
    printf("CHARLIE");
}