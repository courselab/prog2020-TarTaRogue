/* m004.c - Binary to decimal.

   This program takes a string read as a command line argument and,
   interpreting it as a positive binary integer, outputs its 
   corresponding value in decimal base.


   E.g.

      command line    : m004 0011 
      expected output : 3

   Directions:

      Please, edit function decimal();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Return the value in decimal base of the string b, interpreted
   as the a positive binary number. If the string contains any
   characters other than '1's and '0's, truncate the string
   right before the spurious character (eg. truncate 110x001
   into 110); an empty string means zero. */

int decimal (char *b)
{   char a,d[50],e[50];
    int x,i,k;
    x=strnlen(b);
    strncpy(d,b,x);
    d[x+1]='\0';
    k=0;
    for(i=0;i<=x-1;i=i+1)
    {
        if(d[i]==' ')
        {
            k=i;
        }
    }

    strncpy(e,d+k,x-k);
    e[x-k]='\0';
    printf("copia 2 %s\n",e);


    k=0;
    x=strlen(e);

    for (i=0;i<=x-1;i=i+1)
    {
        a=e[i];

         if (a=='1')
        {
            k=k+ele(2,x-i-1);

        }
    }

return k;

}

int ele (int a, int b)
{   int k,i,x;
    x=a;
    if(b==0 || b==1)
    {
        if(b==0)
        {
            k=1;
        }
        else
        {
            k=a;
        }
    }

    else
    {
        for (i=1;i<b;i=i+1)
        {
            a=x*a;

        }

        k=a;

    }

return k;
}


#define USAGE "m004 <string>\n"

/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }

  n = decimal (argv[1]);

  printf ("%d\n", n);
  
  return 0;
}
