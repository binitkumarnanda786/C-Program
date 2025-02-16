#include <stdio.h>
int main() {
    int n = 5;

    // Outer loop to iterate through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        // Assigning values to the comp to distinguish
          // between first half and second half
        int comp;
        if (i < n)
            comp = 2 * (n - i) - 1;
        else
            comp = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < comp; j++)
            printf(" ");

        // Second inner loop to print alphabet
        for (int k = 0; k < 2 * n - comp; k++)
            printf("%c ", k + 'A');
        printf("\n");
    }
    return 0;
}
