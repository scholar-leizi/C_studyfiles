#include <stdio.h>
int main()
{
    int today = 2024;
    int birthday = 0;
    int same = 0;
    while (same <= 3)
    {
        if (same == 3)
        {
            printf("您的次数已用完，请明天再试！\n");
        }
        else
        {
            printf("请输入您的出生年份：");
            scanf("%d",&birthday);
            if (birthday <= 0)
            {
                printf("请您输入正确年份！\n");
            }
            else
            {
                if (today - birthday >= 18)
                {
                    printf("您已成年，请尽情享受游戏时光！\n");
                }
                else
                {
                    printf("您未成年，将限制您的游戏时间！\n");
                }
                same+=3;
            }
        }
        same++;
    }
    return 0;
}