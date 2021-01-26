#include <stdio.h>

/**
 * enum(枚举)
*/
// #define MON 1
// #define TUE 2
// #define WED 3
// #define THU 4
// #define FRI 5
// #define SAT 6
// #define SUN 7

enum DAY
{
    MON = 1,
    TUE,
    WED,
    THU,
    FRI,
    SAT,
    SUN
};

int main()
{
    enum DAY day;
    day = WED;
    day = 20;
    printf("%d\n", day);
    printf("星期天是 %d", SUN);
    return 0;
}

// 在 c 语言中枚举没有办法遍历
// 如果枚举里面的值是规则的，则根据最后一个值，可进行遍历，不可靠。。。
