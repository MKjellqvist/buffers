//
// Created by martin on 2023-09-11.
//

#include <algorithm>
#include "int_vector.h"

int_vector::int_vector(): buf(16) {}
int_vector::int_vector(size_t size):buf(size) {
    if(size == 0){
        buf = buffer(16);
    }
}

int_vector::int_vector(const int * src, size_t size): buf(src, size) {}

int* int_vector::begin(){
    return buf.begin();
}

int* int_vector::end() {
    return buf.begin() + size();
}

void int_vector::push_back(int e) {
    if(size() == buf.size()){
        increase_capacity();
    }
    buf[sz] = e;
    ++sz;
}

size_t int_vector::size() const {
    return sz;
}

void int_vector::increase_capacity() {
    buffer tmp(buf.size() * 2);
    std::copy(buf.begin(), buf.end(), tmp.begin());
    buf = tmp;
}
