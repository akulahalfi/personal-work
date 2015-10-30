/*******************************************************************************
Date    10/02/2014
Brief Description:
This program calculates the marathon distance of miles and yards to kilometers
*******************************************************************************/
#include <stdio.h> /* printf */

#define YARDS_PER_MILE 1760
#define KILOS_PER_MILE 1.609

/* A marathon is 26 miles, 385 yards               */
/* Prints the distance of a marathon in kilometers */
int main(void)
{
  /*Variables*/
  const int miles = 26, yards = 385;
  double kilometers = 0;

  /*Compute kilometers*/
  kilometers = (miles + (double)yards / YARDS_PER_MILE) * KILOS_PER_MILE;
  
  /*Print kilometers*/
  printf("A marathon is %f kilometers\n", kilometers);
 
  return 0;
}