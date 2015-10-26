/*******************************************************************************
Date 10/10/2014
Brief Description:
This program prompts user for a number to display a pattern of stars
in an inverted pyramid shape
*******************************************************************************/
#include <stdio.h>

int main(void)
{
  /*Variables*/
  int input = 0, N = 0, row = 0, stars = 0, spaces = 0;
  
  /*Scan user input
   *Re-prompt user until the input is non-negative
   */
  do
  {
    scanf("%d", &input);
  }while(input < 0);
  
  /*Print star patterns*/
  for(row = 0, N = input; row <= input; ++row, --N)
  {
    stars = N * 2 + 1;
    spaces = row;
    
    /*Add whitespaces*/
    while(spaces > 0)
    {
      printf(" ");
      --spaces;
    }
    
    /*Start printing stars*/
    while(stars > 0)
    {
      printf("*");
      --stars;
    }
    
    /*Go to next line*/
    printf("\n");
  }
  
  return 0;
}