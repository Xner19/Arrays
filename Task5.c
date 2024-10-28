#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            int r = rand() % 256;
            int g = rand() % 256;
            int b = rand() % 256;

            int grayscale = (int)(0.299 * r + 0.587 * g + 0.114 * b);

            printf("Pixel (%d, %d): R=%d, G=%d, B=%d Grayscale=%d\n", i, j, r, g, b, grayscale);
        }
    }

    return 0;
}

