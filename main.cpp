#include <iostream>
#include "Book.h"
#include "Magazine.h"
#include "EBook.h"
#include "Student.h"

using namespace std;

int main() {
    cout << "=== 图书馆借阅系统 - 实验三测试 ===" << endl;

    // 1. 使用 new 动态创建不同类型的资源
    Resource* b1 = new Book("B001", "C++ Primer", "Stanley", "9780321714114");
    Resource* m1 = new Magazine("M001", "国家地理", "2024年第5期");
    Resource* e1 = new EBook("E001", "C++网课", 1500.5);

    // 2. 来一个学生
    Student student1("张三", "2024001");

    // 3. 测试借阅（注意：这里传的是 *b1，即解引用，传入对象本身）
    student1.borrowResource(*b1);
    student1.borrowResource(*m1);
    student1.borrowResource(*e1);

    // 4. 打印各自的状态
    cout << "\n--- 当前资源状态 ---" << endl;
    b1->printInfo();
    m1->printInfo();
    e1->printInfo();

    student1.printInfo();

    // 5. 测试归还
    cout << "\n--- 测试归还 ---" << endl;
    student1.returnResource(*m1);
    m1->printInfo(); // 看杂志是不是变回可借了
    student1.printInfo();

    // 6. 释放 new 出来的内存（防止内存泄漏，必做！）
    delete b1;
    delete m1;
    delete e1;

    return 0;
}