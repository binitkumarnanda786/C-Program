#include <stdio.h>

int main() {
    int n = 5; 

    // Outer loop for printing rows
    for (int i = n; i >= 1; i--) {

        // Inner loop for printing 
        // the character in each row
        for (int j = 0; j < i; j++)
            printf("%c ", 'A' + j);
        printf("\n");
    }

    return 0;
}
