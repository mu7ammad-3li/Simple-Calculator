#include "calculator.h"
#include <cmath>

Calculator::Calculator() : ts() {}

Token Calculator::getToken() {
    return ts.get();
}

void Calculator::putBackToken(Token t) {
    ts.putBack(t);
}

double Calculator::expression() {
    double left = term();
    Token t = getToken();
    while (true) {
        switch (t.type) {
            case '+':
                left += term();
                t = getToken();
                break;
            case '-':
                left -= term();
                t = getToken();
                break;
            default:
                putBackToken(t);
                return left;
        }
    }
}

double Calculator::term() {
    double left = primary();
    Token t = getToken();
    while (true) {
        switch (t.type) {
            case '*':
                left *= primary();
                t = getToken();
                break;
            case '/': {
                double d = primary();
                if (d == 0) error("Division by Zero is Infinite. ");
                left /= d;
                t = getToken();
                break;
            }
            case '!':
                return fac(left);
            case '%': {
                double d = primary();
                if (d == 0)
                    error("Cannot divide by 0 ");
                left = fmod(left, d);
                t = getToken();
                break;
            }
            default:
                putBackToken(t);
                return left;
        }
    }
}

double Calculator::primary() {
    Token t = getToken();
    switch (t.type) {
        case '(': {
            double d = expression();
            t = getToken();
            if (t.type != ')') {
                error("')' is expected. ");
            }
            return d;
        }
        case '8':
            return t.value;
        default:
            error("Primary is expected. ");
    }
}
double Calculator::fac(double anum){
    if (anum == 1) return 1;
    else return anum * fac(anum -1 );
}
void Calculator::error(const std::string &s) {
    throw std::runtime_error(s);
};