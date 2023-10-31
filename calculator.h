#ifndef CALCULATOR_H
#define CALCULATOR_H

#include "token.h"
#include "token_stream.h"

class Calculator {
public:
    Calculator();

    Token getToken();

    void putBackToken(Token t);

    double expression();

    void error(const std::string &s);

    double fac(double num);


private:
    TokenStream ts;
    double term();
    double primary();
};

#endif // CALCULATOR_H