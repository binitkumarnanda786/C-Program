#include <stdio.h>

int main() {
    int n = 5;

    // First loop for printing rows
    for (int i = 0; i < n; i++) {

        // Second loop for printing number in each rows
        for (int j = 0; j <= i; j++)
            printf("%d ", j + 1);
        printf("\n");
    }
    return 0;
}
