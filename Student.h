#pragma once
#include <string>
#include <vector>  //新增：报告1要求使用STL容器vector
#include "Book.h" // key:告诉学生，你要认识书

class Student {
private:
    std::string name_;  
    std::string id_;      
    std::vector<Book> borrowedBooks_; // STL容器示例：动态数组，存放学生借的书
    // 删除原本的 int borrowCount_，改用 vector 动态记录借了多少本书

public:
    Student(std::string n, std::string i); // 构造函数：依赖关系体现在参数中，传入 Book 对象的引用
    bool borrowBook(Book &book);           // 借书函数    注: & 
    void printInfo() const;                // 打印信息
};