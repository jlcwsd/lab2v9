#include "soft.h"
using namespace std;

int main()
{
    Soft s("Soft", "Author", 3);
    Soft s1;
    Soft s2(s);

    s.print();


    s1.setName("soft");
    s1.setAuthor("avtor");
    s1.setType(13000);

    s1.print();


    char n[25];
    s1.getName(n);
    cout << n<<"\n";
    s1.print();

    char t[25];
    s1.getAuthor(t);
    cout << t<<"\n";
    return 0;




}
