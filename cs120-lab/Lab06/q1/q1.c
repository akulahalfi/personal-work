/*******************************************************************************
Date 10/10/2014
Brief Description:
This program prompts user for a number to perform calculation for
Fibonacci number and quotient using a for loop
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

int main(void)
{
  /*Variables*/
  int N = 0, i = 0;
  int fib = 0;  /*F(N) - The current Fibonacci Number*/
  int prev = 1; /*F(N-1) - The previous Fibonacci Number*/
  int last = 0; /*F(N-2) - The Fibonacci Number before previous*/
  double quotient = 0; /*Q(N) - FIbonacci quotient*/
  
  /*Scan user input
   *Ensure values are between 1 and 46
   */
  do
  {
    printf("Enter the Fibonacci number to calculate.\n");
    printf("The number must be an integer between 2 and 46. ");
    printf("(Enter 1 to quit): ");
    scanf("%d", &N);    
  }while(N < 1 || N > 46);

  /*If user input 1, program terminates*/
  if(N == 1)
    return 0;
  
  /*Print Fibonacci Header*/
  printf("\n%5sFibonacci%6sFibonacci\n", "", "");
  printf("N%4snumber%9squotient\n", "", "");
  printf("--------------------------------------\n");
  
  /*Print Fibonacci Table*/
  for(i = 0; i <= N; ++i)
  { 
    /*For all N > 1*/
    if(i > 1)
    {
      /*F(N) = F(N-1) + F(N-2) for all N > 1*/
      fib = prev + last;
      /*Q(N) = F(N) / F(N-1) for all N > 1*/
      quotient = (double)fib / (double)prev;
      last = prev;
      prev = fib;
      printf("%-5d%-15d%-20.16f\n", i, fib, quotient);
    }
    else /* Quotient is N/A for Fib0 and Fib1 */
    {
      fib = i;
      printf("%-5d%-15d%s\n", i, fib, "N/A");
    }
  }
  
  return 0;
}