/* m008.c - Lastname-Names.

   This program reads the name of a person from the standard input
   in the form 'First-name middle-names last-name' and outputs the 
   name in the form 'LAST-NAME, first-name middle-names'.
   The name should be entered using only ASCII characters (26 letter 
   of latim alphabet, no diacrictics).


   E.g.

      command line    : m008
      standard input  : John Little Bill Doe 
      expected output : DOE, John Little Bill

   Directions:

      Please, edit function lasname();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

#define MAX 256

/* Converts the string 's' from first-middle-last name 
   form into LAST-first-middle form. */

void lastname (char *p)
{   int x,i,k,z;
    char d[50],c,e[50],f[50],g[50];
    k=0;
    x=strlen(p);


    strncpy(d,p,x);
    d[x+1]= '\0';



    for (i=0;i<=(x-1);i=i+1)
    {
        c=d[i];


        if (c== ' ')
        {   z=i;



        }
    }



    strncpy(e,d,(z));
    e[z]='\0';


    strncpy(f,d+z+1,x-z);
    f[x-z-2]='\0';


    x=strnlen(f);
    strncpy(g,f,x);

    g[x]=',';
     g[x+1]= ' ';
    g[x+2]= '\0';

    for (i=0;i<=x;i=i+1)
    {
        c=g[i];

        if (c>='a' && 122>='c')
        {   g[i]=g[i]-32;
            ;
        }
    }




    strncpy(g+x+2,e,z);
     g[x+2+z]='\0';





    x=strlen(g);
    strncpy(p,g,x);
    p[x]='\0';










}




/* Do not edit this function. */

int main (int argc, char **argv)
{
  int n;
  char name[MAX];

  fgets (name, MAX-1, stdin);
  
  lastname (name);

  printf ("%s\n", name);
  
  return 0;
}
