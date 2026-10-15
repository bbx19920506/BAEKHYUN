#include "Book.h"
using namespace std;

// 重点：构造函数初始化列表！
// 子类产生前必须让父类先产生，用冒号调用 Resource 的构造函数
Book::Book(string id, string name, string author, string isbn)
    : Resource(id, name) // 给父类的属性赋值
{
    author_ = author;    // 给子类的属性赋值
    isbn_ = isbn;
}

void Book::printInfo() const {
    Resource::printInfo(); 
    cout << " | 【类型】: 一般图书 | 【作者】:" << author_ << " | 【ISBN】:" << isbn_ << endl;
}