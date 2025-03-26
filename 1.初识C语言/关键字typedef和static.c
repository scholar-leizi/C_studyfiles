//typedef——类型定义，理解为类型重命名
/*
在C语言中，static是用来修饰变量和函数的：
    1.修饰局部变量——称为静态局部变量
    2.修饰全局变量——称为静态全局变量
    3.修饰函数——称为静态函数
*/
#include <stdio.h>
typedef unsigned int uint;//数据类型一样，名称从“unsigned”改为“uint”
void test()
{
    //int a = 0;//a没有被保留，出函数后直接被销毁，每次调用函数都会被重新创建
    static int a = 0;//a被保留，出函数后没有被销毁，每次调用会延续上次保留的值
    //static修饰局部变量时，即使局部变量出了作用域，仍然被保留不销毁；static修饰局部变量时改变了局部变量的存储位置（栈区——>静态区）
    a++;
    printf("%d\n",a);
}

extern int d;//声明调用工程内的全局变量（本源文件外的全局变量）

extern int add(int x,int y);//声明调用源文件外部函数（本工程内）
//函数也具有外部链接属性

int main()
{
    unsigned int num1 = 0;//“unsigned int”字母太多，编写不方便，重命名为uint
    //无符号整数num1
    uint num2 = 1;//与“unsigned int num1 = 0;”的数据类型一样

    printf("%d\n",d);

    int i = 0;
    while(i<10)
    {
        test();
        i++;
    }

    printf("%d\n",add(10,20));
    register int num = 3;//建议计算机把变量num储存到寄存器
    return 0;
}