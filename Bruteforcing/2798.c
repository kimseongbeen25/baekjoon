
//블랙잭//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main()
{
    int n, goal;
    scanf("%d %d", &n, &goal);
    int sum = 0;
    int max = 0;
    int input[101] = {0};

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &input[i]);
    }
    for(int i=1; i<=n-2; i++)
    {
        for(int j=i+1; j<=n-1; j++)
        {
            for(int k=j+1; k<=n; k++)
            {
                sum = input[i]+input[j]+input[k];

                if(sum<=goal&&max<=sum)
                {
                    max = sum;
                }
            }
        }
    }

    printf("%d", max);

    return 0;

}
