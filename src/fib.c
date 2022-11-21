/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    if(n==1){
        return p; //first fibonacci number is returned.
    }
    else if(n==2){
        return pp;//second fibonacci number is returned
    }

    return fib(n-1,p,pp)+fib(n-2,p,pp);// the sum of fib(n)+fib(n-1) is returned.
}
