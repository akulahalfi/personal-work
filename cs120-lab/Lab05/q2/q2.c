/*******************************************************************************
Date 03/10/2014
Brief Description:
This program find the integer at the Nth digit of a number (from the right)
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

int countDigit(int num);
int findNum(int num, int N);

int main(void)
{
  /*Variables*/
  int num = 0, N = 0;
  
  /*Scan user input*/
  scanf("%d %d", &num, &N);

  /*Negate num if it is negative*/
  if(num < 0)
    num = -num;
  
  /*Print output
   *If num has lesser digit that N, return 0. 
   *Else, find number at Nth position
   */
  printf("%d\n", countDigit(num) < N ? 0 : findNum(num, N));
  
  return 0;
}

/*This function calculate the number of digits in num*/
int countDigit(int num)
{
  /*Variables*/
  int count = 0;
  
  /*Loop stops when calculation complete i.e. num < 0*/
  do
  {
    num /= 10; /*truncate number at Units position*/
    ++count;
  }while(num > 0);
  
  return count;
}

/*This function finds the number at the Nth position*/
int findNum(int num, int N)
{
  /*Variables*/
  int i = 0, remainder = 0;
  
  /*After every loop, num will be 'sliced' from the right*/
  for(i = 0; i < N; ++i)
  {
    remainder = num % 10; /*Get number at Units position*/
    num /= 10; /*truncate number at Units position*/
  }
  
  return remainder;
}