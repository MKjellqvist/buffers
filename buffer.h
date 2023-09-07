//
// Created by martin on 2023-09-07.
//

#ifndef TMP_BUFFER_H
#define TMP_BUFFER_H


#include <cstddef>

/**
 * Buffer, owning a resource.
 *
 * Illustrate Single responsibility principle.
 */
class buffer{
public:
    buffer(size_t size);
    buffer(const int* , size_t);
    buffer(const buffer& b);

    size_t  size() const;

    int* begin();
    int* end();
    const int* begin() const;
    const int* end() const;

    int& operator[](size_t index);
private:
    int* first;
    int* last;
};


#endif //TMP_BUFFER_H
