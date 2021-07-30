#include <stdio.h>

int reverse(int n) 
{ 

    int rev = 0; 

    while (n != 0) 
    { 
        rev = (rev * 10) + (n % 10); 
        n /= 10; 
    } 

    return rev; 
} 



int main()
{
   int n, t, sum = 0, remainder;

   printf("Enter an integer\n");
   scanf("%d", &n);

   t = reverse(n);
   int sumOdd = 0, sumEven = 0, c = 1;
   while (t != 0)
   {
      remainder = t % 10;
      if (c%2 == 0)
      {
         sumEven = sumEven + remainder;
      }
      else
      {
      	sumOdd = sumOdd + remainder;
      }
      printf("%d\n", remainder);
      t         = t / 10;
      c++;
   }

   printf("Sum of Odd places of %d = %d\n", n, sumOdd);
   printf("Sum of Even places of %d = %d\n", n, sumEven); 

   return 0;
}