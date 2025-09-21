#include <iostream>

using namespace std;

class symbol {
    char s;
public:

    symbol(char c) { s=c; }
    char pull() { return s; }
};

