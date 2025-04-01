#include <stdio.h>
//define定义标识符常量
#define NUM 100

//define定义宏，宏是有参数的（参数是无类型的）
#define ADD(x,y) ((x)+(y))//“ADD”为宏名，“x”和“y”为宏的参数，“((x)+(y))”为宏体——函数体
int main()
{
    printf("%d\n",NUM);
    int n = NUM;
    printf("%d\n",n);

    int a = 10;
    int b = 20;
    int c = ADD(a,b);
    //int c = ((a)+(b));
    printf("%d\n",c);
    return 0;
}