#include <iostream>

template<typename T>
concept bool Equality_comparable = 
    requires(T a, T b) {
        { a == b } -> bool;
        { a != b } -> bool;
    };


int main(int argc, char** argv)
{
    return 0;
}
