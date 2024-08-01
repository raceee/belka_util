#include <stdio.h>

void vecAdd(float* A_h, float* B_h, float* C_h, int n) {
    for (int i = 0; i < n; ++i) {
        C_h[i] = A_h[i] + B_h[i];
    }
}

int main() {
    const int n = 5;
    float A_h[5] = {1, 2, 3, 4, 5};
    float B_h[5] = {1, 2, 3, 4, 5};
    float C_h[5];

    vecAdd(A_h, B_h, C_h, n);

    for (int i = 0; i < n; ++i) {
        printf("%f ", C_h[i]);
    }
    printf("\n");

    return 0;
}