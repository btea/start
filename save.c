#include <stdio.h>

void fun(void);

static int count = 10;

void main()
{
    while (count--)
    {
        fun();
    }
}
// int thingy = 5;
void fun(void)
{
    /**
     * c语言函数内部的局部变量只在函数初次调用的时候被初始化（只初始化一次）
     * 当多次调用函数时，static修饰 变量 thingy 的值不会被重置，
     * 并且 thingy 依然是局部变量，外部访问不到
    */
    static int thingy = 5;
    thingy++;
    printf("thingy 为 %d, count值为 %d\n", thingy, count);
}
