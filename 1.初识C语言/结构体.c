//结构体是C语言中特别重要的知识点,结构体使得C语言有能力描述复杂类型
//结构体是把一些单一类型组合到一起的做法

//比如描述学生，学生包含：“名字+年龄+性别+学号”
#include <stdio.h>
struct Stu//定义学生类型
{
    //成员变量
    char name[20];
    int age;
    char sex[10];
    char tele[12];
};
void print(struct Stu* ps)//自定义函数
{
    printf("%s %d %s %s\n",(*ps).name,(*ps).age,(*ps).sex,(*ps).tele);//用指针变量打印结构体对象的成员变量
    printf("%s %d %s %s\n",ps->name,ps->age,ps->sex,ps->tele);//打印“ps”指向对象的成员变量
    //“->”——结构体的指针变量
}
int main()
{
    struct Stu zhanglei = {"zhanglei",20,"nan","18299567452"};//跟Python中的类相似
    //创建变量并初始化

    //结构体对象名.成员名
    printf("%s %d %s %s\n",zhanglei.name,zhanglei.age,zhanglei.sex,zhanglei.tele);
    //访问结构体中的数据时要使用“点”操作符

    print(&zhanglei);//取结构体对象变量的地址并传给函数
    return 0;
}
//define不是关键字，是预处理指令