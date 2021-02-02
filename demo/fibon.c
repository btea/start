/**
 * 输出斐波那契数列
*/
#include <stdio.h>

void fab(int num);

int main()
{
    fab(20);
    return 0;
}

void fab(int num)
{
    if (num <= 1)
    {
        printf("%d\t", num);
        return;
    }
    int a = 0, b = 1, c;
    printf("%d   %d", a, b);
    while (num-- >= 2)
    {
        c = a + b;
        a = b;
        b = c;
        printf("  %d", c);
    }
    printf("\n");
}
