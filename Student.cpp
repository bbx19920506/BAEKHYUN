#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string n, string i) {
    name = n;
    id = i;
    borrowCount = 0; // 没借过书
}

bool Student::borrowBook(Book& book) {
    cout << "\n[动作] 学生 " << name << " 正在尝试借阅《" << book.getName() << "》..." << endl;

    // 1. 先看书在不在
    if (!book.getAvailability()) {
        cout << "借阅失败！这本书已经被借走了。" << endl;
        return false;
    }

    // 2. 书在，借走。修改书的状态，要改成不可借
    book.setAvailability(false);

    borrowCount++;

    cout << "借阅成功！这本书现在归 " << name << " 了。" << endl;
    return true;
}

void Student::printInfo() const {
    cout << "【学生】" << name << " | 【学号】" << id
        << " | 【已借数量】" << borrowCount << " 本" << endl;
}