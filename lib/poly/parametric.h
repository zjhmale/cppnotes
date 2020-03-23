#pragma once

#include <iostream>
using namespace std;

namespace poly::parametric {
    // Parametric is also called compile-time polymorphism
    // template<class T>
    template<typename T>
    T pmax(T a, T b) {
        return a > b ? a : b;
    }

    // template specialization is also Ad-hoc polymorphism
    template<>
    const char* pmax(const char* a, const char* b) {
        return strcmp(a, b) > 0 ? a : b;
    }
}
