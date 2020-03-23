#include "lib/poly.h"
#include <iostream>
#include <string>

using namespace std;
using namespace poly::subtype;
using namespace poly::parametric;
using namespace poly::adhoc;
using namespace poly::coercion;

void mock_subtype() {
    Cat cat;
    Tiger tiger;
    Ocelot ocelot;

    do_meowing(&cat);
    do_meowing(&tiger);
    do_meowing(&ocelot);
}

void mock_parametric() {
    cout << pmax(9, 5) << endl;

    string foo("foo"), bar("bar");
    cout << pmax(foo, bar) << endl;
}

void mock_adhoc() {
    cout << add(9, 9) << endl;
    cout << add("foo", "bar") << endl;
    cout << pmax("foo", "bar") << endl;
}

void mock_coercion() {
    moo(518);

    A a(518);
    A aa = 518;
    pmoo(a);
    pmoo(aa);
}

int main(int argc, char** argv) {
    mock_subtype();
    mock_parametric();
    mock_adhoc();
    mock_coercion();

    return 0;
}
