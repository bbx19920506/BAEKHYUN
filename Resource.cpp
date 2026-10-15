#include "Resource.h"
using namespace std;

Resource::Resource(string id, string name) {
    id_ = id;
    name_ = name;
    isAvailable_ = true; // 默认刚入库都是可借的
}

string Resource::getId() const { return id_; }
string Resource::getName() const { return name_; }
bool Resource::getAvailability() const { return isAvailable_; }
void Resource::setAvailability(bool status) { isAvailable_ = status; }

void Resource::printInfo() const {
    cout << "【编号】:" << id_ << " | 【名称】:" << name_
        << " | 【状态】:" << (isAvailable_ ? "可借" : "已借出");
}