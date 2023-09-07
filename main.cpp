#include <iostream>
#include "buffer.h"

buffer invert(buffer b){
    for(auto& e:b){
        e = -e;
    }
    return b;
}

int main() {
    int arr[] = {1, 2, 3, 4};
    buffer b(10);

    buffer c(arr, 4);

    buffer d(10);
    auto e = invert(invert(c));

    for(auto e: d){
        std::cout << e << ", ";
    }
    std::cout.flush();
}
