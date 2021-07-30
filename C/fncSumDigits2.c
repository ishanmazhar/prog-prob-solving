#include <stdio.h>

int sd(int n);

int main()
{
	int a, b = 0, c = 1, sum = 0;
	for (int i = 0; i <5; i++)
	{
		b = b + 1; 
		c = b * 2; 
		if (sum < 10)
		{
		    sum = sum + c;
		}
		else
		{
			sum = sum + sd(c);
		}
		
		printf (" b = b + 1 = %d\n", b);
		printf (" c = b x 2 = %d\n", c);
		printf (" sum = sum + c = %d\n\n", sum);
	}
	
	printf (" The sum = %d\n", sum);	
		
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