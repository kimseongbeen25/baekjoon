
//오븐 시계//

#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(void)
{
    int hour, minute, time;
    scanf("%d %d", &hour, &minute);
    scanf("%d", &time);

    hour = hour+(minute+time)/60;
    minute = (minute+time)%60;

    if(hour>=24)
    {
        hour = hour%24;
        printf("%d %d", hour, minute);
    }
    else
    {
        printf("%d %d", hour, minute);
    }

    return 0;

}