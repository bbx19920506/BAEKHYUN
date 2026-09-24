#include "Book.h"
using namespace std;

// 默认构造函数
Book::Book() {
    name_ = "未知书名";
    isbn_ = "0000000000000";
    publisher_ = "未知出版社";
    price_ = 0.0;
    pages_ = 0;
    isAvailable_ = true;
}

// 带参数的构造函数
Book::Book(string name, string isbn, string publisher, double price, int pages, bool isAvailable) {
    name_ = name;
    isbn_ = isbn;
    publisher_ = publisher;
    price_ = price;
    pages_ = pages;
    isAvailable_ = isAvailable;
}

// 修改
void Book::setPrice(double newPrice) {
    if (newPrice >= 0) { 
        price_ = newPrice;
    }
}

void Book::setAvailability(bool status) {
    isAvailable_ = status;
}

// 获取
string Book::getName() const { return name_; }
bool Book::getAvailability() const { return isAvailable_; }

// 输出
void Book::printInfo() const {
    cout << "【书名】:" << name_ << " | 【ISBN】:" << isbn_
        << " | 【出版社】:" << publisher_ << " | 【价格】:" << price_
        << " | 【页数】:" << pages_
        << " | 【状态】:" << (isAvailable_ ? "可借" : "已借出") << endl;
}

// 验证ISBN
bool Book::isValidISBN() const {
    if (isbn_.length() != 13) return false;
    for (char c : isbn_) {
        if (!isdigit(c)) return false;
    }
    return true;
}