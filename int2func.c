#include <stdio.h>

int main() {
    void (*fun_ptr)() = 42;
    (*fun_ptr)();
}
