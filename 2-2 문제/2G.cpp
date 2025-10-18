#include <stdio.h>

int sum[1000000];

void f(int lef, int rig) {
    if (sum[rig] - sum[lef - 1] == rig - lef + 1) {
        printf("1"); return;
    }
    else if (sum[rig] - sum[lef - 1] == 0) {
        printf("0"); return;
    }

    printf("-");

    f(lef, (lef + rig) / 2);
    f((lef + rig) / 2 + 1, rig);
}

int main(void) {
    int n; scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        char c; scanf(" %c", &c);

        sum[i] = sum[i - 1] + c - 48;
    }

    f(1, n);
}