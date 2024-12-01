//转义字符：转变字符的意思（作用）
/*
 \?：
 	在书写连续多个问号时使用，防止他们被解析成三字母词
 \'：
 	用于表示字符常量'
 \"：
 	用于表示一个字符串内部的双引号
 \\：
 	用于表示一个反斜杠，防止它被解释为一个转义序列符
 \a：
 	警告字符，蜂鸣
 \b：
 	退格符
 \f：
 	进纸符
 \n：
 	换行
 \r：
 	回车
 \t：
 	水平制表位
 \v：
 	垂直制表位
 \ddd：
 	ddd表示1-3个八进制的数字 如：\130 x
 \xdd：
 	dd表示两个十六进制数字 如：\x30 0
 */
#include <stdio.h>
int main() {
    printf("abcn\n");//abcn——>完全输出
    printf("abc\n");//abc——>“\n”为转义字符，意为换行

    printf("abc0def\n");//abc0def——>完全输出
    printf("abc\0def\n");//abc——>“\0”为转义字符，为字符串结束标志

    //三字母词
    //编译器早期：??)——>]	??(——>[
    printf("%s\n","(Are you ok??)");
    //早期编译器：(Are you ok]
    printf("%s\n","(Are you ok\?\?)");
    //(Are you ok??)

    //printf("%c\n",''');//报错
    printf("%c\n",'\'');

    //printf(""");//报错
    printf("\"\n");
    //“\n”——>打行完换行

    printf("C:\test\test11_28.c\n");//C:      est     est11_28.c
    //“\t”——>水平制表位；打印不出完整路径
    printf("C:\\test\\test11_28.c\n");//C:\test\test11_28.c
    //“\\”——>打印一个反斜杠；打印出完整路径

    printf("\a");//触发电脑蜂鸣警告
    
    return 0;
}
//%d——打印整型
//%c——打印字符类型
//%s——打印字符串类型
//%f——打印float类型
//%lf——打印double类型
//%zu——打印sizeof()的返回值