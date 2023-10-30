#include <iostream>
#include "Generator.h"
#include <memory>

int main()
{
    std::unique_ptr<Generator> generatorPass = std::make_unique<Generator>();

    std::size_t length;
    std::cout << "Insert the length of password: ";
    std::cin >> length;

    std::string password = generatorPass->genPassword(length);
    std::cout << "Generated password: " << password << std::endl;

    return 0;
}
