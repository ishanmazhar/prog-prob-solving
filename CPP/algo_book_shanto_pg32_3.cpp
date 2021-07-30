#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int i, n, sum;
	sum = 0;
	cin >> n;
	for (i = 1; i <= n; i++) 
	{
	    sum += pow(i, i);
	}
	cout << "Sum = " << sum << endl;
	return 0;
}