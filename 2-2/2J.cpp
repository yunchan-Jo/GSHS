#include <stdio.h>
#include <math.h>

int main(void) {
    long long n; scanf("%lld", &n);
    long long k = n;

    for (long long i = 2LL; i <= (int)sqrt(k); i++) {
        while (n % i == 0) {
            printf("%d ", i); n /= i;
        }
    }

    if (n != 1) printf("%lld", n);
}