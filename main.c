#include "ZUC.h"
#include "stdio.h"

int main() {
    unsigned char iv[16] = {0x84, 0x31, 0x9a, 0xa8, 0xde, 0x69, 0x15, 0xca, 0x1f, 0x6b, 0xda, 0x6b, 0xfb, 0xd8, 0xc7,
                            0x66};
    unsigned char k[16] = {'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '1', '2', '3', '4', '5', '6'};
    Initialization(k, iv);
    int keyStreamSize = 128;
    unsigned int pks[keyStreamSize];
    GenerateKeyStream(pks, keyStreamSize);

    for (int i = 0; i < keyStreamSize; ++i) {
        printf("%d \t Ox%x\n", i, pks[i]);
    }
}
