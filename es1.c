#include <stdio.h>

int main() {
    unsigned int a = 18437;

    for (int i = 0; i < 4; i++) {
        printf("Byte %d: %#x, Indirizzo: %p\n", i, ((unsigned char*)&a)[i], (unsigned char*)&a + i);
    }

    return 0;
}