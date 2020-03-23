#include "lib/ownership.h"

using namespace ownership::move;
using namespace ownership::pf;

class R {};

void mock_rvalue() {
    R r;
    R& lvaluef = r;
    // R& rvaluef= R(); // Illegal rvalue (temporarily value) can not bind to lvalue reference
    const R& clvaluef = R();
    R&& rvaluef = R();
    // R&& rvaluef = r; // Illegal lvalue can not bind to rvalue reference
}

void mock_move() {
    M m1;
    cout << m1.get_m() << endl;
    M m2 = std::move(m1);
    cout << m1.get_m() << endl;
    M m22 = m1;

    M m3{std::move(m1)};
    M m33(std::move(m1));
    m2 = std::move(m1);
    m2 = m3;
}

void mock_perfect_fowarding() {
    X x;
    f(x);
    f(X());
    // h(x);
    h(X());
    // hh(x);
    hh(X());
}

int main(int argc, char** argv) {
    mock_rvalue();
    mock_move();
    mock_perfect_fowarding();

    return 0;
}
