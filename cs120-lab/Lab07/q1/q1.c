/*******************************************************************************
Date 21/10/2014
Brief Description:
This program prompts user for a non-negative number to construct an
hourglass pattern
*******************************************************************************/
#include <stdio.h> /*scanf, printf*/

int main(void)
{
  /*Variables*/
  int input = 0, N = 0, row = 0, base = 0, spaces = 0;
  
  /*Scan user input
   *Re-prompt user until a non-negative number is input
   */
  do{
    scanf("%d", &input);
  }while(input < 0);
  
  /*Print hourglass pattern
   * 1. Print top base
   * 2. Print middle of hourglass (if not 0)
   * 3. Print bottom base
   */
  
  /*CASE 1: Print top base*/
  for(base = input * 2 + 1; base > 0; --base)
    printf("*");
  printf("\n");
  
  /*CASE 2: Print middle of hourglass (if not 0)*/
  if(input != 0)
  {
    /*Print top part*/
    for(row = 1, N = input - 1; row < input; ++row, --N)
    {
      /*Left indent*/
      for(spaces = row; spaces > 0; --spaces)
        printf(" ");
      printf("*");
      /*Whitespace in hourglass*/
      for(spaces = N * 2 - 1; spaces > 0; --spaces)
        printf(" ");
      printf("*\n");
    }
    
    /*Print middle part*/
    for(spaces = input; spaces > 0; --spaces)
      printf(" ");
    printf("*\n");
    
    /*Print bottom part*/
    for(row = input - 1, N = 0; row > 0; --row, ++N)
    {
      /*Left indent*/
      for(spaces = row; spaces > 0; --spaces)
        printf(" ");
      printf("*");
      /*Whitespace in hourglass*/
      for(spaces = N * 2 + 1; spaces > 0; --spaces)
        printf(" ");
      printf("*\n");
    }
  }
  
  /*CASE 3: Print bottom base*/
  for(base = input * 2 + 1; base > 0; --base)
    printf("*");
  printf("\n");
  
  return 0;
}