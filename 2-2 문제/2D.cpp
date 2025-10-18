#include <stdio.h>

char s[1000000];

int main(void) {
    int n; scanf("%d %s", &n, s);

    for (int i = 0; i < 8; i++) {
        printf("%c", s[i] + 1);
    }
}