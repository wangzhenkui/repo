#ifndef MYSTRING_H
#define MYSTRING_H

#include <iostream>
#include <cstring>

class MyString
{
private:
    size_t m_length;
    char * m_string;
public:
    MyString(/* args */);
    MyString(const char * str);
    MyString(const MyString & other);
    ~MyString();

    const char * getString()const;

    friend std::ostream& operator<<(std::ostream & os, const MyString & other);
};




#endif
