
//나머지

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    long long int a, b, c;
    scanf("%lld %lld %lld", &a, &b, &c);

    printf("%lld\n", (a+b)%c);
    printf("%lld\n", ((a%c)+(b%c))%c);
    printf("%lld\n", (a*b)%c);
    printf("%lld\n", ((a%c)*(b%c)%c));

    return 0;

}