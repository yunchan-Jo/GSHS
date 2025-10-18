#include <stdio.h>
#include <math.h>

int gcd(int x, int y) {
    if (y == 0) return x;
    return gcd(y, x % y);
}

int main(void) {
    int t; scanf("%d", &t);

    while (t--) {
        int a, b; scanf("%d %d", &a, &b);

        int k = 1440 / gcd(abs(a - b), 1440);

        printf("%02d:%02d\n", (k * (60 + a) % 1440) / 60, (k * (60 + a) % 1440) % 60);
    }
}