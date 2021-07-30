#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    if (N % 2 != 0) printf("Weird");
    if (N % 2 == 0 && (N >= 2 && N <= 5)) printf("Not Weird");
    if (N % 2 == 0 && (N >= 6 && N <= 20)) printf("Weird");
    if (N % 2 == 0 && N > 20) printf("Not Weird");

    return 0;
}
