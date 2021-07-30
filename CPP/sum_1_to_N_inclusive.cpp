#include <iostream>
using namespace std;

int main() {
	int n, sum;
	cin >> n;
	if (n > 0) sum = (n * (n + 1)) /2;
	else sum = -((abs(n) * (abs(n) + 1)) / 2) + 1;
	cout << "The sum from integer 1 to N inclusive is " << sum << endl;
	return 0;
}
