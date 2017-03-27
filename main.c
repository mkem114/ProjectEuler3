#include <stdio.h>
#include <stdlib.h>

int main ()
{
    long long int toTest = 600851475143;
    long long int currentDivisor = 2;

    while (toTest > currentDivisor)
    {
        if (toTest % currentDivisor==0) {
            toTest = toTest / currentDivisor;
            currentDivisor = 2;
        }
        else {
            currentDivisor++;
        }
    }

    printf("%lld", currentDivisor);
    return 0;
}