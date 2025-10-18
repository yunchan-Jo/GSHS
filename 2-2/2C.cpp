#include <stdio.h>

int a[1000000];

int main(void) {
    int n; scanf("%d", &n);

    int ok = 0;
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);

        if (a[1] != a[i]) ok = 1;
    }

    if (ok == 0) printf("%d", n);
    else printf("1");
}