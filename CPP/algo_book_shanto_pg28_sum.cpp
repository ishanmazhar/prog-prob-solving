#include <iostream>
using namespace std;

int main() {
	int n, sum;
	cin >> n;
	
	// using formula
	if (n > 0) 
	{
	    sum = n * (n + 1) * (n + 1) / 2 - n * (n + 1) * (2 * n + 1) / 6;
	    cout << "The sum is " << sum << endl;
	} else cout << "Please enter a positive integer." << endl;
	
	// using for loop
	int sum2 = 0;
	for (int i = 1; i <= n; i++) 
	{
	    sum2 += i * (n - i + 1);
	}
	cout << "The sum is " << sum2 << endl;
	return 0;
}
