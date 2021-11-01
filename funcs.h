#pragma once
#include <string>

char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
double distance(std::vector<double> first, std::vector<double> second);
std::string solve(std::string encrypted_string);