
//곱셈//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    int hundred, ten, one;
    scanf("%d %d", &a ,&b);

    hundred = b/100;
    ten = (b-100*hundred)/10;
    one = b-100*hundred-10*ten;

    printf("%d\n", a*one);
    printf("%d\n", a*ten);
    printf("%d\n", a*hundred);
    printf("%d\n", a*b);

    return 0;

}