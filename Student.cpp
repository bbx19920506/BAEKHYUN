#include "Student.h"
#include <iostream>
#include <algorithm> // 用于 std::find
using namespace std;

Student::Student(string n, string i) {
    name_ = n;
    id_ = i;
}

bool Student::borrowResource(Resource& res) {
    cout << "\n[动作] 学生 " << name_ << " 正在尝试借阅《" << res.getName() << "》..." << endl;

    if (!res.getAvailability()) {
        cout << "借阅失败！该资源已被借走。" << endl;
        return false;
    }

    res.setAvailability(false);
    borrowedResources_.push_back(&res); // 存对象的地址

    cout << "借阅成功！" << endl;
    return true;
}

bool Student::returnResource(Resource& res) {
    // 在 vector 中查找这个资源的地址
    auto it = find(borrowedResources_.begin(), borrowedResources_.end(), &res);
    if (it != borrowedResources_.end()) {
        res.setAvailability(true); // 恢复可借
        borrowedResources_.erase(it); // 从借阅记录中移除
        cout << "归还成功！" << endl;
        return true;
    }
    cout << "归还失败！你没有借过这个资源。" << endl;
    return false;
}

void Student::printInfo() const {
    cout << "【学生】" << name_ << " | 【学号】" << id_
        << " | 【已借数量】" << borrowedResources_.size() << " 本" << endl;
}

Student::~Student() {
    // 如果你是动态 new 出来的资源挂在学生名下，这里要 delete。
    // 但我们现在只是记录了引用(&res)的地址，并没有 new，所以不需要在这里 delete。
}