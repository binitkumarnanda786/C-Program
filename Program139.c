#include <stdio.h>

int main() {
    int n = 5; 
  
    // Loop to print each row
    for (int i = 0; i < n; i++) {
      
          // Print leading spaces for alignment
        for (int j = 0; j < i; j++)
            printf("  ");
      
          // Print star * and inner whitespaces
        for (int j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 || i == 0)
                printf("%c ", j + 'A');
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}
