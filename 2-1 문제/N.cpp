#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;
int n;
char s[10000000];

int main(void) {
    scanf("%d %s", &n, &s[1]);

    int cnt = 0, ans = 0;
    for (int i = 1; i <= strlen(&s[1]); i++) {
        cnt++;

        if (s[i] != s[i + 1]) {
            while (cnt) {
                cnt /= 10; ans++;
            }
            ans++;; cnt = 0;
        }
    }

    int p = strlen(&s[1]), q = ans;
    for (int i = q; i >= 1; i--) {
        if (p % i == 0 && q % i == 0) {
            p /= i; q /= i; break;
        }
    }

    printf("%d/%d", q, p);
}