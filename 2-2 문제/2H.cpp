#include <stdio.h>
#include <string.h>

char s[1000000];
int cnt;

void f(int num) {
    ++cnt;
    if (s[cnt] == '-') {
        f(num / 2); f(num / 2);
    }
    else {
        for (int i = 1; i <= num; i++) {
            printf("%c", s[cnt]);
        }
    }
}

int main(void) {
    int n; scanf("%d %s", &n, &s[1]);

    int l = strlen(&s[1]);

    f(n);
}