#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int year;
    cin >> year;
    if (year % 400 == 0) cout << year << " is a leap year." << endl;
    else if (year % 4 == 0 && year % 100 != 0) cout << year << " is a leap year." << endl;
    else cout << year << " is not a leap year." << endl;
	return 0;
}
