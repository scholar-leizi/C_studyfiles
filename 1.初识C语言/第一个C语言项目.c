/*
1.打开编译软件
2.创建项目
3.创建源文件
    .c——>源文件
    .h——>头文件
    注意源文件后缀
        .cpp——>编译器会用C++的语法编译代码
        .c——>编译器会用C的语法编译代码
4.写代码
*/
#include <stdio.h>//头文件引用——为调用库函数打“招呼”
//std——标准
//i——input
//o——output
//标准的输入输出库

//标准的主函数写法
int main()
{
    //int——整型类型
    //main函数是程序执行的入口——必须有且只能有一个
    printf("hello world!\n");
    //printf是一个库函数，专门用来打印数据
	return 0;//返回0，与主函数类型对应
}
//C语言中一定要有main函数（主函数）