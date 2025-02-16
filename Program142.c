#include <stdio.h>

int main() {
    int n = 5;

    // First loop iterating through each row
    for (int i = 0; i < n; i++) {

        // First inner loop to print leading white space
        for (int j = 0; j < 2 * i + 1; j++)
            printf(" ");

        // Second inner loop to print number and hollow white
        // space
        for (int k = 0; k < 2 * (n - i) - 1; k++) {
            if (k == 0 || k == 2 * (n - i) - 2 || i == 0)
                printf("%c ", k + 'A');
            else
                printf("  ");
        }
        printf("\n");
    }
    
    return 0;
}
