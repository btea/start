#include <stdio.h>

void fun();

void main()
{
    const int LENGTH = 10;
    const int HEIGHT = 20;
    const char NEWLINE = '\n';
    int area;
    area = LENGTH * HEIGHT;
    printf("the value of area is: %d\n", area);
    printf("%c", NEWLINE);
}
