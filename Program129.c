#include <stdio.h>

int main() {
    int n = 5;

    // First outer loop to print each row
    for (int i = 0; i < 2 * n - 1; i++) {
      
        // Assigning values to the level according to
        // the row number
        int l;
        if (i < n)
            l = 2 * (n - i) - 1;
        else
            l = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < l; j++)
            printf(" ");

        // Second inner loop to print star * and inner
        // whitespaces
        for (int k = 0; k < 2 * n - l; k++) {
            if (k == 0 || k == 2 * n - l - 1)
                printf("%d ", k + 1);
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
