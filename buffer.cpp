//
// Created by martin on 2023-09-07.
//

#include <algorithm>
#include "buffer.h"

buffer::buffer(size_t size):first(new int[size]), last(first + size){
}

buffer::buffer(const int * src, size_t size): buffer(size) { // DRY, dont repeat yourself
    std::copy(src, src + size, first);
}

int &buffer::operator[](size_t index) {
    return first[index];
}