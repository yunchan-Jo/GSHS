#include <stdio.h>
#include <string.h>

char s[1000000];

int main(void) {
    scanf("%[^\n]", s);

    int l = strlen(s);

    for (int i = 0; i < l; i++) {
        if (s[i] == ' ') {
            printf(" "); continue;
        }

        printf("%c", (s[i] - 97 + 23) % 26 + 97);
    }
}