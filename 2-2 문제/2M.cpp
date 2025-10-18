#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int phi[10000000];

int main(void) {
    long long n; scanf("%lld", &n);
    

    for (int i = 1; i <= n; i++) phi[i] = i;
    
    for (int i = 2; i <= n; i++) {
        if (phi[i] == i) {
            for (int j = i; j <= n; j += i) {
                phi[j] -= phi[j] / i;
            }
        }
    }

    long long maxp = 0, maxn = 1; 
    for (long long i = 2; i <= n; i++) {
        long long p = phi[i], q = i;
        // prlong longf("%d %d\n", phi, i);

        string s1, s2;
        while (p) { s1.push_back(p % 10 + 48); p /= 10; }
        while (q) { s2.push_back(q % 10 + 48); q /= 10; }

        sort(s1.begin(), s1.end()); sort(s2.begin(), s2.end());

        if (s1 != s2) continue;

        if (i * maxp < phi[i] * maxn) {
            maxn = i; maxp = phi[i];
        }
    }

    printf("%lld", maxn);
}