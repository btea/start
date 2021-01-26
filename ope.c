/**
 * 运算符
 * operation
*/

/**
 * 杂项运算符
 * --------------------------------------------------------------------------
 * | 运算符   | 描述                       | 实例                             |
 * --------------------------------------------------------------------------
 * | sizeof() | 返回变量的大小             | sizeof(a)将返回4，其中a是整数。    |
 * --------------------------------------------------------------------------
 * | &        | 返回变量的地址             | &a;将给出变量a的实际地址。         |
 * --------------------------------------------------------------------------
 * | *        | 指向一个变量。             | *a;将指向一个变量。                |
 * --------------------------------------------------------------------------
 * | ?:       | 条件表达式。               | 如果条件为真 ？ 则值为X : 否则值为Y | 
 * ---------------------------------------------------------------------------
 * 
*/

#include <stdio.h>

int main()
{
    int a = 4;
    short b;
    double c;
    int *ptr;

    printf("变量a的大小为 %lu\n", sizeof(a));
    printf("变量b的大小为 %lu\n", sizeof(b));
    printf("变量c的大小为 %lu\n", sizeof(c));
    /* & 和 * 运算符 */
    ptr = &a;
    printf("a的地址为 %d\n", ptr);
    printf("*ptr 是 %d\n", *ptr);

    return 0;
}