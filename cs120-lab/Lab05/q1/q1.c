/*******************************************************************************
Date 03/10/2014
Brief Description:
This program is an experiment to get the exact output as desired using specifier
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/
#include <math.h> /*sin, cos, tan, atan*/

int main(void)
{
  /*Variables*/
  float i1 = .0f, i2 = .0f, i3 = .0f;
  
  /*Scan user input*/
  printf("Enter 3 numbers between 0 and 9.999: \n");
  scanf("%f %f %f", &i1, &i2, &i3);
  
  /*Print to screen
  *
  * %6s leaves 6 whitespaces
  * It is a C-style string specifier hence require the ""
  * %.5f ensure that the floating point number have 5 digits after dp
  * It is right justified
  * %9.3f ensure that the floating point number have 3 digits after dp
  * Has total of 9 characters (1 before dp, 3 after dp, and 1 for dp itself)
  * Remaining 4 characters are the 4 spaces preceeding the number
  * It is right justified
  */
  printf("Number%6ssin%6scos%6stan%6satan\n", "", "", "", "");
  printf("-------------------------------------------\n");
  printf("%.5f%9.3f%9.3f%9.3f%9.3f\n", i1, sin(i1), cos(i1), tan(i1), atan(i1));
  printf("%.5f%9.3f%9.3f%9.3f%9.3f\n", i2, sin(i2), cos(i2), tan(i2), atan(i2));
  printf("%.5f%9.3f%9.3f%9.3f%9.3f\n", i3, sin(i3), cos(i3), tan(i3), atan(i3));
  
  return 0;
}