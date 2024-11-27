#include "reverse.hpp"
#include <array>


void Reverse(int* array, size_t len)
{
    for (int i{ 0 }; i < len / 2; i++)
        std::swap(array[i], array[(len -i - 1)]);
}