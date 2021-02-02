/**
 * 根据输入的字符串，提取数字
*/
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdbool.h>

char filter(char[]);
bool isDigit(char str);

int main()
{
    char str[20] = "djajdpa3232p23das2";
    filter(str);
    char vv = 'a';
    printf("结果是：%d\n", isDigit(vv));
    return 0;
}
char filter(char str[])
{
    int len = strlen(str);
    char res[len];
    int a = 0;
    for (int i = 0; i < len; i++)
    {
        char v = str[i];
        if (isDigit(v))
        {
            res[a] = v;
            a++;
        }
        printf("输出字符：%c\n", str[i]);
    }
    printf("输入的字符串中全部的数字为：%s\n", res);
}
bool isDigit(char str)
{
    return str >= '0' && str <= '9';
}
