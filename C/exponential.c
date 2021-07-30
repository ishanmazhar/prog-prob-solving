#include <stdio.h>

int exp(int base, int exp);

int exp(int base, int exp) 
{
    long long result = 1;
   
    for (int i=1; i <= exp; i++)
    {
        result *= base;
    }
   
    return result;
}

int main()
{
	int a, b;
	for (int i = 1; i <= 10; i++)
	{
	printf ("%d\n", exp(2,3));
	}
	return 0;
}