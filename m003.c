/* m003.c - Check if a positive integer is prime.

   This program takes a non-zero positive integer read as a 
   command line argument and outputs 1 or 0 depending on
   whether the number is prime or not.

   E.g.

      command line    : m003 5 
      expected output : 1

   Directions:

      Please, edit function is_prime();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Verify if the positive integer 'a' is prime. */

int is_prime (int a)
{int n,k,z,i,w;
    n=a;
    w=0;
    z=0;
    i=1;
    while(i<(a/2))
    {  k=a%(a-n+2);
    n=n-1;
    i=i+1;

            if ( k!=0)
            {z=1+z;

            }
            else
            {w=w+1;

            }

    }
    if(z==(a/2 -1))
    {
        a=1;
    }
    else
    {
       a=0;
    }
  return a;
}

#define USAGE "m003 <num>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  
  n = atoi (argv[1]);

  printf("%d\n", is_prime (n));
  
  return 0;
}
