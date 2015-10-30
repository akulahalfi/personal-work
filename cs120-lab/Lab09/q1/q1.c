/*******************************************************************************
Date 31/10/2014
Brief Description:
This program prompts user for a non-negative number for the depth of a well
to compute how many days will it take for a frog to jump out of the well.

   Day         Night
#1 Ascend 10ft Fall back 2ft
#2 Ascend 8ft  Fall back 2.5ft
#3 Ascend 7ft  Fall back 2.7ft
#4 Ascend 5ft  Fall back 3ft
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

int daysTravel(double depth);

int main(void)
{
  /*Variables*/
  double depth;
  
  /*Scan user input*/
  scanf("%lf", &depth);
  
  /*Print output*/
  printf("%d\n", daysTravel(depth));
  
  return 0;
}

int daysTravel(double depth)
{
  int day = 1;
  
  if(((depth -= 10) < 0 ? day : ++day) > 1)
    if(((depth -= 6) < 0 ? day : ++day) > 2)
      if(((depth -= 4.5) < 0 ? day : ++day) > 3){}
  
  return day;
}