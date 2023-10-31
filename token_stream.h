#ifndef TOKEN_STREAM_H
#define TOKEN_STREAM_H

#include "token.h"
#include <iostream>

class TokenStream {
public:
    TokenStream();

    Token get();
    void putBack(Token t);

private:
    bool full;
    Token buffer;
};

#endif // TOKEN_STREAM_H