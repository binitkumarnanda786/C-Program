#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop for rows
    for (int i = 1; i <= n; i++) {

        // First inner loop for leading white spaces
        for (int j = 0; j < n - i; j++)
            printf(" ");

        // Coefficient
        int C = 1; 

        // Second inner loop for printing numbers
        for (int k = 1; k <= i; k++) {
            printf("%d ", C);
            C = C * (i - k) / k;
        }
        printf("\n");
    }
    return 0;
}
