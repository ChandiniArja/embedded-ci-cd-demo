#include <assert.h>

int subtract(int a, int b);

int main() {
    assert(subtract(5, 3) == 2);
    assert(subtract(0, 5) == -5);
    return 0;
}
