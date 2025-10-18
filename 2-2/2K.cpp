#include <stdio.h>

int main(void) {
    int n; scanf("%lld", &n);

    if (n % 2 == 0 || n % 5 == 0) {
        printf("-1"); return 0;
    }

    int one = 1 % n, cnt = 1;
    while (one) {
        cnt++;
        one = (one * 10 + 1) % n;
    }
    for (int i = 1; i <= cnt; i++) {
        printf("1");
    }
}