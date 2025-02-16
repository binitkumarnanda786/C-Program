#include <stdio.h>

int main() {
    int n = 5;

    // Outer loop to print each row
    for (int i = 1; i <= n; i++) {

        // Print leading white spaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");

        // Print numbers for first or last column, or last row
        // print whitespaces for the rest
        for (int k = 1; k <= i; k++) {
            if (k == 1 || k == i || i == n)
                printf("%d ", k);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
