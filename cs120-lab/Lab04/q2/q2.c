/*******************************************************************************
Date 26/09/2014
Brief Description:
This program takes in 2 floating point numbers and find the remainder of their 
division
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/
#include <math.h> /*fmodf*/

float fmodf(float, float);

int main(void)
{
  /*Variables*/
  float a = .0f, b = .0f;
  
  /*Scan user input*/
  scanf("%f %f", &a, &b);
  
  /*Print result
   *Fmodf will take in 2 floating point and return the remainder of the division
   */
  printf("%.2f\n", fmodf(a, b));

  return 0;
}