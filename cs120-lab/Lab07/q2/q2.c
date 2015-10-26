/*******************************************************************************
Date 21/10/2014
Brief Description:
This program prompts user for a 3 digit number to determine if every digit
in the number has the cube property that add up to the number
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

/* Function declarations */
void print_cubes(void);

/*Don't change the main function!*/
int main(void)
{
	/* Print all of the integers with the cube property */
	print_cubes();
	return 0;
}

void print_cubes(void)
{
  /*Variables*/
  int userinput = 0, N = 0, count = 0, digits = 0, a = 0, b = 0, c = 0;
  
  /*Scan user input
   *Only 3 digit numbers are accepted
   *Re-prompt until 4 numbers with cube property have been found
   */
  do
  {
    scanf("%d", &userinput);
    
    /*Only non-negative number are accepted*/
    if(userinput >= 0)
    {
      digits = 0;
      N = userinput;
      
      /*Determine if the number contain 3 digits*/
      do
      {
        N /= 10;
        ++digits;
      }while(N > 0);
      
      /*If number has exactly 3 digits, start to check if it has cube property*/
      if(digits == 3)
      {
        /*Reset N to userinput*/
        N = userinput;
        
        /*Extract each digit in the number*/
        a = N % 10;
        b = (N /= 10) % 10;
        c = (N /= 10) % 10;
        
        /*Print if the sum of the cubes of the digits equals the userinput*/
        if((a = a * a * a) + (b = b * b * b) + (c = c * c * c) == userinput)
        {
          printf("%d has the cube property. ", userinput);
          printf("(%d + %d + %d)\n", c, b, a);
          ++count; /*Increment when cube property found*/
        }
      }
    }
  } while(count < 4);
}