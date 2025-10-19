#include <stdio.h>
#include <queue>
#include <algorithm>

using namespace std;
int n, m, a[2000][2000], d[2000][2000], maxv, cnt;
int dy[4] = {0, 1, 0, -1}, dx[4] = {1, 0, -1, 0};
queue<int> q;

int main(void) {
    int n, m; scanf("%d %d", &m, &n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);

            if (a[i][j] == 1) { q.push(i); q.push(j); }
            if (a[i][j] == -1) { a[i][j] = 1; cnt++; }
        }
    }

    while (!q.empty()) {
        int y = q.front(); q.pop();
        int x = q.front(); q.pop();

        cnt++;

        for (int i = 0; i < 4; i++) {
            int ty = y + dy[i], tx = x + dx[i];

            if (!(0 < ty && ty <= n)) continue;
            if (!(0 < tx && tx <= m)) continue;
            if (a[ty][tx] == 1) continue;

            q.push(ty); q.push(tx); d[ty][tx] = d[y][x] + 1;
            a[ty][tx] = 1;

            maxv = max(maxv, d[ty][tx]);
        }
    }

    if (cnt < n * m) maxv = -1;

    printf("%d", maxv);
}