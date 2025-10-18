#include <stdio.h>

int n, m, cnt, d[1000000];
char a[1000000];

int main(void) {
    scanf("%d %d", &n, &m);
    scanf("%s", &a[1]);

    if (a[1] == 'I') d[1] = 1;

    for (int i = 2; i <= m; i++) {
        if (a[i] == 'I' && a[i - 1] != 'O') d[i] = 1;
        else if (a[i] == 'I' && a[i - 1] == 'O') {
            d[i] = d[i - 1] + 1;
        }
        else if (a[i] == 'O' && a[i - 1] == 'I') {
            d[i] = d[i - 1] + 1;
        }
    
        if (a[i] == 'I' && d[i] >= 2 * n + 1) {
            cnt++;
        }
    }

    printf("%d", cnt);
}