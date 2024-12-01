/*
 "helloworld!\n"
 这种由双引号引起来的一串字符被称为字符串字面值，或者简称字符串
 注：字符串的结束标志是一个\0的转义字符，在计算字符串长度时，\0是结束标志，不
 算做字符串内容。
 */
#include <stdio.h>
#include <string.h>
int main() {
    'w';//单引号引起来的叫字符
    "wasd";//双引号引起来的叫字符串
    //C语言中没有字符串类型

    char arr1[] = "abcdef";//用监视器查看数组，最后一位是“\0”
    char arr2[] = {'a','b','c','d','e','f'};//用监视器查看没有“\0”
    char arr3[] = {'a','b','c','d','e','f','\0'};
    //字符串的存放可以使用数组来存储

    printf("%s\n",arr1);//abcdef
    printf("%s\n",arr2);//有乱码——>没有字符串结束标志“\0”
    printf("%s\n",arr3);//跟arr2相比，有“\0”字符串结束标志——>没有乱码

    int len = strlen(arr1);//求字符串长度——>包含头文件<string.h>
    printf("%d\n",len);
    printf("%d\n",strlen(arr2));//数字随机，找到字符串结束标志“\0”结束
    return 0;
}