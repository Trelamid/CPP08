#include <iostream>
#include "iter.h"

void printINT(int const &a)
{
    std::cout << a << std::endl;
}

void printSTR(std::string const &a)
{
    std::cout << a << std::endl;
}


int main() {
    int a[4] = {1, 2, 3, 4};
    std::string b[4] = {"a", "b", "c", "d"};

    iter(a, 4, printINT);
    iter(b, 4, printSTR);


    return 0;
}
