//
// Created by martin on 2023-09-11.
//

#ifndef TMP_INT_VECTOR_H
#define TMP_INT_VECTOR_H

#include "buffer.h"

class int_vector {
    buffer buf;
    size_t sz = 0;
    void increase_capacity();
public:
    int_vector();
    explicit int_vector(size_t size);
    int_vector(const int* , size_t);

    size_t  size() const;
    int* begin();
    int* end();
    const int* begin() const;
    const int* end() const;
    void push_back(int e);
};


#endif //TMP_INT_VECTOR_H
