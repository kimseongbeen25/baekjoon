
//빠른 A+B//

//파이썬, c++, java언어 공부할 때 의미가 있는 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

    int n;
    int a, b;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) 
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a+b);
    }

    return 0;

}