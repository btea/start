#include <stdio.h>
#include <string.h>

// 操作字符串的函数
/**
 * strcpy(s1, s2)
 * 复制字符串s2到s1
 * 
*/

/* 获取字符串或者数组长度，似乎处理不了，没办法？？ */
int getLen(char *str)
{
    char c = str[0];
    printf("第一个字符为：%p\n", c);
    int a = sizeof(str[0]);
    printf("第一个字符的大小：%d\n", a);
    int size = sizeof(*str);
    printf("size %d\n", size);
    return size / a;
}

int main()
{
    char str[6] = {'h', 'e', 'l', 'l', 'o', '\0'};
    char b = 'a';
    printf("string: %d\n", b);
    // int len = getLen(str);
    // printf("str变量的长度为：%d\n", len);
    int len = strlen(str);
    printf("字符串str的长度为：%d\n", len);
    printf("这是一个字符串： %s\n", str);
    return 0;
}
