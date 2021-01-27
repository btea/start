#include <stdio.h>

/***
 * struct tag {
 *  member-list
 *  member-list
 *  member-list
 * } variable-list;
 * 
 * tag  结构体标签
 * member-list 是标准的变量定义，比如 int i; float f,或者其他有效的变量定义。
 * variable-list 结构变量，定义在结构的末尾，最后一个分号之前，可以指定一个或多个结构变量。
 * 
*/

struct Books
{
    /* data */
    char title[50];
    char author[50];
    char subject[50];
    int book_id;
} book;
