#pragma once
#include "Resource.h" // 必须包含基类头文件

// Book 是 Resource 的继承
class Book : public Resource {
private:
    std::string author_;      
    std::string isbn_;        

public:
    // 构造函数，注意参数里除了自己的，还要包含父类的
    Book(std::string id, std::string name, std::string author, std::string isbn);
    void printInfo() const;
};