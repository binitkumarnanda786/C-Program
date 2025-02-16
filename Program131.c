#include <stdio.h>

int main() {
    int n = 5;

    // First outer loop to iterate through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        // Assigning level according to row number
        int l;
        if (i < n) l = 2 * i + 1;
        else  l = 2 * (2 * n - i) - 3;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < l; j++)
            printf(" ");

        // Second inner loop to print star * and inner
        // whitespaces
        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1 || i == 0
                || i == 2 * n - 2)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
