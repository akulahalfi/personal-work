/*******************************************************************************
Date 31/10/2014
Brief Description:
This program prompts user for 3 sets of number.
First number will compute the all the prime numbers within that range of number
Second & third number are range where program will compute the conjecture
of min & max prime number that add up to be an even number within the range
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

#define FALSE 0
#define TRUE 1

int is_prime(int number)
{	
  /*Variables*/
  int divisor = 0;
  
  /*1, and anything lesser than 1 can never be a prime*/
  if(number <= 1 )
    return FALSE;

  /*Divide number by each of the numbers between 2 and the sqrt of the number*/
  for(divisor = 2; divisor * divisor <= number; ++divisor)
    if(number % divisor == 0) /*If remainder is ever 0, number is not a prime*/
      return FALSE; 
  
  /*If number doesn't match the cases above, it is a prime*/
	return TRUE; 
}

void conjecture(int low, int high)
{
  /*Variables*/
  int min = 0, max = 0;
  
  /*Ensure that the range is even*/
  if(low % 2 != 0)
    ++low; /*If low is odd, add 1 to it*/
  if(high % 2 != 0)
    --high; /*If high is odd, subtract 1 from it*/
  
  /*Ensure that low starts from 4*/
  if(low < 4)
    low = 4;
  
  do
  {
    min = 2;
    max = 0;
    
    /*Extract min and max prime number*/
    for(min = 2; min <= high; ++min)
    {
      if(is_prime(min) && is_prime(low - min))
      {
        max = low - min;
        break;
      }
    }   
    /*Print output*/
    printf("%3i = %3i + %3i\n", low, min, max);
    
    /*Increment low evenly*/
    low += 2;
  }while(low <= high);
}