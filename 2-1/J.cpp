#include <iostream>
#include <algorithm>
#include <string>
#include <vector>

using namespace std;
int n, m;
string str;
vector<string> v;

void f(int num, string s) {
    if (s.size() == n - m) {
        v.push_back(s); return;
    }
    
    for (int i = num; i < n; i++) {
        f(i + 1, s + str[i]);
    }
}

int main(void) {
    cin >> n >> m >> str;

    f(0, "");

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << "\n";
    }
}