/*
算术操作符：
    +：加法运算
    -：减法运算
    *：乘法运算
    /：除法运算
    %：取模运算（取余运算）
移位操作符：
    >>
    <<
位操作符：
    &
    ^
    |
赋值操作符：
    =：等于
    +=：加等于
    -=：减等于
    *=：乘等于
    /=：除等于
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
    >：大于
    >=：大于等于
    <：小于
    <=：小于等于
    !=：不等于
    ==：等于
逻辑操作符：
    &&：逻辑与
    ||：逻辑或
条件操作符：
    exp1 ？ exp2 : exp3
        exp1为真时，整个表达式的结果为exp2
        exp1为假时，整个表达式的结果为exp3
逗号表达式：
    exp1,exp2,exp3,...expN
下标引用、函数调用和结构成员：
    []：访问数组元素时必须用到下标
    ()：函数调用时跟在函数名后用来传参
    .
    ->
*/
#include <stdio.h>
int main()
{
    int a = 7/2;
    printf("%d\n",a);
    //“/”除法取商
    /*
    “/”号的两端都是整数时，执行整数除法运算；“/”号的任意一端是浮点数时，执行浮点数除法运算
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

    int m = 5;//非0为真
    int n = 6;//非0为真
    if (m && n)//两个数的结果都是真才成立
    //并且——两个结果都为正确时才成立
    {
        printf("这是并且的结果！\n");
    }

    int o = 10;//非0为真
    int p = 0;//0为假
    if (o || p)//任意一个数结果是真就能成立
    //或者——一个结果为真就能成立
    {
        printf("这是或者的结果！\n");
    }

    int q = 100;
    int r = 20;
    int rather = (q>r ? q : r);//一真输二，一假输三
    printf("%d\n",rather);

    int s = 10;
    int u = 5;
    int v =0;
    int w = (u=s+v*3,s=u+21-s,v=u+s);
    //逗号表达式的特点是：从左向右依次计算，整个表达式的结果是左后一个表达式的结果
    printf("%d\n",w);
    return 0;
}