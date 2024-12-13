//求两个任意整数的和
#include <stdio.h>
int Add(int x,int y)
//“int”——>函数的返回类型
//用户自定义函数——>用户自己编写的解决问题的方法
//“x”和“y”——>函数的形式参数
{
    int z = 0;
    z = x+y;
    return z;
    //函数体
}

int main()
//主函数——>程序执行的入口
{
    int a = 0;
    int b = 0;
    printf("请输入两个整数：");
    scanf("%d %d",&a,&b);
    int c = Add(a,b);
    printf("两个整数的和为：%d\n",c);
    return 0;
}