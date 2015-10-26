/*******************************************************************************
Date 26/09/2014
Brief Description:
This program is an experiment to see the output of literatls that start with 0
i.e. Octal integers (Base 8)
*******************************************************************************/
#include <stdio.h> /*scanf, printf*/

/*
When 0123 is type into input, the output returns 83.
The prefix 0 tell the compiler to treat the digits after 0 as octals
i.e. it can only contain digits between 0 to 7, and must begin with 0.

An example calculation is as follow:
(1 * 8^2) + (2 * 8^1) + (3 * 8^0)
= 64 + 16 + 3
= 83
*/
int main(void)
{
  int x = 0;
  scanf("%i", &x);
  printf("%i", x);

  return 0;
}