#include <stdio.h>

int a[1000000];

int main(void) {
    int n; scanf("%d", &n);

    int sum = 0; a[0] = -1;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);

        if (a[i - 1] + 1 == a[i]) {
            printf("-1"); return 0;
        }

        sum += (a[i] - a[i - 1] - 2) / 2 + (a[i] - a[i - 1] - 2) % 2;
    }

    printf("%d", sum + n);
}