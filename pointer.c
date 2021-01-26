#include <stdio.h>

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
    return 0;
}
