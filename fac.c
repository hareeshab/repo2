#include <stdio.h>
 
fac()
{
  int c, n, fact = 1;
 n=55555;
 
  for (c = 1; c <= n; c++)
    fact = fact * c;
 
  printf("Factorial of %d = %d\n", n, fact);
 
}
