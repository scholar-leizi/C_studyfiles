#include <stdio.h>
int main()
{
    int today = 2024;
    int birthday = 0;
    printf("请输入您的生日年份：");
    scanf("%d",&birthday);
    if (birthday<0)
    {
        printf("您输入的值错误！");
    }
    else
    {
        if(today - birthday >= 18)
        {
            printf("您已成年！可尽情享受游戏时光！");
        }
        else
        {
            printf("您未成年！游戏时间将受到限制！");
        }
    }
    return 0;
}