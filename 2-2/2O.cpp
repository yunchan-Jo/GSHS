#include <stdio.h>

char t[100][100], a[100], b[100], p[100];
int cnt, m, done, n;

void f(int num) {
    if (num == m) {
        cnt++;
        int ok = 0;
        for (int i = 1; i <= m; i++) {
            if (a[i] != p[i]) ok = 1;
            // printf("%c", p[i]);
        }
        // printf("%d\n", ok);

        if (ok == 0) { done = 1; }

        return;
    }

    for (int i = 'A'; i < 'A' + n; i++) {
        if (t[p[num]][i] == b[num]) {
            p[num + 1] = i; f(num + 1);
        }
        if (done == 1) return;
    } 
}

int main(void) {
    scanf("%d", &n);

    for (int i = 'A'; i < 'A' + n; i++) {
        for (int j = 'A'; j < 'A' + n; j++) {
            scanf(" %c", &t[i][j]);
        }
    }

    scanf("%d", &m);

    for (int i = 1; i <= m; i++) {
        scanf(" %c", &a[i]);
    }

    for (int i = 1; i < m; i++) {
        b[i] = t[a[i]][a[i + 1]];

        printf("%c", b[i]);
    }

    for (int i = 'A'; i < 'A' + n; i++) {
        p[1] = i; f(1);

        if (done == 1) break;
    }

    printf("%d", cnt);
}