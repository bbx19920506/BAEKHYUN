#pragma once // 防止重复编译
#include <string>
#include <iostream>

class Book {
private: 
    std::string name_;       
    std::string isbn_;       
    std::string publisher_;  
    double price_;           
    int pages_;              
    bool isAvailable_;       // 在馆状态 (true为可借，false为借出)

public:
    Book();    
    Book(std::string n, std::string i, std::string p, double pr, int pg, bool avail);    

    //修改信息
    void setPrice(double newPrice);
    void setAvailability(bool status);

    // 获取信息
    std::string getName() const;
    bool getAvailability() const;

    // 输出信息
    void printInfo() const;

    // 验证ISBN合法性
    bool isValidISBN() const;
};
