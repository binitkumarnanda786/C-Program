// C program to find the prime numbers
// between a given interval using Sieve of Eratosthenes
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void SieveOfEratosthenes(int srt, int n)
{
	// Create a boolean array "prime[srt to n]" and
	// initialize all entries it as true. A value in
	// prime[i] will finally be false if i is Not a prime,
	// else true.
	bool prime[n + 1];
	memset(prime, true, sizeof(prime));
	prime[0] = false;
	prime[1] = false;

	for (int p = 2; p * p <= n; p++) {
		// If prime[p] is not changed, then it is a prime
		if (prime[p] == true) {
			// Update all multiples of p greater than or
			// equal to the square of it numbers which are
			// multiple of p and are less than p^2 are
			// already been marked.
			for (int i = p * p; i <= n; i += p)
				prime[i] = false;
		}
	}

	// Print all prime numbers
	for (int p = srt; p <= n; p++)
		if (prime[p])
			printf("%d ", p);
}

// Driver Code
int main()
{
	int srt = 1;
	int end = 10;
	SieveOfEratosthenes(srt, end);
	return 0;
}


