#include <stdio.h>

int sumdigit(int n);

int main()
{
	printf("sum of digits of 1234 is %d\n", sumdigit(1234));
	return 0;
}

int sumdigit(int n)
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