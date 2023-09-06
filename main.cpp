#include <iostream>

/**
 * Buffer, owning a resource
 */
class buffer{
public:
    buffer(size_t size):first(new int[size]), last(first + size), size(0){
    }
    buffer& push_back(int e){
        first[size++] = e;
        return *this;
    }
    int pop_back(){
        return first[size--];
    }

    int* begin(){
        return first;
    }
    int* end(){
        return first + size;
    }
private:
    int* first;
    int* last;
    int size;
};

int main() {
    buffer b(10);
    b.push_back(20).push_back(10);

    for(auto e: b){
        std::cout << e << ", ";
    }
}
