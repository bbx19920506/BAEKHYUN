#pragma once
#include <string>
#include <iostream>

// 基类：所有资源的“祖宗”
class Resource {
protected:
    // 注意这里用 protected！大白话：只能让子类和自己访问，外面的人不能直接碰
    std::string id_;          // 资源编号
    std::string name_;        // 资源名称
    bool isAvailable_;        // 是否可借

public:
    // 构造函数
    Resource(std::string id, std::string name);

    // 通用方法
    std::string getId() const;
    std::string getName() const;
    bool getAvailability() const;
    void setAvailability(bool status);

    // 打印通用信息
    void printInfo() const;
}; 
