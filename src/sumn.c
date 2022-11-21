#include "sumn.h"

#include<stdio.h>

int sumn (int n)
{
    if(n==1){
        return 1;// 1^2=1
    }
    else{
        return (2*n-1)+sumn(n-1); 
        /*using proof by induction in excerise 2
         (2*n-1)+(2*(n-1)-1)=n^2*/
    }
}