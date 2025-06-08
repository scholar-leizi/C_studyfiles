//C语言是结构化语言：顺序结构 选择结构 循环结构
/*
if语句：
    单分支语句：
        if(判断条件)
        {
            条件成立时的执行体;
        }
    双分支语句：
        if(判断条件)
        {
            条件成立时的执行体;
        }
        else
        {
            条件不成立时的执行体;
        }
    多分支语句：
        if(表达式1)
        {
            语句1;
        }
        else if(表达式2)
        {
            语句2;
        }
        else
        {
            语句3;
        }
*/
#include <stdio.h>
int main()
{
    int age = 0;
    scanf("%d",&age);
    if(age>=0 && age<18)
    {
        printf("你是未成年！");
    }
    else if(age>=18 && age<=25)
    {
        printf("你是青年！");
    }
    else
    {
        printf("你是中年！");
    }
    return 0;
}