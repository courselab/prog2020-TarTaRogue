/* m005.c - Determinant.

   This program reads the integer coefficients of a 3x3 matrix
   and outputs the matrix's determinant. Matrix coefficients
   are read from standard input one line at a time, in the form
   of blank-separated integers.

   E.g.

      command line    : m005
      standard input  : 1 2 3
                        2 1 3
                        3 2 1
      expected output : 12

   Directions:

      Please, edit function determinant();
      do no not change function main().

*/

#include <stdio.h>
#include <stdlib.h>

/* Return the determinant of a 3x3 integer matrix.*/

int determinant (int a[3][3])
{
      int i,j,x;
    
    i=0;
    j=0;
    x=a[i][j]*a[i+1][j+1]*a[i+2][j+2]+a[i][j+1]*a[i+1][j+2]*a[i+2][j]+a[i][j+2]*a[i+1][j]*a[i+2][j+1]-(a[i][j+2]*a[i+1][j+1]*a[i+2][j]+a[i][j]*a[i+1][j+2]*a[i+2][j+1]+a[i][j+1]*a[i+1][j]*a[i+2][j+2]);


    return (x);
}



/* Do not edit this function. */

int main (int argc, char **argv)
{
  int a[3][3];
  int det;
  
  /* Read matrix lines. */
  
  scanf ("%d %d %d", &a[0][0], &a[0][1], &a[0][2]);
  scanf ("%d %d %d", &a[1][0], &a[1][1], &a[1][2]);
  scanf ("%d %d %d", &a[2][0], &a[2][1], &a[2][2]);

  det = determinant (a);
  
  printf ("%d\n", det);
  
  return 0;
}
