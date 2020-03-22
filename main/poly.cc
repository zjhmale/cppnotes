#include "lib/poly.h"
#include <iostream>

using namespace std;
using namespace poly::subtype;

void mock_subtype() {
    Cat cat;
    Tiger tiger;
    Ocelot ocelot;

    do_meowing(&cat);
    do_meowing(&tiger);
    do_meowing(&ocelot);
}

int main(int argc, char** argv) {
    mock_subtype();
    return 0;
}
