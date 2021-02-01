/**
 * 水仙花数
*/

#include <stdio.h>
/* 输出 100 -- 1000 之间的水仙花数 */
int main()
{
    int a, b, c, d;
    for (int i = 100; i < 1000; i++)
    {
        a = i / 100;
        b = i % 100 / 10;
        c = i % 100 % 10;
        if (i == a * a * a + b * b * b + c * c * c)
        {
            printf("%d 为水仙花数\n", i);
        }
    }
    return 0;
}
