#include <stdio.h>
int main()
{
    long long c;
    int count = 0;

    printf("Enter an integer: ");
    scanf("%lld", &c);

    while(c != 0)
    {
        // n = n/10
        c /= 10;
        ++count;
    }

    printf("Number of digits: %d", count);
}
