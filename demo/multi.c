/**
 * 输出九九乘法表
*/

#include <stdio.h>

int main()
{
    int i = 1, j;
    for (; i < 10; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d * %d = %-3d", j, i, i * j); // -3d表示左对齐，占3位
        }
        printf("\n");
    }
    return 0;
}
