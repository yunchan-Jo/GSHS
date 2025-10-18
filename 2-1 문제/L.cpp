#include <stdio.h>
#include <algorithm>
#include <string.h>

using namespace std;
int n;
char s[1000000];

int main(void) {
    scanf("%d %s", &n, &s[1]);

    int cnt = 0, maxv;
    for (int i = 1; i <= strlen(&s[1]); i++) {
        cnt++;

        if (s[i] != s[i + 1]) {
            maxv = max(maxv, cnt);
            cnt = 0;
        }
    }

    printf("%d", maxv);
}