#include <stdio.h>

int sd(int n);
int reverse (int n);

int main()
{
	int t, n;
	int a, c = 1, sum = 0,  rem = 0, sumEven = 0, sumOdd = 0; 
	
	printf("Enter an integer = ");
	
	scanf("%d", &n);
	
	t = n; 
	
	while (t != 0)
	{
		rem = t % 10;
		if (c % 2 == 0)
		{
			if (2 * rem >= 10)
			{
				sumEven = sumEven + sd(2 * rem);
			}
			else
			{
				sumEven = sumEven + 2 * rem;
			}
			printf("Sum Even = %d\n", sumEven);
		}
		else
		{
			sumOdd = sumOdd + rem;
			printf ("Sum Odd = %d\n", sumOdd);
		}
		t = t / 10; 
		c++;
	}
	
	sum = sumOdd + sumEven;
	printf("Sum = %d\n", sum);
	
	if (sum % 10 != 0)
	{
		printf("INVALID\n");
	}
	
	printf("reverse n = %d\n", reverse(n));
	printf("Sum of digits = %d\n", sd(n));
	return 0;
}

int sd(int n)
{
	int rem, sum = 0; 
	while (n!=0)
	{
		rem = n % 10;
		sum = sum + rem;
		n = n / 10;
	}
	return sum;
}

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