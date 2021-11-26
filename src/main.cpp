#include <iostream>
#include "task.h"
#include "examples.h"


int main(int argc, char const *argv[])
{
    bool temp = false;
    temp = find_true_way(reinterpret_cast<size_t *>( arr1x1f ), 1, 1);
    std::cout << "arr1x1f = " << temp << std::endl;

    temp = find_true_way(reinterpret_cast<size_t *>( arr51x51f ), 51, 51);
    std::cout << "arr51x51f = " << temp << std::endl;

    temp = find_true_way(reinterpret_cast<size_t *>( arr5x5t ), 5, 5);
    std::cout << "arr5x5t = " << temp << std::endl;

    temp = find_true_way(reinterpret_cast<size_t *>( arr5x5f ), 5, 5);
    std::cout << "arr5x5f = " << temp << std::endl;

    temp = find_true_way(reinterpret_cast<size_t *>( arr10x10t ), 10, 10);
    std::cout << "arr10x10t = " << temp << std::endl;

    temp = find_true_way(reinterpret_cast<size_t *>( arr10x10f ), 10, 10);
    std::cout << "arr10x10f = " << temp << std::endl;

    temp = find_true_way(reinterpret_cast<size_t *>( arr50x50f ), 50, 50);
    std::cout << "arr50x50f = " << temp << std::endl;

    temp = find_true_way(reinterpret_cast<size_t *>( arr50x50t ), 50, 50);
    std::cout << "arr50x50t = " << temp << std::endl;

	return 0;
}
