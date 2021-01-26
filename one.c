#include <stdio.h>
#include <ctype.h>
#include <string.h>
#define name = "tea";

void getName();
void getAge();

int main()
{
    const int width = 10;
    const int height = 5;
    int area;
    area = width * height;
    /**中文一个字符占3个字节的大小**/
    char str[] = "这是一大串字符";
    char init;
    memset(init, str, 100);
    char xy[] = "xiaotanbuzhiqingkuangzongchengkong";
    printf("hello world!\n");
    printf("the rect area is %d\n", area);
    printf("this is a string %s\n", "世界，你好！");
    printf("输出一大串字符串: %s\n", str);
    printf("字符串长度 %d 字节\n", strlen(str));
    printf("曲终人散: %d\n", strlen(xy));
    strcat(str, xy);
    printf("默认开始的字符串为: %s\n长度为 %d 字节\n", init, strlen(init));
    printf("字符串相加之后的值为: %s\n 叠加的字符长度为：%d\n", str, strlen(str));
    // getAge("10");
}

void getName()
{
}
void getAge(int age)
{
    int r;
    r = isalpha(age);
    char c = 'z';
    printf("the result is:  %s\n", c);
}
