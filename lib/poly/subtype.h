#pragma once

#include <iostream>

using namespace std;

namespace poly::subtype {
    // Subtype polymorphism is also coercion polymorphism
    // because the derived class gets converted into base class type
    class Felid {
        public:
            // Pure virtual function for subtype polymorphism
            virtual void meow() = 0;
    };

    class Cat: public Felid {
        public:
            void meow() {
                cout << "Cat meow" << endl;
            }
    };

    class Tiger: public Felid {
        public:
            void meow() {
                cout << "Tiger meow" << endl;
            }
    };

    class Ocelot: public Felid {
        public:
            void meow() {
                cout << "Ocelot meow" << endl;
            }
    };

    // Subtype is also called runtime polymorphism
    // Parent pointer point to child object
    void do_meowing(Felid *cat) {
        cat->meow();
    }
}
