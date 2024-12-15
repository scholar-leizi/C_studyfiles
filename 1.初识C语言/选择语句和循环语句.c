/*
C语言中如何实现循环：
    while语句
    for语句
    do...while语句
*/
#include <stdio.h>
int main()
{
    int today = 2024;
    int birthday = 0;
    int same = 0;//初始化次数
    while (same <= 3)//循环语句以及循环条件
    {
        if (same == 3)//选择语句以及选择条件
        {
            printf("您的次数已用完，请明天再试！\n");
        }
        else
        {
            printf("请输入您的出生年份：");
            scanf("%d",&birthday);//输入出生年份并存储
            if (birthday <= 0)//判断输入的出生年份是否正确
            {
                printf("请您输入正确年份！\n");
            }
            else
            {
                if (today - birthday >= 18)//判断是否成年
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