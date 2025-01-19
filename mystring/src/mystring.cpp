#include "mystring.h"

MyString::MyString(/* args */)
{
    m_length = 1;
    char * m_string = new char[1];
    m_string[0] = '\0';
}

MyString::MyString(const char *str)
{
    m_length = std::strlen(str);
    char * m_string = new char[m_length];
    std::strcpy(m_string, str);
    m_string[m_length] = '\0';
}

MyString::MyString(const MyString &other)
{
    m_length = other.m_length;
    char * m_string = new char[m_length];
    std::strcpy(m_string, other.m_string);
    m_string[m_length] = '\0';
}

MyString::~MyString()
{
    delete [] m_string;
}

const char *MyString::getString()const
{
    return m_string;
}

std::ostream &operator<<(std::ostream &os, const MyString &other)
{
    std::cout<<other.getString();
    os<<other.getString();
    return os;
}
