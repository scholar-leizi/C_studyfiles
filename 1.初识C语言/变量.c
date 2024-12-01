/*
 C语言中常量和变量的定义形式有所不同
 C语言的常量分为以下几种：
 	字面常量
     const的常变量
     #define修饰的标识符常量
     枚举常量
 */
#include <stdio.h>
//int a = 10;//创建变量整型a
const int a = 10;

#define MAX 100//定义MAX的值为100——>定义的是符号，并不是常量

enum Color
{
//enum——>枚举的关键词
    //三原色枚举
    RED,
    GREEN,
    BLUE,
};//枚举常量——>把常量一一列举出来
enum Sex
{
    //性别枚举
    MALE,
    FEMALE,
    SECRET,
};

int main() {
    30;
    3.14;
    'w';//C语言中字符语言使用单引号
    "abc";//字符串常量
    //字面常量——直观，能用肉眼直接看出的常量

    //a = 20;//修改变量a的值
    //a被const修饰之后不能被更改
    printf("a=%d\n",a);//20——>10

    const int n = 10;
    //int arr[n] = {0};//元组语言常量
    //被const修饰的a，本质是变量，但是不能被直接修改，有常量的属性

    printf("%d\n",MAX);
    int b = MAX;
    printf("b=%d\n",b);
    //MAX可以直接使用，也可以给变量赋值使用

    enum Color c = RED;//向内存申请空间，创建变量c来存储枚举常量
    //GREEN = 10;//枚举常量不能改变值
    return 0;
}