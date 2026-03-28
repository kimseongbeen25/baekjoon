
//개수 세기//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);

    int a[100]= {0};
    for(int i=1; i<=n; i++)
    {
        scanf("%d", &a[i]);
    }

    int number;
    int count = 0;
    scanf("%d", &number);

    for(int i=1; i<=n; i++)
    {
        if(number==a[i])
        {
            count+=1;
        }
    }

    printf("%d", count);

    return 0;

}