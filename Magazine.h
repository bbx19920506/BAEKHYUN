#pragma once
#include "Resource.h"

class Magazine : public Resource {
private:
    std::string issue_; // ÆÚºÅ
public:
    Magazine(std::string id, std::string name, std::string issue);
    void printInfo() const;
};