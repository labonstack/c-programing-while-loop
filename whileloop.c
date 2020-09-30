#include <stdio.h>

/* This is an example of a "while" loop in c programing */
void main( )
{
  int count;
  count = 0;                                       // Declaration of a Variable
  while (count < 6)                                // while(end condition of loop) 
  {
    printf("The value of count is %d\n",count);   //Statements to be executed repeatedly 
    count = count + 1;                            //increment count by 1
  }
}
