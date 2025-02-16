// C program to find the print
// Alphabets from (A to Z) and 
// (a to z) using do-while loop

#include <stdio.h>

int main()
{
	// Declaring the variable
	char i;

	// Display the alphabets
	printf("The Alphabets from A to Z are: \n");

	// Traversing each character
	// with the help of do while loop

	i = 'A';

	do {
		printf("%c ", i);
		i++;
	} while (i <= 'Z');

	// for lower case alphabets
	printf("\nThe Alphabets from a to z are: \n");

	i = 'a';

	do {
		printf("%c ", i);
		i++;
	} while (i <= 'z');

	return 0;
}
