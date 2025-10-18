#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
string str;
int c[10000];

int main(void) {
    cin >> str;

    reverse(str.begin(), str.end());

    c['A'] = 0;
    c['B'] = 1;
    c['C'] = 2;
    c['D'] = 3;
    c['E'] = 4;
    c['a'] = 5;
    c['b'] = 6;
    c['c'] = 7;
    c['d'] = 8;
    c['e'] = 9;

    int ok = 0;
    for (int i = 0; i < str.size(); i++) {
        if (ok == 0 && c[str[i]] == 0) continue;
        cout << c[str[i]]; ok = 1;
    }
}