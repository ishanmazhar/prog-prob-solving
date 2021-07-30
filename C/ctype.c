#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

int main ()
{
   char a[] = "23a5";
   int n;
   for (int i = 0, n = strlen(a); i < n; i++)
   {
       if( isdigit(a[i]) )
       {
           printf ("%c is an int\n", a[i]);
       }
       else
       {
           printf ("%c is an not an int\n", a[i]);
       }
   }

   if (atoi(a) == true)
   {
       printf("a is an int\n");
   }
   else
   {
       printf("a is not an int\n");
   }
   printf("a = %i\n", atoi(a));
   return(0);
}
