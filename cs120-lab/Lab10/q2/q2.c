/*******************************************************************************
Date 07/11/2014
Brief Description:
This program compare two inputs(a and b) to check if a appears in b 
If found, it returns the index where a is found in b. Else it return "Not Found"
*******************************************************************************/
#include <stdio.h> /*printf, scanf*/

int search(int a, int b);

int main(void)
{
  /*Variables*/
  int result = 0;
  unsigned int a = 0, b = 0;
  
  /*Scan user input*/
  scanf("%u %u", &a, &b);
  
  /*Function call*/
  result = search(a, b);
  
  /*Print result*/
  result >= 0 ? printf("%d\n", result) : printf("Not Found\n");
  
  return 0;
}

int search(int a, int b)
{
  /*Variables*/
  int index = 0;
  int tmp_a = a, len_a = 0, pow_a = 1;
  int tmp_b = b, len_b = 0, pow_b = 1;
  
  /*Preliminary check: If A is bigger than B, it will definitely have no match*/
  if(a > b)
    return -1;
  
  /*Preliminary check: If A equals B, return 0*/
  if(a == b)
    return 0;
  
  /*Find length and pow of a*/
  while(tmp_a)
  {
    tmp_a /= 10;
    pow_a *= 10;
    ++len_a;
  }
  
  /*Find length and pow of b*/
  while(tmp_b)
  {
    tmp_b /= 10;
    pow_b *= 10;
    ++len_b;
  }
  
  /*This loop will compare a with b in such a way that b will been truncated 
   *to have similar length to a.
   *Example: If a = 12 and b = 8761234
   *Loop #0 will truncate b to 87 and hence compare 12 with 87.
   *If it is not a match, the first digit from the left i.e. 8 will be stripped
   *Loop #1 will truncate b to 76 and hence compare 12 with 76.
   *Since 12 != 76, the first digit i.e 7 will be stripped
   *Loop continues...
   */
  do
  {
    if(a != b / (pow_b / pow_a))
    {
      pow_b /= 10;
      b %= pow_b;
    }
    else
      break;
    ++index;
  }while(index <= len_b - len_a);
  
  return (index <= len_b - len_a ? index : -1);
  
}