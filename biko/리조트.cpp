#include <stdio.h>
#include <algorithm>

using namespace std;
int check[1000][1000], minv = 2000000000, a[1000];
int n, m;

void f(int num, int coupon, int cost) {
    if (num > n) {
        minv = min(minv, cost); return;
    }

    if (check[num][coupon] > cost) {
        check[num][coupon] = cost;
    }
    else return;

    if (a[num] == 1) f(num + 1, coupon, cost);
    else {
        if (coupon >= 3) f(num + 1, coupon - 3, cost);
        else f(num + 1, coupon, cost + 10000);
        f(num + 3, coupon + 1, cost + 25000);
        f(num + 5, coupon + 2, cost + 37000);
    }
}

int main(void) {
    scanf("%d %d", &n, &m);

    for (int i = 1; i <= n; i++) {
        int x; scanf("%d", &x); a[x] = 1;
    }

    for (int i = 1; i <= 100; i++) {
        for (int j = 0; j <= 1000; j++) {
            check[i][j] = 2000000000;
        }
    }

    f(1, 0, 0);

    printf("%d", minv);
}