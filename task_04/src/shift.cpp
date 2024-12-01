#include "shift.hpp"

void rotate(int* array, size_t& len, unsigned int& N)
{
    int* new_arr = new int[len];

    for (int i{0}; i < len; i++)
            new_arr[i] = array[(i+N)%len];

    for (int i{0}; i < len; i++)
        array[i] = new_arr[i];

    delete [] new_arr;


}