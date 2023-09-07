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
buffer::buffer(const buffer &rhs): buffer(rhs.begin(), rhs.size()) {

}
buffer::buffer(buffer &&rhs):first(nullptr), last(nullptr) {
    swap(rhs);
}

buffer::~buffer() {
    delete []first;
}

int &buffer::operator[](size_t index) {
    return first[index];
}

size_t buffer::size() const {
    return std::distance(first, last);
}

int* buffer::begin() {
    return first;
}

int* buffer::end() {
    return last;
}

const int* buffer::begin() const {
    return first;
}

const int* buffer::end() const {
    return last;
}

void buffer::swap(buffer &buf) {
    std::swap(first, buf.first);
    std::swap(last, buf.last);
}
