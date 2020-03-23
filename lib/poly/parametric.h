#pragma once

namespace poly::parametric {
    // Parametric is also called compile-time polymorphism
    // template<class T>
    template<typename T>
        T pmax(T a, T b) {
            return a > b ? a : b;
        }
}
