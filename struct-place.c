/**
 * 位域
 * 有些信息在存储时，并不需要占用完整的一个字节，而只需占用几个或一个二进制位。例如在存放一个开关变量时，
 * 只有0和1两种状态，用1位二进制即可。为了节省存储空间，并使处理简单，c语言提供了一种数据结构，称为“位域”或“位段”。
 * 所谓“位域”是把一个字节中的二进制位划分为几个不同的区域，并说明每个区域的位数。每个域有一个域名，允许在程序中按域名进行操作。
 * 这样就可以把几个不同的对象用一个字节的二进制位域来表示。
 * 
 * 位域的定义和位域变量说明
 * struct 位域结构名
 * {
 *  位域列表
 * }
 * 位域列表的形式为：
 * 类型说明符 位域名：位域长度
 * 
*/
#include <stdio.h>
#include <string.h>

struct bs
{
    int a : 8;
    int b : 2;
    int c : 6;
    int d : 10;
    int e : 10;
    char f : 1;
    char g;
    char h;
    char i;
};

struct packed_struct
{
    unsigned int f1 : 1;
    unsigned int f2 : 1;
    unsigned int f3 : 1;
    unsigned int f4 : 1;
    // unsigned int type : 4;
    // unsigned int my_int : 9;
    char a;
    char b : 5;
    char c : 3;
    char d : 2;
} pack;

/**
 * 位域定义特殊情况说明：
 * 1、一个位域存储在同一个字节中，如一个字节剩下的空间不足以存放一个位域时，则会从下一单元起，存放该位域。
 * 也可以有意使某位域从下一单元开始
 * 
*/
struct bs1
{
    unsigned a : 4;
    unsigned : 4;   // 空域
    unsigned b : 4; // 从下一单元开始存放
    unsigned c : 4;
};
// 在这个位域定义中，a占第一字节的4位，后4位填0表示不适用，b从第二字节开始，b占4位，c占用4位。

/**
 * 特殊情况说明：
 * 2、由于位域不允许跨两个字节，因此位域的长度不能大于一个字节的长度，也就是不能超过8位二进位。如果最大长度大于计算机整数字长，
 * 一些编译器可能会允许域的重叠，另外一些编译器可能会把大于一个域的部分存储在下一个字节中。
 * 3、位域可以是无名位域，这时它只能用来填充或调整位置。无名的位域是不能使用的。
 * 
 * 位域本质上就是一种结构类型，不过其成员是按二进位分配的。
*/

struct aa
{
    char a;
    int b;
} abc;
int main()
{
    char str[10] = "abc";
    printf("dadsada %s\n", str);
    struct bs s;
    printf("位域结构的大小为：%d\n", sizeof(s));
    printf("int类型的大小为：%d\n", sizeof(int));
    printf("unsigned int类型的大小为：%d\n", sizeof(unsigned int));
    printf("char类型的大小为：%d\n", sizeof(char));
    printf("另一个位域的大小为：%d\n", sizeof(pack));
    abc.b = 123;
    // strcpy(abc.a, "a");
    // 单个char 可以直接赋值，char字符串赋值，需要借助 strcpy函数
    // printf单个char的时候，用%c, printf多个字符的时候，使用%s

    // 直接赋值 "k" 相当于   "\k\0"
    // abc.a = 'k';
    strncpy(&abc.a, "k", 1);
    // pack.b = 'b';
    printf("位域里char a的值为：%c\n", abc.a);
    // printf("pack位域里char b的值为：%c\n", pack.b);
    return 0;
}
