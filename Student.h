#pragma once
#include <string>
#include <vector>
#include "Resource.h" // 注意：依赖的是基类了！

class Student {
private:
    std::string name_;
    std::string id_;
    // 重点：这里用 vector<Resource*> (存指针，避免对象截断问题)
    std::vector<Resource*> borrowedResources_;

public:
    Student(std::string n, std::string i);

    // 核心改变：参数变成 Resource 的引用
    bool borrowResource(Resource& res);

    // 新增归还功能
    bool returnResource(Resource& res);

    void printInfo() const;

    // 析构函数（重点：释放 new 出来的指针）
    ~Student();
};