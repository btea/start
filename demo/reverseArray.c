#include <stdio.h>

void rev(int arr[]);

int main()
{
    int arr[5] = {1, 23, 56, 80, 20};
    rev(arr);
    printf("the value is %d", arr[0]);
}

/**
 * 没办法实现一个通用函数，用来获取所有数组的长度,
 * 只能在定义的时候就确定数组长度
*/
void rev(int arr[5])
{
    int a[5];
    printf("the reverse value is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[5 - i - 1]);
    }
    printf("\n");
};
