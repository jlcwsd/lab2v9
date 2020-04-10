#include "soft.h"

Soft::Soft():Soft("soft", "author", 5){}

Soft::Soft(char* name, char* author, int type)
{
    this->name=NULL;
    setName(name);
    setAuthor(author);
    setType(type);

};

Soft::Soft(Soft &s):Soft(s.name, s.author, s.type){}

void Soft :: print()
{
    std::cout << "name = " << name <<  ",";
    std::cout << "author = " << author <<  ",";
    std::cout << "type = " << type <<  "\n";
}

Soft::~Soft()
{
    delete [] name;
    delete [] author;
}

void Soft::setName(const char* name)
{
delete [] this ->name;
int len = strlen(name)+1;
    this ->name = new char[len];
    strcpy (this ->name, name);
}

void Soft::setAuthor(const char* author)
{
    delete [] this ->author;
    int len = strlen("author") + 1;
    this ->author = new char[len];
    strcpy (this ->author, author);
}

int Soft::getType()
{
    return type;
}

void Soft::setType(int type)
{
    if(type >=-200 && type<2100)
            this->type = type;
    else
        std::cout << "Error nafig"<<"\n";
}

char* Soft::getName(char* name) const
{
    strcpy(name, this->name);
    return name;


}

char* Soft::getAuthor(char* author) const
{

    strcpy(author, this->author);
    return author;


}

bool Soft::operator> (const Soft & s) const
{
    return(type > s.type);
}

bool Soft::operator< (const Soft & s) const
{
    return(type < s.type);
}

bool Soft::operator>= (const Soft & s) const
{
    return !(*this < s);
}

bool Soft::operator<= (const Soft & s) const
{
    return !(*this > s);
}

bool Soft::operator== (const Soft & s) const
{
    return(type == s.type);
}

bool Soft::operator!= (const Soft & s) const
{
    return !(*this == s);
}



ostream& operator<< (ostream &out, const Soft &s)
{
    out << " type: " << s.type << " name: " << s.name << " author: " << s.author;
    return out;
}


istream& operator>> (istream &in, Soft &s)
{
    in >> s.name;
    in >> s.author;
    in >> s.type;
    return  in;
}


Soft&Soft::operator=(Soft &s)
{
    this ->name = NULL;
    setName(s.name);
    this ->author = NULL;
    setAuthor(s.author);
    this-> type = s.type;
    return *this;
}
