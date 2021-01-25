#include <stdio.h>

int main()
{
    int a[3] = {1, 2, 3};
    int size = sizeof(a);          // 此时获取的是数组占据的内存大小
    int len = size / sizeof(a[0]); // 获取数组的长度
    printf("数组a的大小是 %d\n", size);
    printf("数组a的长度是 %d\n", len);
    return 0;
}
