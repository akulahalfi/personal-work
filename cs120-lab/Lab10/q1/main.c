#include <stdio.h> /* printf */
#include <stdlib.h> /*malloc,free*/
#include "sieve.h" /* sieve, twin_primes, brun_constant, TRUE, FALSE */

/*#define SIZE 101  The size of the array */

int main(void)
{
	int SIZE; /* The size of the array */	
	int *array; /* The array of 0's and 1's */
	int count = 0; /* Number of primes/twins found */
	double bruns; /* Brun's Constant */
	int i; /* Loop counter */
	
	scanf("%d",&SIZE);
	array = (int *) malloc((SIZE+1)*sizeof(int)); 
	
	/* Mark prime/non-prime numbers using the array */
	sieve(array, SIZE+1);
	
	/*Count the number of primes and print each one */
	for(i = 0; i < SIZE+1; i++)
	{
		/*If TRUE, this marks a prime number */
		if(array[i] == TRUE)
		{
			count++;
			#if 1
				printf("Prime #%04i:  %4i\n", count, i);
			#endif
		}
	}
	
	/* Print the total numberof primes that were found */
	printf("%i primes found between 0 and %i.\n", count, SIZE);
	
	/* Find the number of twin primes and print it */
	count = twin_primes(array, SIZE+1);
	printf("%i twin primes found between 0 and %i.\n", count, SIZE);
	
	/* Get Brun's Constant and print it */
	bruns = brun_constant(array, SIZE+1);
	printf("Brun's constant with %i twin primes is %1.12f.\n", count, bruns);
	
	free(array);
	return 0;
}
