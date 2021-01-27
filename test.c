#include <stdio.h>

int main()
{
    char a[3] = {'a', 'b', '\0'};
    // a[1] = 'a';
    // a[3] = '3';
    // printf("the value is %c \n", a[1]);
    a[2] = 'c';
    a[3] = 'd';
    a[4] = 'z';
    a[5] = 'y';
    a[6] = 's';
    a[7] = 'p';
    a[8] = 'o';
    a[9] = 'l';
    a[10] = 'k';
    a[-1] = '1';
    a[-2] = '2';
    a[10] = 0;
    printf("the last value is %s\n", a);
    printf("-1 value is %c\n", a[-1]);
    printf("-2 value is %c\n", a[-2]);
    return 0;
}
