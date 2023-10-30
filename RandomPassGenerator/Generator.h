#pragma once
#include <string>
#include <random>
#include <string>
#include <ctime>

class Generator
{
public:
	explicit Generator();
	std::string genPassword(const size_t length);
};

