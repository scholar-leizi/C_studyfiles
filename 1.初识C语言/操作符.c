/*
算术操作符：
	+：加法运算
    -：减法运算
    *：乘法运算
    /：除法运算
    %：取模运算（取余运算）
移位操作符：
	>>：
    <<：
位操作符：
	&
    ^
    |
赋值操作符：
	=
    +=
    -=
    *=
    /=
    &=
    |=
    ^=
    >>=
    <<=
单目操作符：只有一个操作数的操作符
    !：逻辑反操作
    -：取负值
    +：取正值
    &：取地址
    sizeof：操作数的类型长度（以字节为单位）
    ~：对一个数的二进制按位取反
    --：前置，后置--
    ++：前置，后置++
    *：间接访问操作符（解引用操作符）
    (类型)：强制类型转换
关系操作符：
    >:
*/
#include <stdio.h>
int main()
{
    int a = 7/2;
    printf("%d\n",a);
    //“/”除法取商
    /*
    “/”号的两端都是整数时，执行整数除法运算；“/”号的任意一端是浮点数时，执行浮
    点数除法运算
    */

    int b = 7%2;
    printf("%d\n",b);
    //“%”除法取模（取余运算）

    float c = 7/2.0;
    printf("%.1f\n",c);//“%.1f”——打印浮点数类型数据，保留一位小数

    int flag =0;
    //C语言中规定：0为假，非0为真
    if (!flag)
    {
        printf("Hello World!\n");
    }

    int d = -5;
    printf("%d\n",-d);//负负得正
    printf("%d\n",+d);

    printf("%d\n",sizeof(int));
    //printf("%d\n",sizeof int);//sizeof虽然是操作符，但是查询类型是必须加括号
    printf("%d\n",sizeof a);//查询变量时可以不加括号
    int arr[10] = {0};
    printf("%d\n",sizeof(arr));//计算的是整个数组的大小，单位是字节
    printf("%d\n",sizeof(arr[0]));
    printf("%d\n",sizeof(arr)/sizeof(arr[0]));//可求数组的元素个数

    int e = 10;
    int f = e++;//后置++——先使用，后++
        //int f = e;
        //e = e+1;
        //分两步给两个变量赋新值
    printf("%d\n",e);//11
    printf("%d\n",f);//10

    int g = 10;
    int k = ++g;//前置++——先++，后使用
        //g = g++;
        //int k = g;
    printf("%d\n",g);//11
    printf("%d\n",k);//11
    //“--”同理

    //int l = 3.14;//Implicit conversion from 'double' to 'int' changes value from 3.14 to 3
    //printf("%d\n",l);
    int l =(int)3.14;//强制转换数据类型：double——int
    printf("%d\n",l);
    return 0;
}