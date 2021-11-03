#include <iostream>
#include <vector>
#include "funcs.h"

char shiftChar(char c, int rshift) {
    int orig = int(c);
    int temp;

    if(orig >= 65 && orig <= 90) {
        if(orig + rshift > 90) {
            temp = 90 - orig;
            return (char)(64+rshift - temp);
        }
        else {
            orig = int(c);
            return (char)(orig+rshift);
        }
    }
    else if (orig >= 97 && orig <= 122) {
        if(orig + rshift > 122) {
            temp = 122 - orig;
            return (char)(96+rshift - temp);
        }
        else {
            orig = int(c);
            return (char)(orig+rshift);
        }
    }
    else {
        return c;
    }
}

std::string solve(std::string encrypted_string) {
    std::string output;
    
    std::vector <double> ENG_FREQUENCIES{0.08167, 0.01492, 0.02782, 0.04253, 0.12702, 0.02228, 0.02015, 0.06094, 0.06966, 0.00153, 0.00772, 0.04025, 0.02406,  0.06749, 0.07507, 0.01929, 0.00095, 0.05987, 0.06327, 0.09056, 0.02758, 0.00978, 0.02360, 0.00150, 0.01974, 0.00074};

    for(double i : ENG_FREQUENCIES) {
        std::cout << i;
    }

    return output;
}

