/*******************************************************************************
Date 26/09/2014
Brief Description:
This program takes in 2 integers and calculate its greatest common divisor(GCD)
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

unsigned int GCD(int a, int b);

int main(void)
{
  /*Variables*/
  int a = 0, b = 0;
  
  /*Scan user input*/
  scanf("%d %d", &a, &b);
  
  /*Print output*/
  printf("%d\n", GCD(a, b));
  
  return 0;
}

unsigned int GCD(int a, int b)
{
  /*tmp value that will hold value of 'a'*/
  int tmp = 0;
  
  /*Check if either a or b is 0*/
  if(a == 0)
    return b;
  if(b == 0)
    return a;
  
  /*loop stops when there's no more remainder*/
  while(a != 0)
  {
    tmp = a; /*tmp store value of 'a'*/
    a = b % a; /*assign 'a' the remainder of b/a */
    b = tmp; /*reassign 'b' to tmp*/
  }
  
  /*negate if number is negative and return to calling function*/
  return (b < 0 ? -b : b);
}