#include "EBook.h"
using namespace std;

EBook::EBook(string id, string name, double fileSize) : Resource(id, name) {
    fileSize_ = fileSize;
}

void EBook::printInfo() const {
    Resource::printInfo();
    cout << " | 【类型】: 电子资源 | 【大小】:" << fileSize_ << "MB" << endl;
}