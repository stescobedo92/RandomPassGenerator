#include "pch.h"

TEST(GeneratePasswordTest, LengthOfPassword) {
    std::unique_ptr<Generator> generatorPass = std::make_unique<Generator>();
	std::string password = generatorPass->genPassword(12);

	EXPECT_EQ(12, password.size());
}

TEST(CheckPasswordCharactersTest, AllowedCharacters) {
    std::unique_ptr<Generator> generatorPass = std::make_unique<Generator>();
    std::string password = generatorPass->genPassword(15);
    const std::string caracteresPermitidos = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&&*()_+";

    for (char c : password) {
        EXPECT_NE(std::string::npos, caracteresPermitidos.find(c));
    }
}