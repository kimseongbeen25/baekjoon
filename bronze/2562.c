
//최댓값//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int num[10];
    int max = 0;
    int a;

    for(int i=1; i<=9; i++)
    {
        scanf("%d", &num[i]);
        if(num[i]>max)
        {
            max = num[i];
            a = i;
        }
    }

    printf("%d\n", max);
    printf("%d\n", a);

    return 0;

}