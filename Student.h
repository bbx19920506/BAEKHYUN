#pragma once
#include <string>
#include "Book.h" // key:告诉学生，你要认识书

class Student {
private:
    std::string name_;  
    std::string id_;      
    int borrowCount_;     // 已借数量

public:
    Student(std::string n, std::string i); // 构造函数
    bool borrowBook(Book& book);           // 借书函数    注: & 
    void printInfo() const;                // 打印信息
};