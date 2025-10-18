#include <stdio.h>
#include <string.h>

long long n, sum;
char a[1000000];

void f(long long num, long long x, long long y) {
    if (num > n) {
        sum += x + y; return;
    }

    if (num > 1) f(num + 1, x + y, a[num] - 48);
    f(num + 1, x, y * 10 + a[num] - 48);
}

int main(void) {
    scanf("%s", &a[1]);

    n = strlen(&a[1]);

    f(1, 0, 0);

    printf("%lld", sum);
}