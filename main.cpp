#include <iostream>
#include "calculator.h"

int main() {
    Calculator calculator;

    //Calculator calculator;
    std::cout << "==================================" << std::endl;
    std::cout << "||\tSIMPLE CALCULATOR\t||\n";
    std::cout << "==================================" << std::endl;

    std::cout << "Type q= to Exit \n"
              << "Enter your Expressions followed by = \n ";
    double val;
    while (std::cin) {
        Token t = calculator.getToken();
        if (t.type == 'q') {
            std::cout << "Program terminated \n";
            break;
        }
        if (t.type == '=') {
            std::cout << val << std::endl;
        } else {
            calculator.putBackToken(t);
        }
        val = calculator.expression();
    }
    return 0;
}