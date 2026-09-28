#include "Student.h"
#include <iostream>
using namespace std;

Student::Student(string name, string id) {
    name_ = name;
    id_ = id;
    // borrowCount_ = 0; -->已借数量=0，这句不需要了，vector默认就是空的
}

bool Student::borrowBook(Book& book) {
    cout << "\n[动作] 学生 " << name_ << " 正在尝试借阅《" << book.getName() << "》..." << endl;

    // 1. 先看书在不在
    if (!book.getAvailability()) {
        cout << "借阅失败！这本书已经被借走了。" << endl;
        return false;
    }

    // 核心修改（替代原本2处borrowCount：2.借用成功，把书塞进 vector 书包里
    book.setAvailability(false);
    borrowedBooks_.push_back(book); // STL 容器操作：添加元素
    //// 2. 书在，借走。修改书的状态，要改成不可借
    //book.setAvailability(false);
    //borrowCount_++;

    cout << "借阅成功！这本书现在归 " << name_ << " 了。" << endl;
    return true;
}

void Student::printInfo() const {
    cout << "【学生】" << name_ << " | 【学号】" << id_
        << " | 【已借数量】" << borrowedBooks_.size()<< " 本" << endl; // 获取 vector 大小
}