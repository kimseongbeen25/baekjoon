
//X보다 작은 수//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int a, b;
    scanf("%d %d", &a, &b);
    int input[10002]={0};

    for(int i=1; i<=a; i++)
    {
        scanf("%d", &input[i]);
    }
    for(int j=1; j<=a; j++)
    {
        if(input[j]<b)
        {
            printf("%d ", input[j]);
        }
    }

    return 0;
    
}