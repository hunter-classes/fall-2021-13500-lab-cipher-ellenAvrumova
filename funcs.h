#pragma once
#include <string>

std::string solve(std::string encrypted_string);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
double distance(std::vector<double> first, std::vector<double> second);