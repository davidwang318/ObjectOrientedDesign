#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    Author(std::string name, std::string description):name_(name), description_(description){}
private:
    std::string name_;
    std::string description_;
};

#endif