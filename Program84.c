#include <stdio.h>

int main() {
    int n = 5;

    // First outer loop to iterator through each row
    for (int i = 0; i < 2 * n - 1; i++) {

        // Assigning values to the comparator according to
        // the row number
        int comp;
        if (i < n) comp = 2 * (n - i) - 1;
        else comp = 2 * (i - n + 1) + 1;

        // First inner loop to print leading whitespaces
        for (int j = 0; j < 2 * n - comp - 1; j++)
            printf(" ");

        // Second inner loop to print stars *
        for (int k = 0; k < comp; k++)
            printf("%d ", k + 1);
        printf("\n");
    }
    return 0;
}
