/*******************************************************************************
Date 24/10/2014
Brief Description:
This program scan for a real number and a positive index n of a desired digit.
It will then find the nth digit after the decimal point of the real number.
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

int main(void)
{
  /*Variables*/
  int index = 0, i = 0;
  float num = .0f;
  
  /*Scan user input*/
  scanf("%f %d", &num, &index);
  
  /*Negate if num is negative*/
  if(num < 0)
    num = -num;
  
  /*Loop for nth digit after the decimal point of num*/
  for(i = 0; i < index; ++i)
    num *= 10;
  
  /*Print the number at the index*/
  printf("%d\n", (int)num % 10);
  
  return 0;
}