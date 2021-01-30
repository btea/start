/**
 * typedef 关键字，可以用来为类型取一个新的名字。
*/
#include <stdio.h>
#include <string.h>

typedef unsigned char BYTE;

BYTE b1, b2;

typedef struct Books{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
} Book;

/**
 * typedef  vs  #define
 * #define 是 C 指令，用于为个或者弄个数据类型定义别名，与 typedef 类似，但是它们有以下几点不同：
 * typedef 仅限于为类型定义符号名称，#define 不仅可以为类型定义别名，也能为数值定义别名，比如您可以定义 1 为 ONE。
 * typedef 是由编译器执行解释的，#define 语句是由预编译器进行处理的。 
*/
#define TRUE 1
#define FALSE 0

int main() {
    /**
     * 给char赋值，用单引号或者借助工具函数
    */
    strncpy(&b1, "a", 1);
    // b1 = 'a';
    b2 = 'b';
    printf("bi is %c\n", b1);

    Book book;
    strcpy(book.title, "hello c 语言");

    printf("书标题： %s\n", book.title);

    printf("TRUE 的值：%d\n", TRUE);
    printf("FALSE 的值：%d\n", FALSE);
    return 0;
}