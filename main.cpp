#include <iostream>
#include "buffer.h"

buffer invert(buffer b){
    for(auto& e:b){
        e = -e;
    }
    return b;
}

int main() {
    buffer d(10);

    d = invert(buffer(11));

    for(auto e: d){
        std::cout << e << ", ";
    }
}
