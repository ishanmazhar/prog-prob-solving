#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i, j, n, count, sum;
	count = 0;
	sum = 0;
	cin >> n;
	for (i = 0; i < n; i++) 
	{
	    for (j = 0; j <= i; j++) 
	    {
	        count++;
	        sum += count;
	        cout << count << endl; 
	    }
	    cout << "sum = " << sum << "\n" << endl;
	}
	return 0;
}
