
//주사위 3개//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b, c, max;
    scanf("%d %d %d", &a, &b, &c);

    if(a==b && a==c)
    {
        printf("%d", 10000+1000*a);
    }
    else if(a==b||a==c)
    {
        printf("%d", 1000+100*a);
    }
    else if(b==c||a==b)
    {
        printf("%d", 1000+100*b);
    }
    else
    {
        max = (a>b?a:b)>c?(a>b?a:b):c;
        printf("%d", 100*max);
    }

    return 0;

}