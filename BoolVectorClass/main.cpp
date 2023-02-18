#include <iostream>
#include "BoolVector.hpp"

int main(int argc, char const *argv[])
{
    BoolVector vec("111111101110'");
    BoolVector vec2("1001");
    std::cout << vec2 << std::endl;
    vec2 ^= vec;
    std::cout << vec2 << std::endl;
}
