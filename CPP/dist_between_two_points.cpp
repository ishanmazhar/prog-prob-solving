#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double x1, y1, x2, y2, dist;
	cin >> x1 >> y1 >> x2 >> y2;
	dist = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));
	cout << "The distance is " << dist << endl;
	return 0;
}
