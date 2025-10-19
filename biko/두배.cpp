#include <stdio.h>
#include <algorithm>

using namespace std;
typedef long long ll;
ll a[1000000], d[1000000], sum;

int main(void) {
    ll n; scanf("%lld", &n);

    for (ll i = 1; i <= n; i++) {
        scanf("%lld", &a[i]);

        if (i == 1) continue;

        if (a[i - 1] < a[i]) {
            ll x = a[i - 1], y = a[i], cnt = -1;

            while (x <= y) { x *= 2; cnt++; }
            
            d[i] = max(d[i - 1] - cnt, 0LL);
        }
        else if (a[i - 1] > a[i]) {
            ll x = a[i - 1], y = a[i], cnt = 0;

            while (x > y) { y *= 2; cnt++; }

            d[i] = d[i - 1] + cnt;
        }
        else d[i] = d[i - 1];

        sum += d[i];
    }

    printf("%lld", sum);
}