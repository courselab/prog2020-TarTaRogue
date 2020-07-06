/* m011.c - Count words.

   This program takes the name of an ASCII text file passed as a command 
   line argument, and outputs the number of words in this file. A word is 
   a sequence of alphabetic characters delimited by blanks. A sample text 
   file i011.txt is provided for convenience (should you desire to test with
   another text file, make sure it is in pure ASCII format, not UTF-8 or 
   other milti-byte format.

   E.g.

      command line    : m011 i011.txt
      expected output : 98

   Directions:

      Please, edit function wordcount();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define USAGE "m011 <filename>\n"

/* Return the number of words in ascii text file 'filename'.*/

int wordcount (char *a[50])
    {

    FILE *arq;
    char str[100],d[10];
    int x,i,k,z,j;


      arq=fopen(*a,"r");
    z=0;
    k=0;
    while ( fgets(str,1000,arq)!=NULL)
{

    x=strnlen(str);


    for(i=0;i<=(x-1);i=i+1)
    {



        if(str[i]==' ')
        {
            k=k+1;

        }


        if (x==1)
        {
            z=z-1;
        }
    }

 z=z+1;


}
fclose(arq);

return k+z;
    }

/* Do not edit function main. */

int main (int argc, char **argv)
{
  int n;
  int g;

  if (argc < 2)
    {
      printf (USAGE);
      exit(1);
    }
  
  n = wordcount (argv[1]);

  printf ("%d\n", n);
  
  return 0;
}
