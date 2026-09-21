#include "Book.h"
using namespace std;

// 默认构造函数
Book::Book() {
    name = "未知书名";
    isbn = "0000000000000";
    publisher = "未知出版社";
    price = 0.0;
    pages = 0;
    isAvailable = true;
}

// 带参数的构造函数
Book::Book(string n, string i, string p, double pr, int pg, bool avail) {
    name = n;
    isbn = i;
    publisher = p;
    price = pr;
    pages = pg;
    isAvailable = avail;
}

// 修改
void Book::setPrice(double newPrice) {
    if (newPrice >= 0) { 
        price = newPrice;
    }
}

void Book::setAvailability(bool status) {
    isAvailable = status;
}

// 获取
string Book::getName() const { return name; }
bool Book::getAvailability() const { return isAvailable; }

// 输出
void Book::printInfo() const {
    cout << "【书名】:" << name << " | 【ISBN】:" << isbn
        << " | 【出版社】:" << publisher << " | 【价格】:" << price
        << " | 【页数】:" << pages
        << " | 【状态】:" << (isAvailable ? "可借" : "已借出") << endl;
}

// 验证ISBN
bool Book::isValidISBN() const {
    if (isbn.length() != 13) return false;
    for (char c : isbn) {
        if (!isdigit(c)) return false;
    }
    return true;
}