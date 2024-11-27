/*
 char——字符数据类型
 short——短整型
 int——整型
 long——长整型
 long long——更长的整型
 float——单精度浮点型
 double——双精度浮点型
 合理的运用各种类型可以节省变量创建所用的空间
 类型是用来创建变量并申请空间的
 */
#include <stdio.h>
int main(){
    //用sizeof()函数来查询空间大小
    printf("%d\n",sizeof(char));//1
    printf("%d\n",sizeof(short));//2
    printf("%d\n",sizeof(int));//4
    printf("%d\n",sizeof(long));//4
    //C语言规定sizeof(long)>=sizeof(int)——4
    printf("%d\n",sizeof(long long));//8
    printf("%d\n",sizeof(float));//4
    printf("%d\n",sizeof(double));//8
    //查询个类型在内存中所占空间的大小
    int age = 20;
    printf("%d\n",age);
    return 0;
}
//查询出的单位为“字节”，一个字节有8个比特位，比特位为计算机最小的单位