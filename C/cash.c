#include <stdio.h>
#include <math.h>

int main()
{
	float n;
	int a, b=0, c=0, d=0, e=0, f=0, g=0, h=0, i=0, j=0, k=0;
	printf("Enter change in $: ");
	scanf("%f", &n);
	a = round(n*100); 
	printf(" $ converted into cents = %d\n", a);
	
	if (a>25)
	{
		b=a/25;
		c=a%25;
		if (c>=10 && c<25)
		{
			d=c/10;
			e=c%10;
			if(e>=5 && e<10)
			{
				f=e/5;
				g=e%5;
			}
			else
			{
				g=e;
			}
		}
		else if (5<c<10)
		{
			h=c/5;
			i=c%5;
		}
		else
		{
			i=c;
		}
		printf("b (25c) = %d\n", b);
		printf("d (10c) = %d\n", d);
		printf("f ( 5c) = %d\n", f);
		printf("g ( 1c) = %d\n", g);
		printf("h = %d\n", h);
		printf("i = %d\n", i);
		printf("Total number of coins = %d\n", b+d+f+g+h+i);
	}
	
	else if (a>=10 && a<25)
	{
		b=a/10;
		c=a%10;
		if (c>=5 && c<10)
		{
			d=c/5;
			e=c%5;
		}
		else
		{
			e=c;
		}

		printf("b (10c) = %d\n", b);
		printf("d ( 5c) = %d\n", d);
		printf("e ( 1c) = %d\n", e);
		printf("Total number of coins = %d\n", b+d+e);
	}
	
	else if (a>=5 && a<10)
	{
		b= a/5;
		c= a%5;
		printf("b (5c) = %d\n", b);
		printf("d (1c) = %d\n", c);
		printf("sum = %d\n", b+c);
	}
	else
	{
		printf("a (1c) = %d\n", a); 
	}
	return 0;
}