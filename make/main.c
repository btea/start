#include "stdio.h"
extern void funca();
extern void funcb();
extern void funcc();
// https://blog.csdn.net/weixin_42653531/article/details/100159377

// Make概念以及使用 http://www.ruanyifeng.com/blog/2015/02/make.html
int main()
{
    funca();
    funcb();
    funcc();
}
