#include <stdio.h>

/***
 * struct tag {
 *  member-list
 *  member-list
 *  member-list
 * } variable-list;
 * 
 * tag  结构体标签
 * member-list 是标准的变量定义，比如 int i; float f,或者其他有效的变量定义。
 * variable-list 结构变量，定义在结构的末尾，最后一个分号之前，可以指定一个或多个结构变量。
 * 
*/

/**
 * 对齐规则：https://blog.csdn.net/annjeff/article/details/89227976
 * C语言结构体(struct)字节对齐规则
 * 规则1：结构体的数据成员， 第一个数据成员放在offset为0的地方，以后每个数据成员存放在offset为该数据成员大小的整数倍的地方（
 * 比如int在32位机为4字节，则要从4的整数倍地址开始存储）。
 * 规则2：如果一个结构体B里嵌套另一个结构体A，则结构体A应从offset为A内部最大成员的整数倍的地方开始存储。（struct B里存储 struct A,
 * A里有char,int,double等成员，那A应该从8的整数倍开始存储。），结构体A中的成员的对齐规则仍满足原则1、原则2。
 * 补1：结构体A所占的大小为该结构体成员内部最大元素的整数倍，不足补齐。
 * 补2：不是直接将结构体A的成员直移动到结构体B中。
 * 规则3：结构体的总大小，也就是sizeof的结果，必须是其 内部最大成员的整数倍，不足的要补齐。
*/

struct Books
{
    /* data */
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} book;

// 结构体变量初始化
struct T
{
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} t = {"c lang", "robot", "编程语言", 123456};

void test()
{
    printf("title: %s\nauthor: %s\nsubject: %s\nbook_id: %d\n", t.title, t.author, t.subject, t.book_id);
}

/**
 * struct的大小为 16
 * 若short声明放在double后面，则struct大小变为24 （...）
 * 注：如果在struct声明的时候，进行了字节对齐，则位置不会影响struct大小
*/
struct A
{
    char a;
    short b;
    double c;
} a;
struct B
{
    char a;
    int b;
    double c;
} b;

struct C
{
    double c;
    int a;
    char b;
} c;

int main()
{
    printf("char 大小为：%d\n", sizeof(char));
    printf("short 大小为：%d\n", sizeof(short));
    printf("int 大小为：%d\n", sizeof(int));
    printf("double 大小为：%d\n", sizeof(double));
    printf("struct A 大小为：%d\n", sizeof(a));
    printf("struct B 大小为；%d\n", sizeof(b));
    printf("struct C 大小为；%d\n", sizeof(c));
    test();
    return 0;
}
