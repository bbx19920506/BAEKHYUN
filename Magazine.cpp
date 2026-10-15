#include "Magazine.h"
using namespace std;

Magazine::Magazine(string id, string name, string issue) : Resource(id, name) {
    issue_ = issue;
}

void Magazine::printInfo() const {
    Resource::printInfo();
    cout << " | 【类型】: 杂志 | 【期号】:" << issue_ << endl;
}