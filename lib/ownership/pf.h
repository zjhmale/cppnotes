#pragma once

#include <iostream>

using namespace std;

namespace ownership::pf {
    class X {};

    void g(X&& t) {
        cout << "rvalue called" << endl;
    }
    void g(X& t) {
        cout << "lvalue called" << endl;
    }

    template<typename T>
    void f(T&& t) {
        g(std::forward<T>(t));
    }

    void h(X&& t) {
        g(t);
    }

    void hh(X&& t) {
        g(std::forward<X>(t));
    }
}
