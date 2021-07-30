#include <stdio.h>
int main()
{
    long n;
    int count = 0, a;
    printf("Enter an integer: ");
    scanf("%lld", &n);

    while (n != 0) {
        n /= 10;     // n = n/10
        a = n % 10;
        printf("%d\n", a); 
        ++count;
    }

    printf("Number of digits: %d", count);
}