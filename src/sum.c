#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */

  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  if(n==1){
    return n+total;
  }
  else{
    return sumtail(n-1,n+total);
  }
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert (n >= 1); // integers are summed from 1, meaning n must be greater than or equal to 1.
  int i=1;// counter variable is set to start at 1 because integers are summed from 1 to n.
  int sum_while=0;
  while(i<=n){
    
    sum_while+=i;// current number in list is added to sum
    i++;// next number in list is equal to previous number +1
  }
  return sum_while;// sum of numbers from 1 to n is returned
}

