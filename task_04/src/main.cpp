#include <iostream>
#include "rotate.hpp"
int main() 
try
{
    setlocale(LC_ALL, "RU");

    int array[5]{ 1, 2, 3, 4, 5};
    int len = 5;
    int N = 2;
    
    rotate(array, len, N);

    std::cout << "Сдвинутый  массив:" << std::endl;

    for (int i{ 0 }; i < len; i++)
        std::cout << array[i] << " ";
	
    return 0;
}
catch(const std::exception& e)
{
    std::cerr << e.what() << '\n';
}
