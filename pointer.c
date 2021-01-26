#include <stdio.h>

/**
 * 函数指针
*/

int max(int a, int b)
{
    return a > b ? a : b;
}

int main()
{
    int var = 10;
    int *p;
    p = &var;
    printf("var 变量的地址为： %p\n", &var);
    printf("p 变量存储的地址为：%p\n", p);
    /*使用指针访问值*/
    printf("*p 变量的值为：%d\n", *p);

    /* 空指针 NULL */
    int *ptr = NULL;
    printf("ptr 的地址是：%p\n", ptr);

    /* 函数指针 */
    // int (*fn)(int, int) = &max;

    // 定义函数指针变量时，可以不指定参数个数以及类型
    int (*fn)() = &max;
    int v = fn(10);

    printf("20与10较大的数值为：%d\n", v);
    return 0;
}
