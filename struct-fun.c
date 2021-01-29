/**
 * 结构作为函数参数
*/
#include <stdio.h>
#include <string.h>

struct Books
{
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};

// 函数声明
void printBook(struct Books book);
int main()
{
    struct Books book1;
    struct Books book2;
    strcpy(book1.title, "c pro");
    strcpy(book1.author, "aa");
    strcpy(book1.subject, "编程");
    book1.book_id = 123;
    // book2.title = 'javascript pro';
    book2.book_id = 456;
    printf("book2 title is %d\n", book2.book_id);
    printf("book1 title is %s\n", book1.title);
    printBook(book1);

    // 指向结构的指针
    struct Books *struct_pointer;
    struct_pointer = &book1;

    struct_pointer->book_id = 2233;
    // 为了使用指向该结构的指针访问结构的成员，必须使用 -> 运算符
    printf("struct_pointer title is %s\n", struct_pointer->title);
    printf("struct_pointer author is %s\n", struct_pointer->author);
    printf("struct_pointer subject is %s\n", struct_pointer->subject);
    printf("struct_pointer book_id is %d\n", struct_pointer->book_id);
    return 0;
}

void printBook(struct Books book)
{
    printf("book title is %s\n", book.title);
    printf("book author is %s\n", book.author);
    printf("book subject is %s\n", book.subject);
    printf("book book_id is %d\n", book.book_id);
}
