/**
 * Author: Ellen Avrumova
 * Course: CSCI-135
 * Instructor: Tong Yi & Mike Zamansky
 * Assignment: Lab Cipher
 * This is the header file for Lab Cipher
*/

#pragma once
#include <string>

std::string solve(std::string encrypted_string);
char shiftChar(char c, int rshift);
std::string encryptCaesar(std::string plaintext, int rshift);
double distance(std::vector<double> first, std::vector<double> second);