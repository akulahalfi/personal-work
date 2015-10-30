/******************************************************************************
Date    09/10/2014

Brief Description:
This file contains the implementation function for main which calculates PI
using a quarter circle and using a series
******************************************************************************/
#include <math.h> /*sqrt*/

/* Calculates PI using a quarter circle */
double circle_pi(int rectangles)
{
  /*Variables*/
  int i = 0;
  const double radius = 2.0;
  double width = 0, half_width = 0, height = 0, pi = 0;

  /*Width of each rectangle*/
  width = radius / rectangles;

  /*Loop through every rectangle*/
  for(i = 0; i < rectangles; ++i)
  {
    /*Calculate the midpoint of each rectangle*/
    half_width = (width * i) + (width / 2);
    /*Calculate height*/
    height = sqrt((radius * radius) - (half_width * half_width));
    /*Calculate PI*/
    pi += height * width;
  }

  return pi;
}

/* Calculates PI using a series */
double leibniz_pi(int iterations)
{
  /*Variables*/
  int i = 0;
  double quarter = 0, denom = 1;

  /*Loop through whole iteration*/
  while(i < iterations)
  {
    if(i % 2 == 0) /*If even number, add fraction (1 / denom)*/
      quarter += (1 / denom);
    else /*If odd number, subtract fraction (1 / denom)*/
      quarter -= (1 / denom);

    denom += 2; /*Reassign denominator by adding 2*/
    ++i; /*Go to next iteration*/
  }

  return (quarter * 4);
}