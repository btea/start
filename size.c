#include <stdio.h>
#include <stdbool.h>

// 1字节对齐

// #pragma pack(1)
struct B
{
    char a[9];
} AA;

typedef struct C
{
    char a[9];
} CC;

struct A
{
    /* data */
    char b[7];
    char a[9];
    // int b;
    double c;
    // char d[3];
    // short e;
    // struct B f;
    // CC g;
} abc;

// #pragma pack()

int main()
{
    char a = '1';
    int b = 1;
    float c = 1.2;
    double d = 2;
    // abc.a = '2';
    // printf("struct中a的值为：%d\n", abc.a);
    printf("char的大小为：%d\n", sizeof(char));
    printf("int的大小为：%d\n", sizeof(int));
    printf("float的大小为：%d\n", sizeof(float));
    printf("double的大小为：%d\n", sizeof(double));
    printf("bool的大小为：%d\n", sizeof(bool));
    printf("short的大小为：%d\n", sizeof(short));
    printf("long的大小为：%d\n", sizeof(long));
    printf("struct的大小为：%d\n", sizeof(abc));
    return 0;
}
