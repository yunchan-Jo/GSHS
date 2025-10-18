#include <stdio.h>
#include <algorithm>

using namespace std;
int n, m, x[1000000], y[1000000], ans = 2000000000;

void f(int num, int x1, int y1, int x2, int y2, int val) {
    if (num > m) {
        ans = min(ans, val); return;
    }

    f(num + 1, x[num], y[num], x2, y2, val + abs(x1 - x[num]) + abs(y1 - y[num]));
    f(num + 1, x1, y1, x[num], y[num], val + abs(x2 - x[num]) + abs(y2 - y[num]));
}

int main(void) {
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= m; i++) {
        scanf("%d %d", &x[i], &y[i]);
    }

    f(1, 1, 1, n, n, 0);

    printf("%d", ans);
}