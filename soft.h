#ifndef SOFT_H_INCLUDED
#include <iostream>
#define SOFT_H_INCLUDED

#include <cstring>
using namespace std;


class Soft
{
    char* name;
    char* author;
    int type;

public:
    Soft();
    Soft(Soft &s);
    Soft(char* name, char* author, int type);

    ~Soft();

    void print();

    void setName( const char*  name);
    void setAuthor(const char* author);
    void setType(int type);

    int getType();
    char* getName(char* name) const;
    char* getAuthor(char* Author) const;

    bool operator> (const Soft & s) const;
    bool operator< (const Soft & s) const;
    bool operator>= (const Soft & s) const;
    bool operator<= (const Soft & s) const;
    bool operator== (const Soft & s) const;
    bool operator!= (const Soft & s) const;
    friend ostream& operator<< (ostream &out, const Soft &s);
    friend istream& operator>> (istream &in, Soft &s);

    Soft &operator=(Soft &s);
};


#endif // SOFT_H_INCLUDED
