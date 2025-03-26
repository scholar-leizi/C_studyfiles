int d = 40;
//static extern int d;//static修饰全局变量时，这个全局变量的外部链接属性会变成内部链接属性，其他源文件（.c）就不能在使用这个全局变量
int add(int x,int y)
{
    return x + y;
}
//static extern add(int x,int y);//static修饰函数时，这个函数的外部链接属性会变成内部链接属性，其他源文件（.c）不能再调用这个函数