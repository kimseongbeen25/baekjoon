
//영수증//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
    int total = 0;
    int a, b;
    int total_amount;

    scanf("%d", &total_amount);
    scanf("%d", &n);

    for(int i=1; i<=n; i++)
    {
        scanf("%d %d", &a, &b);

        total = total+(a*b);
    }
    
    if(total_amount==total)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }

    return 0;

}