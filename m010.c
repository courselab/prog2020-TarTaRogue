/* m010.c - Day of the week.

   This program takes two integers read as command line arguments
   representing, respectively, the day and the month of a date in
   year 2020, and produces as output the corresponding day of the week.
   Output should be: Sunday, Monday, Thursday, Wednesday, Thursday,
   Friday, Saturday.

   E.g.

      command line    : m010 2 6
      expected output : Thursdays

   Directions:

      Please, edit function day_of_week();
      do no not change function main().

 */

#include <stdio.h>
#include <stdlib.h>

#define USAGE "m010 <day> <month>\n"

enum {sun, mon, tue, wed, thu, fri, sat};

/* Return the day of the week in the numeric form:
   Sunday=0, Monday=1... Saturday=6.*/


int PA ( int a0, int r, int k)
{ int a;
    a=(a0+(r*(k)));
    return(a);
}



int day_of_week (int a, int b)
{   int qua[60],qui[60],sex[60],sa[60],dom[60],seg[60],ter[60],z,k,t;

/* multiplo quarta */
z=0;
while(z<50){

    qua[z]=PA(1,7,z);
    z=z+1;

    }
/*multiplo quinta */
z=0;
while(z<50){

    qui[z]=PA(2,7,z);
    z=z+1;

    }
/*sexta */
z=0;
while(z<50){

    sex[z]=PA(3,7,z);
    z=z+1;

    }
/*sabado */
z=0;
while(z<50){

    sa[z]=PA(4,7,z);
    z=z+1;

    }
/*domingo */
z=0;
while(z<50){

    dom[z]=PA(5,7,z);
    z=z+1;

    }
/* segunda */
z=0;
while(z<50){

    seg[z]=PA(6,7,z);
    z=z+1;


    }
/* terça */
z=0;
while(z<=50){

    ter[z]=PA(7,7,z);
    z=z+1;

    }


/* printf(" repetiu segunda %d %d %d %d %d %d %d\n",seg[0],ter[0],qua[0],qui[0],sex[0],sa[0],dom[0]); */




        switch (b)
        {

         case 1:{
             a=a;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }



            break;

         case 2:{
             a=a+31;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }



            break;

         case 3: {
             a=a+31+29;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 4:{
             a=a+31+29+31;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 5:{
             a=a+31+29+31+30;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 6:{
             a=a+31+29+31+30+31;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 7:{
             a=a+31+29+31+30+31+30;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 8:{
             a=a+31+29+31+30+31+30+31;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 9:{
             a=a+31+29+31+30+31+30+31+31;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 10:{
             a=a+31+29+31+30+31+30+31+31+30;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 11:{
             a=a+31+29+31+30+31+30+31+31+30+31;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;

         case 12:{
             a=a+31+29+31+30+31+30+31+31+30+31+30;
             for(z=0;z<60;z=z+1)
             {
                 if(a==qua[z])
                 {
                     k=3;
                 }
                if(a==qui[z])
                {
                    k=4;
                }
                if(a==sex[z])
                {
                    k=5;
                }
                if(a==sa[z])
                {
                    k=6;
                }
                if (a==dom[z])
                {k=0;
                }
                if (a==seg[z])
                {
                    k=1;
                }
                if (a==ter[z])
                    {
                        k=2;
                    }
             }

         }
            break;
        default: printf("erro");
        break;
        }




   return k;
}



/* Do not edit function main. */

int main (int argc, char **argv)
{
  int day, month, dweek;
  int g;

  if (argc < 3)
    {
      printf (USAGE);
      exit(1);
    }
  
  day = atoi(argv[1]);
  month = atoi(argv[2]);

  dweek = day_of_week (day, month);
  
  switch (dweek)
    {
    case sun:
      printf ("Sunday\n");
      break;
    case mon:
      printf ("Monday\n");
      break;
    case tue:
      printf ("Tuesday\n");
      break;
    case wed:
      printf ("Wednesday\n");
      break;
    case thu:
      printf ("Thursday\n");
      break;
    case fri:
      printf ("Friday\n");
      break;
    case sat:
      printf ("Saturday\n");
      break;
    default:
      printf ("Something wrong\n");
      break;
    }
  
  return 0;
}
