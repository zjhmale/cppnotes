#pragma once

#include <iostream>

using namespace std;

namespace ownership::move {
    class M {
        int m;
        // Move semantic is only about resources (pointer, file handler)
        // Primitives does not have move semantic
        // int a = 1
        // int&& b = std::move(a) is equivalent with int&b = a;
        int* ms;
        public:
            int get_m() {
                return this->m;
            }
            // M() { M(10); } // This will create a temporary unused M which will be desctructed immediately
            M(): M(10) {}
            M(int mm): m(mm) {
                this->ms = new int[this->m];
                cout << "Constructor called" << endl;
            }
            ~M() {
                delete[] this->ms;
                cout << "Destructor called" << endl;
            }
            M(const M& other) {
                this->m = other.m;
                this->ms = new int[this->m];
                std::copy(other.ms, other.ms + other.m, this->ms);
                cout << "Copy constructor called" << endl;
            }
            M& operator=(const M& other) {
                if (this == &other) return *this;
                delete[] this->ms;
                this->m = other.m;
                this->ms = new int[this->m];
                std::copy(other.ms, other.ms + other.m, this->ms);
                cout << "Copy operator called" << endl;
                return *this;
            }
            M(M&& other) {
                this->m = other.m;
                this->ms = other.ms;
                other.m = 0;
                other.ms = nullptr;
                cout << "Move constructor called" << endl;
            }
            M& operator=(M&& other) {
                if (this == &other) return *this;
                delete[] this->ms;
                this->m = other.m;
                this->ms = other.ms;
                other.m = 0;
                other.ms = nullptr;
                cout << "Move operator called" << endl;
                return *this;
            }
    };
}
