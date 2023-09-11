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
    buffer(const buffer& rhs);

    buffer(buffer&& rhs);

    ~buffer();

    size_t  size() const;

    int* begin();
    int* end();
    const int* begin() const;
    const int* end() const;

    /**
     * https://stackoverflow.com/q/3279543/451600
     * @param rhs
     * @return
     */
    buffer& operator=(buffer rhs);

    int& operator[](size_t index);
    int operator[](size_t index) const;
private:
    int* first;
    int* last;

    void swap(buffer &buffer);
};


#endif //TMP_BUFFER_H
