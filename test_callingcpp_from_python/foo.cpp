#include <iostream>

void foo() {
    std::cout << "Hello from libfoo!" << std::endl;
}

extern "C" {
    // Wrapper function to call the bar method
    void bar_wrapper() {
        return foo();
    }
}