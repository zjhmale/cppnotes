#pragma once

#include <iostream>

using namespace std;

namespace poly::coercion {
    class A {
        int foo;

        public:
            // Any integer can be cast into an A object implicitly
            // But this would be impossible if we made constructor of A `explicit`
            // explicit A(int ffoo): foo(ffoo) {}
            A(int ffoo): foo(ffoo) {}
            void giggidy() {
                cout << this->foo << endl;
            }
            // conversion operator
            operator int() const {
                return this->foo;
            }
    };

    void moo(A a) {
        a.giggidy();
    }

    void pmoo(int a) {
        cout << a << endl;
    }
}
