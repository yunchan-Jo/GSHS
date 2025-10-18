#include <stdio.h>
#include <string.h>

char a[1000000];

int main(void) {
    scanf("%s", &a[1]);

    int cnt = 0;
    for (int i = 1; i <= strlen(&a[1]); i++) {
        if (a[i] < 'A') cnt = cnt * 10 + a[i] - 48;
        else {
            for (int j = 1; j <= cnt; j++) {
                printf("%c", a[i]);
            }
            cnt = 0;
        }
    }
}