
//알람 시계//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int hour, minute;
    scanf("%d %d", &hour, &minute);
    
    if(minute>=45)
    {
        printf("%d %d", hour, minute-45);
    }
    else
    {
        if(hour==0)
        {
            printf("%d %d", 23, minute+15);
        }
        else
        {
             printf("%d %d", hour-1, minute+15);
        }
    }

    return 0;
    
}