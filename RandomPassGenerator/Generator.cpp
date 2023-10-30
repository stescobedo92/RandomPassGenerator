#include "Generator.h"

Generator::Generator() {

}

std::string Generator::genPassword(const std::size_t length) {
    const std::string characters = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&&*()_+";
    std::string password;

    std::mt19937 generator(std::time(0));
    std::uniform_int_distribution<int> distribution(0, characters.size() - 1);

    for (std::size_t i = 0; i < length; ++i) {
        std::size_t index = distribution(generator);

        password += characters[index];
    }

    return password;
}
