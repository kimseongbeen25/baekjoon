
//최소, 최대//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int total[1000001]={0};
    int max = -1000000;
    int min = 1000000;

    for(int i=1; i<=n; i++)
    {
        scanf("%d", &total[i]);
        
        if(total[i]>max)
        {
            max = total[i];
        }
        if(total[i]<min)
        {
            min = total[i];
        }
    }

    printf("%d %d", min, max);

    return 0;

}