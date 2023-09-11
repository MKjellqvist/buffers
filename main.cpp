#include <iostream>
#include "buffer.h"
#include "int_vector.h"

buffer invert(buffer b){
    for(auto& e:b){
        e = -e;
    }
    return b;
}

int main() {
//    int arr[] = {1, 2, 3, 4};
    int_vector iv;
    for(int i = 0; i < 10'000'000; i++){
        iv.push_back(std::rand() % (i + 1));
    }
    for(auto rand_val: iv){
        std::cout << rand_val << ", ";
    }
}
