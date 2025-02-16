#include <stdio.h>

int main() {
    int n = 5;
    for (int i = 1; i <= n; i++) {
      
          // Print leading whitespaces
        for (int j = 1; j <= n - i; j++)
            printf("  ");
      
        for (int k = 1; k <= 2 * i - 1; k++) {
          
            // Print alphabet for first or last position in the row
              // Print whitespace for the rest
            if (k == 1 || k == 2 * i - 1 || i == n)
                printf("%c ", k - 1 + 'A');
            else
                printf("  ");
        }
        printf("\n");
    }
    return 0;
}
