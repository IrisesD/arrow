#include "foo.hpp"

extern "C" {
    void foo_wrapper() {
        return foo();  // Call the C++ function
    }
}