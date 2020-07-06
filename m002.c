/* m002.c - Sort three variables.

   This program takes three integers read as command 
   line arguments and outputs them in ascending order.

   E.g.

      command line    : m002 5 20 7
      expected output : 5 7 20

   Directions:

      Please, edit function sort();
      do no not change function main().

 */


#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>

#define USAGE "m002 <num1> <num2> <num3>\n"

/* Sort three integers x, y, z in ascending order.*/

void sort (int *a,int *b, int *c)
{
    int x,i,z,k;


    if ( *a<*b &&  *c<*b)
    {
        z=*b;
    }
    else {
            if(*b<*a && *c<*a)
                {
                    z=*a;
                }
            else
            {
                z=*c;
            }
    }



if ( z!=*a && z!=*b)
{
    if(*a<*b)
    {

        x=*b;
        k=*a;
        *b=x;
        *a=k;
         *c=z;

    }
    else
    {
        *c=z;
        x=*a;
       k=*b;
       *b=x;
       *a=k;
    }

}
else {

if (z!=*a && z!=*c)
{
    if (*a<*c)
    {

        x=*c;
        k=*a;
        *c=z;
        *b=x;
        *a=k;


    }
    else
    {


        x=*a;
        k=*c;
        *a=k;
        *b=x;
        *c=z;


    }
}

else
{
    if(*b<*c)
    {

        x=*c;
        k=*b;
        *a=k;
        *b=x;
        *c=z;
    }
    else
    {


        x=*b;
        k=*c;
        *c=z;
        *b=x;
        *a=k;
    }

}




}
}

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a, b, c;

  if (argc < 4)
    {
      printf (USAGE);
      exit(1);
    }

  a = atoi(argv[1]);
  b = atoi(argv[2]);
  c = atoi(argv[3]);
  
  sort (&a, &b, &c);

  printf ("%d %d %d\n", a, b, c);
  
  return 0;
}
