#include <iostream>

#include "hash_list.h"

int main(int argc, char *argv[])
{
    hash_list list;

    if (list.get_size() != 0)
    {
        std::cout << "Invalid size" << std::endl;
        exit(1);
    }

    list.insert(3, 4);
    list.insert(4, 5);

    if (list.get_size() != 2)
    {
        std::cout << "Invalid size" << std::endl;
        exit(1);
    }

    if (!list.get_value(3).has_value())
    {
        std::cout << "expected 3 to be in list but it wasn't" << std::endl;
        exit(1);
    }

    if (!list.remove(3))
    {
        std::cout << "Failed to remove 3 from list" << std::endl;
        exit(1);
    }

    if (list.get_value(3).has_value())
    {
        std::cout << "Unexpected 3 in list" << std::endl;
        exit(1);
    }
}