#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if((a>='A'&&a<='Z')||(a>='a'&&a<='z'))
    printf("Alphabet");
    else if(a>='0'&&a<='9')
    printf("Digit");
    else if(a==' ')
    printf("Space");
    else
    printf("Special Character");

}