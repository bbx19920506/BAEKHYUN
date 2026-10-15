#pragma once
#include "Resource.h"

class EBook : public Resource {
private:
    double fileSize_; // 文件大小(MB)

public:
    EBook(std::string id, std::string name, double fileSize);
    void printInfo() const;
};