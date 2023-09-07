#include <iostream>
#include "buffer.h"

int main() {
    int arr[] = {1, 2, 3, 4};
    buffer b(10);

    buffer c(arr, 4);

    buffer d = c;
    c[0] = 2000;

    for(auto e: d){
        std::cout << e << ", ";
    }
}
