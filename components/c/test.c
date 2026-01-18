#include <assert.h>

int multiply(int a, int b);

int main() {
    assert(multiply(3, 4) == 12);
    assert(multiply(-2, 3) == -6);
    return 0;
}
