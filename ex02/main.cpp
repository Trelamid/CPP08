#include <iostream>
#include "Array.h"

int main() {

    int a = 5;
    Array<int> iArr(3);
    iArr[0] = a;
//    iArr[1] = 1;
    std::cout << iArr.size() << iArr[0]<< std::endl;
    return 0;
}
