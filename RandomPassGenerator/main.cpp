#include <iostream>
#include "Generator.h"

int main()
{
    Generator generator;

    std::size_t length;
    std::cout << "Insert the length of password: ";
    std::cin >> length;

    std::string password = generator.genPassword(length);
    std::cout << "Generated password: " << password << std::endl;

    return 0;
}
