#pragma once

#include <string>

using namespace std;

namespace poly::adhoc {
    // Ad-hoc is also called overloading
    int add(int a, int b) {
        return a + b;
    }

    string add(const char* a, const char* b) {
        string result(a);
        result += b;
        return result;
    }
}
