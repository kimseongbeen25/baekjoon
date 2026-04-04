
// 분해합 //

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int sum = 0;
    int k;

    for(int i=1; i<=n; i++)
    {
        int j = 0;
        k = i;
        while(k > 0)
        {
            j += k % 10;
            k /= 10;
        }

        if(n==i+j)
        {
            sum = i;
            printf("%d", sum);
            break;
        }

    }
    
    if(sum==0)
    {
        printf("%d", sum);
    }   

    return 0;

}
