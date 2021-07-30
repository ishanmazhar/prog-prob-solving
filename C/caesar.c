#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, string argv[])
{
	char b[100], c[100], d[100];
	int count;
	string e = argv[1];

    for (int n = 0, m = strlen(e); n < m; n++)
    {
    	if (isdigit(m))
    	{
    	    count++;
    	}
    }

    if (argc != 2)
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }


	else if (count == s)
	{
		int k = atoi(argv[1]);
        string a = get_string("plaintext: ");

	    printf("ciphertext: ");

	    for (int i = 0; a[i] != '\0'; i++)
	    {
	        if (a[i] >= 'A' && a[i] <= 'Z')
	        {
	            b[i] = a[i] - 65;
    	        c[i] = (b[i] + k) % 26;
    	        d[i] = c[i] + 65;
	        }
	        else if (a[i] >= 'a' && a[i] <= 'z')
	        {
	    	    b[i] = a[i] - 97;
    	        c[i] = (b[i] + k) % 26;
    	        d[i] = c[i] + 97;
	        }
	        else
	        {
	    	    d[i] = a[i];
	        }
	        printf("%c", d[i]);
	    }
	    printf("\n");
	}
	return 0;
}
