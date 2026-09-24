//#include "Book.h"
//#include <iostream>
//using namespace std;
//
//int main() {
//    cout << "=== 图书馆借阅系统 - 实验一测试 ===" << endl;
//
//    Book book1;
//    cout << "测试默认构造的图书：" << endl;
//    book1.printInfo();
//
//    Book book2("C++ Primer", "9780321714114", "人民邮电出版社", 128.0, 800, true);
//
//    cout << "\n测试带参构造的图书：" << endl;
//    book2.printInfo();
//
//    book2.setPrice(99.9);
//    book2.setAvailability(false); 
//    cout << "\n修改价格和借阅状态后的图书2：" << endl;
//    book2.printInfo();
//
//    cout << "\n测试获取书名: " << book2.getName() << endl;
//    cout << "测试ISBN是否合法: " << (book2.isValidISBN() ? "合法" : "非法") << endl;
//    return 0;
//}
#include <iostream>
#include "Book.h"
#include "Student.h"

using namespace std;

int main() {
    cout << "=== 图书馆借阅系统 - 实验二测试 ===" << endl;

    Book book1("C++ Primer", "9780321714114", "人民邮电出版社", 128.0, 800, true);
    Book book2("西游记", "9787020008728", "人民文学出版社", 59.9, 500, true);

    //来一个学生
    Student student1("张三", "2024001");
    student1.printInfo();

    // 学生去借第一本书
    student1.borrowBook(book1);
    book1.printInfo(); // 看看书的状态变没变
    student1.printInfo(); // 看看该学生的借阅数变没变

    // 该学生想再借一次第一本书，应该失败
    student1.borrowBook(book1);

    return 0;
}