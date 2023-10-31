#include "token_stream.h"

TokenStream::TokenStream() : full(false), buffer() {}

Token TokenStream::get() {
    if (full) {
        full = false;
        return buffer;
    }

    char ch;
    std::cin >> ch;
    switch (ch) {
        case '=':
        case 'q':
        case '(':
        case ')':
        case '+':
        case '-':
        case '*':
        case '/':
        case '!':
            return Token{ch};
        case '.':
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9': {
            std::cin.putback(ch); // return token to Istream
            double val;
            std::cin >> val;
            return Token{'8', val};
        }
        default:
            perror("Bad Entry "); // You can access the error function as it's a free function
    }
}

void TokenStream::putBack(Token t) {
    if (full) perror("Buffer is full"); // You can access the error function as it's a free function
    buffer = t;
    full = true;
}