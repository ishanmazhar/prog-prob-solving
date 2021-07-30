#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int i, j, k, total_sum, sum, n, prod, count;
	count = 1;
	prod = 1;
	sum = 0;
	total_sum = 0; 
	cin >> n;
	
	for (i = 0; i < 3; i++)  
	{
	    for (j = 0; j <= i; j++) 
	    {
            for (k = 0; k <= j; k++)
            {
                prod *= count;
                count++;
            }
            sum += prod; 
            prod = 1;
	    }
	    cout << "sum = " << sum << endl;
	    cout << "count = " << count << endl;
	    total_sum += sum; 
	    sum = 0;
	}
	cout << "\ntotal sum = " << total_sum << endl;
}
