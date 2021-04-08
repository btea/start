#include <stdio.h>

void rev(int arr[], int *a);
int num();

int a[5];
int main()
{
    int arr[5] = {1, 23, 56, 80, 20};
    rev(arr, a);
    printf("the old first value is %d\n", arr[0]);
    printf("the new first value is %d", a[0]);
    int c = num();
    printf("\n");
    printf("这是 num 函数返回值 %d", c);
    return 0;
}

/**
 * 没办法实现一个通用函数，用来获取所有数组的长度,
 * 只能在定义的时候就确定数组长度
 * 无法在 rev 函数内部创建一个局部变量数组用来存储被反转的数据，函数执行完成，
 * 内部的局部变量会被销毁，只能在外部创建一个变量，然后当做参数传递进去
*/
void rev(int arr[], int *a)
{
    printf("the reverse value is: ");
    for (int i = 0; i < 5; i++)
    {
        printf("%d ", arr[5 - i - 1]);
        a[i] = arr[5 - i - 1];
    }
    printf("\n");
};
int num()
{
    return 30;
}
