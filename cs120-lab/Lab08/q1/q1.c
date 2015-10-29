/*******************************************************************************
Date 24/10/2014
Brief Description:
This program inputs studentID and grades, and performs calculation to
compute the number of students that pass/fail and their avg score
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/
#include <math.h> /*fabs*/

int main(void)
{
  /*Variables*/
  int ID = 0, pass = 0, fail = 0;
  const float threshold = 0.00001f, passing_grade = 5.0f;
  float grade = .0f, pass_avg = .0f, fail_avg = .0f;
  
  /*Scan user input
   *Keep looping forever
   */
  do
  {
    scanf("%d %f", &ID, &grade);
    
    /*Loop will go on forever but will break when ID and grade is 0 0*/
    if(ID == 0 && (fabs(grade) < threshold))
      break;
    
    /*Determine if student passed or failed*/
    if(ID >= 0 && grade >= passing_grade)
    {
      pass_avg += grade;
      ++pass;
    }
    else
    {
      fail_avg += grade;
      ++fail;
    }
  } while (1);
  
  /*Print*/
  printf("%d %.2f\n", pass, pass_avg / pass);
  printf("%d %.2f\n", fail, fail_avg / fail);
  
  return 0;
}