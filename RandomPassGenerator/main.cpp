#include <iostream>
#include <random>
#include <string>
#include <string_view>
#include <ctime>

std::string genPassword(const size_t length) {
    const std::string_view characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&&*()_+";
    std::string password;

    std::mt19937 generator(std::time(0));
    std::uniform_int_distribution<int> distribution(0, characters.size() - 1);

    for (std::size_t i = 0; i < length; ++i) {
        std::size_t index = distribution(generator);

        password += characters[index];
    }

    return password;
}


int main()
{
    std::size_t length;
    std::cout << "Insert the length of password: ";
    std::cin >> length;

    std::string password = genPassword(length);
    std::cout << "Generated password: " << password << std::endl;

    return 0;
}
