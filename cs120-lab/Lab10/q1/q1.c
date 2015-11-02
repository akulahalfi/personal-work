/*******************************************************************************
Date 07/11/2014
Brief Description:
This program has the functions to find the prime numbers using the Sieve
of Eratosthenes, twin primes and Brun's Constant.
*******************************************************************************/
#include <stdio.h> /* printf */
#include <math.h> /* sqrt */
#include "sieve.h" /* TRUE, FALSE */

void sieve(int array[], int size)
{
  /*Variables*/
  int N = 0, multiple_of_N = 0;

  /*Loop through the array and set all elements to 1*/
  for(N = 0; N < size; ++N)
    array[N] = TRUE;

  /*Loop through the whole array from 0 to sqrt(size)*/
  for(N = 0; N < sqrt(size); ++N)
  {
    /*Set array[0] and array[1] to FALSE as 0 and 1 and never prime*/
    if(N == 0 || N == 1)
    {
      array[N] = FALSE;
      continue;
    }
    
    /*Cross out all the multiples of N*/
    if(array[N])
      for(multiple_of_N = N + N; multiple_of_N < size; multiple_of_N += N)
        array[multiple_of_N] = FALSE;
  }
}

int twin_primes(const int primes[], int size)
{
	/*Variables*/
  int N = 0, count = 0;

  /*Loop through primes and print of twin primes*/
  for(N = 0; N < size - 2; ++N)
    if(primes[N] == TRUE && primes[N + 2] == TRUE)
      printf("twin prime #%4i:%5i and%5i\n", ++count, N, N + 2);

  return count;
}

double brun_constant(const int primes[], int size)
{
  /*Variables*/
  int N = 0;
	double bruns = 0;

  /*Loop through primes, identify twin primes and calculate bruns constant*/
  for(N = 0; N < size - 2; ++N)
    if(primes[N] == TRUE && primes[N + 2] == TRUE)
      bruns += ((1.0 / N) + (1.0 / (N + 2)));

  return bruns;
}