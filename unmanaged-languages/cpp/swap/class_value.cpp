#include "class.hpp"

void swap(Data a, Data b)
{
    // a Copy Constructor
    // b Copy Constructor
    Data tmp = a;
    // a Copy Constructor
    a = b;
    // a Copy Assignment
    b = tmp;
    // b Copy Assignment
}
// a Destructor
// b Destructor
// a Destructor (tmp)

int main(void)
{
    Data a("a", 5), b("b", 10);
    // a Constructor
    // b Constructor
    ::swap(a, b);
    std::cout << a << ' ' << b << std::endl;
    // 5 10
    return 0;
}
// b Destructor
// a Destructor
